/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216105
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) ((unsigned int) arr_7 [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) arr_10 [i_4] [(unsigned short)14] [i_1] [i_2] [i_3] [i_4]);
                            var_21 -= ((/* implicit */short) (signed char)73);
                        }
                        arr_14 [i_0] [(unsigned short)1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_18 [i_0] [4LL] [i_2 - 1] [i_0] = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_19 [i_2 - 2] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) (signed char)73)));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_2 - 2] = ((/* implicit */int) ((_Bool) arr_9 [i_1] [i_1] [i_2]));
                        var_22 = ((/* implicit */int) ((short) ((short) (signed char)-73)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [(signed char)2] [(signed char)2] [(signed char)2] [i_7] = arr_22 [i_7] [i_1] [(short)6] [i_7];
                        arr_27 [i_1 + 4] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 3 */
                    for (signed char i_8 = 2; i_8 < 13; i_8 += 3) 
                    {
                        arr_30 [i_8] = ((/* implicit */unsigned char) 5844180896410675423ULL);
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((short) arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2])))));
                    }
                    for (short i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_17 [(signed char)5] [i_1] [i_1 - 1] [i_1 + 1]);
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((signed char) arr_1 [i_0] [i_0])));
                        arr_34 [i_9] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) 2434984237U));
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) 5844180896410675421ULL);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [2U] [12] [i_2 + 3] [(unsigned short)6] [i_0] [i_10] &= ((/* implicit */unsigned int) (unsigned short)65535);
                        arr_39 [i_10] [i_1] = ((/* implicit */_Bool) (signed char)-108);
                        var_25 = ((/* implicit */unsigned int) ((short) ((long long int) arr_2 [i_0] [i_0] [i_0])));
                        var_26 = ((/* implicit */short) arr_31 [i_0] [i_1 - 1] [(unsigned char)4] [(unsigned char)4]);
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */int) 3876668556U);
        arr_40 [9ULL] &= ((/* implicit */signed char) 17649736124141928825ULL);
        var_28 ^= ((/* implicit */int) ((signed char) -1964027157));
    }
    var_29 &= ((/* implicit */unsigned long long int) ((_Bool) var_6));
    /* LoopSeq 2 */
    for (long long int i_11 = 2; i_11 < 21; i_11 += 3) 
    {
        arr_45 [i_11] = ((/* implicit */unsigned long long int) arr_43 [i_11]);
        arr_46 [i_11] = ((/* implicit */unsigned char) min((((long long int) arr_43 [i_11])), (((/* implicit */long long int) ((signed char) max((10440868182942061338ULL), (((/* implicit */unsigned long long int) arr_43 [i_11]))))))));
        var_30 = ((/* implicit */int) ((short) arr_42 [1ULL] [i_11]));
        var_31 &= ((/* implicit */int) ((unsigned char) ((_Bool) ((unsigned short) arr_42 [i_11] [i_11 - 1]))));
    }
    for (short i_12 = 4; i_12 < 14; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 12; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                {
                    arr_53 [i_12 - 1] [i_12] [i_14] = (_Bool)1;
                    arr_54 [i_12] = ((/* implicit */signed char) ((unsigned long long int) arr_8 [6ULL] [i_13] [6ULL] [i_13 + 1]));
                    arr_55 [i_12] [i_12] = ((/* implicit */int) ((_Bool) (signed char)-1));
                }
            } 
        } 
        arr_56 [i_12] [i_12] = ((unsigned short) arr_13 [i_12 - 4] [i_12 + 1] [i_12] [i_12] [i_12 - 4]);
    }
}
