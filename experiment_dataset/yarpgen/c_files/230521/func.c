/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230521
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
    var_16 = ((/* implicit */signed char) (-(max((4294967295U), (1073741823U)))));
    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((var_5) - (((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned int) 131071)), (3221225472U))) & (1073741798U)));
                                var_18 = ((/* implicit */short) (+((+((~(((/* implicit */int) (signed char)19))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 628380248))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 1] [i_4 - 3] [i_3] [i_3] [i_0 + 4] [i_0 + 1]))))))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((signed char) min((var_3), (((/* implicit */unsigned int) arr_9 [i_4 + 3] [i_2] [i_0 + 4] [i_0 + 3] [i_0]))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) 3504436256U);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (1073741834U) : ((+(var_6))))))));
    var_23 *= ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-33)) : (var_5)))))));
}
