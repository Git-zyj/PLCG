/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205588
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) << (((((/* implicit */int) var_11)) - (9)))));
    var_21 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_3)) - (49210)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [i_2] = (-(arr_8 [i_2 - 4] [i_2 - 4] [i_2] [i_2 - 4]));
                var_23 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)15872))) : (5680989006146391668LL))) / (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2] [i_0] [i_2])) << (((var_4) - (7011260518102391487LL))))))));
            }
        }
        var_24 = ((/* implicit */short) arr_0 [i_0 + 2]);
        var_25 = ((/* implicit */long long int) var_19);
        var_26 = ((long long int) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) (unsigned char)12))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_27 = ((/* implicit */short) (_Bool)1);
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4959))) & (1409443292U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (((unsigned int) var_3)))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)24331))));
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_30 &= ((/* implicit */short) 0U);
                            var_31 *= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((5680989006146391668LL) == (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7])))))) <= ((+(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) (short)-15873)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(2255692872U)))))));
                            var_32 &= ((/* implicit */unsigned char) (~(((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_22 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [i_3]))))) << (((unsigned int) (_Bool)1))))));
                            var_33 &= ((/* implicit */short) ((unsigned int) 2913238738U));
                        }
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5680989006146391669LL)) ? (((/* implicit */int) (((_Bool)1) && (((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned short)22469))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_4] [i_8])) || (((/* implicit */_Bool) (short)-15873)))))));
                            var_35 = ((/* implicit */_Bool) ((long long int) ((unsigned int) ((((/* implicit */_Bool) 2585992239U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3]))) : (4503599627370495LL)))));
                            var_36 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 12664921080246386230ULL)) ? (((/* implicit */int) (short)15856)) : (((/* implicit */int) (unsigned char)208))))) ? (((long long int) 0U)) : (((/* implicit */long long int) ((1284672659U) + (2255692872U)))))), (((/* implicit */long long int) ((arr_17 [i_3] [i_3] [i_8]) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -4503599627370495LL)))))))));
                        }
                        var_37 = ((/* implicit */short) ((int) ((0U) - (((/* implicit */unsigned int) -237013509)))));
                    }
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_38 = ((/* implicit */short) 237013509);
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 4; i_10 < 11; i_10 += 4) 
                        {
                            var_39 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15872))));
                            var_40 = ((/* implicit */short) (unsigned char)208);
                        }
                        for (unsigned char i_11 = 4; i_11 < 12; i_11 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_34 [i_11 + 2] [i_11] [i_11 - 2] [i_11] [i_11]) == (4503599627370509LL)))) <= (((((/* implicit */int) arr_27 [i_11 + 2] [i_11] [i_11] [i_11] [i_11])) << (((/* implicit */int) (_Bool)1))))));
                            var_42 = ((/* implicit */unsigned char) -237013509);
                            var_43 &= ((unsigned long long int) max(((~(1284672659U))), (((/* implicit */unsigned int) ((short) (_Bool)1)))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                        var_45 = ((/* implicit */int) (signed char)28);
                    }
                }
            } 
        } 
    }
    var_46 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (short)3278)) >> (((/* implicit */int) ((_Bool) var_12))))));
}
