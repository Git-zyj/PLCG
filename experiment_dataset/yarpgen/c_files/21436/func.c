/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21436
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) max((arr_1 [i_0] [14U]), (((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) var_6)), (arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_1 [i_0] [i_0])))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) max((var_11), (((/* implicit */short) arr_0 [i_0]))))), ((-(arr_1 [i_0] [8ULL]))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((min((((arr_1 [i_0] [i_0]) + (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) var_17)))), (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), ((((!(max((arr_11 [i_2]), (arr_9 [i_1] [i_2]))))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_2]))) : (arr_10 [i_1]))), (((/* implicit */long long int) (~(var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_2] [i_1])), (max((var_12), (((/* implicit */short) arr_9 [i_1] [i_1]))))))))))));
                arr_12 [i_1] = (!(((/* implicit */_Bool) (~(((arr_10 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) : (var_17)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_10 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_16)))))))))))));
            }
        } 
    } 
}
