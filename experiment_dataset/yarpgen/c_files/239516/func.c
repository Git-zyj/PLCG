/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239516
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_7 [i_2 + 3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) * ((+(((/* implicit */int) arr_0 [i_2 + 3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3 - 1] [i_4] = ((min((var_15), (((((/* implicit */int) (unsigned char)245)) <= (((/* implicit */int) var_19)))))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_10 [i_3] [i_0] [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0]))))) ? (max((arr_10 [i_3] [i_2] [i_1] [i_3]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 1] [i_1 - 1] [i_3] [i_4] [i_4] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (var_3))))))));
                                var_20 = ((((/* implicit */_Bool) (+((+(2147483647)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18)));
                                var_21 = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_0] = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_1] [i_1] [i_1 + 2] [i_1 + 1])))));
                    var_22 = ((/* implicit */long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [2LL])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_23 &= ((/* implicit */unsigned short) min((-2147483647), (((/* implicit */int) (short)4902))));
                                var_24 -= ((((/* implicit */_Bool) min(((short)32767), (arr_13 [i_2 - 1] [i_1] [i_2 + 3] [i_2 + 2])))) ? (((/* implicit */int) arr_23 [i_2 + 2] [i_2 - 1] [i_1] [i_2 - 1])) : (((/* implicit */int) arr_13 [i_2 + 1] [i_6] [i_2 + 1] [i_2 + 3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 &= (-(((/* implicit */int) var_14)));
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_16))));
}
