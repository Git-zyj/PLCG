/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220102
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */short) var_10);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_9 [i_0] [i_1] [0]))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) 9324108720730267928ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((var_5) << (((/* implicit */int) (unsigned char)25))));
                                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (arr_4 [i_1] [i_3] [i_4]))) <= (arr_13 [i_1 - 3] [i_1] [i_1 - 4])));
                                var_20 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                                arr_16 [i_2] [i_2] [i_1] = ((/* implicit */signed char) 5521135961600889459ULL);
                                var_21 = ((/* implicit */short) (((+(((/* implicit */int) var_7)))) * (((/* implicit */int) ((short) (signed char)115)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)25)))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                arr_27 [i_1] [i_1 - 1] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                                var_23 = ((/* implicit */signed char) arr_24 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 2] [i_1]);
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((var_13) * (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_6] [i_0]))) : (var_6))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)0)) >> (((((/* implicit */int) (unsigned short)51017)) - (51006)))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)33881))));
                                arr_34 [4] [i_0] [i_1] [4] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) 7708703274580923059ULL))) + (2147483647))) << (((((/* implicit */int) (signed char)8)) / (var_10)))));
                                arr_35 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)2653))));
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */signed char) 4095U);
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
    var_28 = ((/* implicit */signed char) ((short) var_0));
    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) << (((var_11) - (45020840239136548ULL))))))));
}
