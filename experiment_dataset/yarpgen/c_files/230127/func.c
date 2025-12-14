/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230127
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) max((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))))))))));
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (((unsigned short) ((signed char) 980449512135656186ULL)))));
    var_17 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-2))));
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) var_7);
                    var_20 &= 4294967295U;
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2]))));
                                arr_16 [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) + (((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 4])) >= (((/* implicit */int) arr_0 [i_1 + 3])))))));
                                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (arr_4 [i_1] [i_4] [i_2])))) ? (0) : (((/* implicit */int) ((_Bool) ((143801566U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [(unsigned char)1] [i_1 + 3])))))))))));
                                var_22 -= ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
