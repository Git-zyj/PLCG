/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34557
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
    var_20 &= ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) (short)22230)))))) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) max((var_8), (2217146146U)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((long long int) var_13)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_2 [i_1] [i_1])), (var_14))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 574925393)) == (arr_4 [i_1] [i_1] [i_2]))))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [11] [i_1] = ((/* implicit */unsigned char) (~((~(arr_7 [i_2 + 1] [i_1] [i_2 + 2])))));
                            arr_12 [i_0] [3LL] [i_2 - 1] [11U] [11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [i_0])))))) : (min((arr_10 [i_0] [i_1] [i_2 + 2] [i_1] [i_1] [i_1]), (((/* implicit */long long int) 2217146146U))))));
                            arr_13 [i_0] [i_1] = ((/* implicit */short) max((arr_8 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */long long int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                            arr_14 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) min((((long long int) arr_10 [i_1] [i_2 - 1] [i_2] [i_1] [i_1] [i_2 + 1])), (((/* implicit */long long int) (~(arr_7 [i_2] [i_1] [i_2]))))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */long long int) var_8);
            }
        } 
    } 
}
