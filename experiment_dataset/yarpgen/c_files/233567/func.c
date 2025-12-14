/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233567
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
    var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (var_5) : (var_2))), (((/* implicit */unsigned int) var_11)))))));
    var_16 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)52))));
                            arr_15 [i_0] [i_1] [i_0] [i_2 - 4] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))));
                            arr_16 [i_2] [(unsigned short)2] [i_4] [i_3] = arr_12 [i_0] [i_1] [i_2 + 2] [i_3] [i_3];
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_18 -= ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] [i_2]);
                            var_19 = ((/* implicit */signed char) (-(arr_14 [i_5] [i_1] [i_1] [i_2] [i_1])));
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_21 [i_6] = ((/* implicit */unsigned char) (_Bool)0);
                            var_20 = ((/* implicit */signed char) var_2);
                            var_21 *= ((/* implicit */unsigned short) ((unsigned char) arr_7 [i_0] [(unsigned char)12] [i_0] [i_0]));
                        }
                        arr_22 [i_3] [i_1] [i_3] [i_3] [i_2 - 1] = ((/* implicit */unsigned char) (signed char)49);
                    }
                    var_22 += ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_23 |= ((/* implicit */unsigned long long int) min(((((~(11U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_7))));
                        arr_27 [i_0] [i_0] [i_2] [i_0] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) (~(((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))) ^ (var_4))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0] [i_7])) ? (5359260031056041684ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (5359260031056041666ULL)))))));
                        var_24 ^= ((/* implicit */short) (~(((/* implicit */int) arr_25 [i_7] [i_7] [i_2 - 3] [i_2 - 2] [i_2 + 2] [i_0]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_25 = (+(((((/* implicit */_Bool) arr_26 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2 + 1])) ? (arr_30 [i_0] [i_0] [i_2 + 2] [i_8] [i_1] [i_2 - 2]) : (arr_30 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2 - 1]))));
                        arr_32 [(unsigned char)2] [i_0] [i_2] [i_8] |= ((long long int) (!(((/* implicit */_Bool) var_12))));
                        var_26 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7936)) ? (max((arr_23 [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_0]), (140737488355327ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_0] [i_8])) ? (455102035) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [(unsigned char)9])))))))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 4])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [1ULL] [i_1]))))) : (var_10))) : (var_2));
                    }
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */int) (+(max((arr_11 [i_1] [i_1] [i_2 + 2] [i_9] [i_2] [i_2 - 4]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)62)))))))));
                        arr_35 [i_9] [i_1] = var_9;
                        arr_36 [6] [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_2]);
                        var_28 ^= ((/* implicit */signed char) arr_7 [i_0] [(signed char)8] [i_2] [i_9]);
                        var_29 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)29)) << ((((~((((_Bool)1) ? (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0] [(unsigned char)8] [(unsigned char)8] [i_2])) : (-7090996031487200456LL))))) + (2278867101LL)))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (unsigned char)73))))), (arr_34 [i_0] [i_0] [i_0] [i_0]))) : (max((4294967284U), (max((((/* implicit */unsigned int) (signed char)-39)), (var_6)))))));
        arr_37 [i_0] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
        var_31 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)43))));
        var_32 = ((/* implicit */_Bool) max((4294967285U), (((/* implicit */unsigned int) (signed char)-6))));
    }
    var_33 = ((/* implicit */int) var_4);
}
