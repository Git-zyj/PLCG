/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202009
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
    var_19 = ((/* implicit */unsigned short) (((-(((var_11) | (((/* implicit */unsigned int) var_14)))))) / (var_5)));
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned short) var_4);
                            var_21 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_3])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)30881))));
                var_23 &= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_3 [i_0] [10LL])) * (((/* implicit */int) arr_3 [i_1] [(_Bool)1])))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [0LL] [i_1] [i_1])) != (((/* implicit */int) arr_3 [i_0] [12])))))));
            }
        } 
    } 
}
