/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36029
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
    var_19 -= ((/* implicit */signed char) (-(((((var_14) < (((/* implicit */int) var_4)))) ? (((/* implicit */int) ((signed char) 3848029054317238202LL))) : (var_15)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) arr_2 [17U] [(unsigned char)12] [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)9790)) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))), (((/* implicit */long long int) min(((~(var_14))), (((/* implicit */int) var_6)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 1])))))));
        arr_12 [i_2] = ((/* implicit */signed char) var_12);
        arr_13 [5ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_9 [i_2] [i_2])) & (((/* implicit */int) var_11))))))) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((arr_9 [i_2] [i_2 + 1]), (arr_9 [i_2] [i_2 + 1]))))));
    }
}
