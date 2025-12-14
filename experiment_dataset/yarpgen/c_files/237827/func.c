/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237827
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_1] [i_0]), (arr_1 [i_1] [8ULL])))) ? ((~(((/* implicit */int) arr_1 [i_1] [i_0])))) : (((((/* implicit */int) arr_1 [i_1] [(short)1])) ^ (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                var_14 ^= ((/* implicit */short) var_4);
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (min((((/* implicit */unsigned short) var_4)), (var_11)))))) ? (var_7) : ((~(((var_7) - (((/* implicit */int) var_9))))))));
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((arr_8 [10] [i_2] [i_2]) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (min((arr_5 [i_2]), (var_3))) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_3]))))), (1073195805))))));
                arr_10 [i_3] [(unsigned short)10] = ((/* implicit */signed char) (_Bool)0);
            }
        } 
    } 
}
