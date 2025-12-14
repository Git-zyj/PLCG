/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41981
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
    var_14 = var_7;
    var_15 = ((/* implicit */unsigned char) max((min((min((333640587587714416ULL), (((/* implicit */unsigned long long int) (short)16834)))), (((/* implicit */unsigned long long int) var_7)))), (var_0)));
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_3)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 *= (+(arr_9 [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1]));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)1953))));
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) != (((/* implicit */int) var_13)))) ? (((18113103486121837199ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1])))));
                            arr_16 [i_0 + 2] [i_0] [i_1] [(signed char)3] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-87)))))) != (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_2])))))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((/* implicit */signed char) (~(333640587587714416ULL)));
                        }
                        var_20 = ((/* implicit */unsigned int) (+(arr_2 [i_0])));
                        arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)58085)) + (((/* implicit */int) arr_7 [i_0 - 1] [i_3 - 1] [i_3 + 1]))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_5])) & (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
                        arr_21 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19352)) ? (((/* implicit */unsigned long long int) 524160)) : (333640587587714423ULL)));
                        var_22 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) < (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 516096U)) && (((/* implicit */_Bool) 18113103486121837167ULL))));
                        var_23 += ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_2] [i_6] [i_0 - 1])) : (-775993125)));
                        var_24 = ((/* implicit */_Bool) ((333640587587714399ULL) | (18113103486121837178ULL)));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7]))) < (18113103486121837193ULL))))));
        var_26 = ((/* implicit */long long int) ((var_4) >= (((/* implicit */int) arr_27 [i_7]))));
        arr_29 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7] [i_7]))) % (333640587587714396ULL)))));
        var_27 = (!(((/* implicit */_Bool) arr_27 [i_7])));
    }
}
