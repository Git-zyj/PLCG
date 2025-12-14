/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36002
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
    var_17 *= ((/* implicit */unsigned short) (signed char)58);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned int) var_4);
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (signed char)-120);
                            arr_12 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_0] = ((/* implicit */_Bool) var_11);
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)120)) / (((/* implicit */int) (short)32767))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) (-(((var_9) ? (((/* implicit */int) ((unsigned short) 1206054719222503642ULL))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)120))))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                arr_16 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (unsigned char)144))))) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) (signed char)120))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */signed char) -1349365434);
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) ((signed char) 529946619))) ? (((unsigned int) (signed char)-120)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) var_8))), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_10))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1564599448U)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (short)9150)))))));
    var_21 = max((min((((/* implicit */unsigned int) max(((signed char)113), ((signed char)-120)))), (max((4294967295U), (((/* implicit */unsigned int) (signed char)-113)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17336)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
}
