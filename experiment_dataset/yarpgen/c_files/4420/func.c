/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4420
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_1]) != (((/* implicit */long long int) arr_2 [i_0] [i_1 + 3])))))) - (((((/* implicit */_Bool) 78611000U)) ? (((/* implicit */long long int) 961191391)) : ((-9223372036854775807LL - 1LL))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_8 [i_3] [i_0] [i_2] [i_3] [i_0 - 2] = ((/* implicit */signed char) var_10);
                        arr_9 [i_0] [0LL] [i_1] [i_0] = ((/* implicit */short) 78611012U);
                    }
                    var_19 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_2]))) ^ (4216356292U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1])))))));
                    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                var_21 -= ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) (short)-4897))))), (var_11))))));
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) arr_2 [i_4] [i_5]);
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_3);
    var_23 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_3)))))));
}
