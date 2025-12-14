/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46572
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (~(((12420679029773238303ULL) >> (((((/* implicit */int) (signed char)127)) - (80)))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-19690)) && (((/* implicit */_Bool) (short)-21803)))) ? (((/* implicit */long long int) (((_Bool)1) ? (323759531) : (((/* implicit */int) var_9))))) : (-881697500526443891LL)));
            arr_6 [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) arr_2 [i_0 + 3]))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_17 ^= ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_0 - 2])) ? (((/* implicit */int) (short)-19690)) : (((/* implicit */int) arr_0 [i_0 - 1])));
                arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0 + 1])) ? (arr_7 [i_0] [i_2] [i_0 + 2]) : (arr_7 [1ULL] [i_2] [i_0 - 2])));
            }
            for (short i_3 = 2; i_3 < 24; i_3 += 3) 
            {
                arr_14 [i_0 + 2] [i_3] = ((/* implicit */unsigned long long int) var_8);
                arr_15 [i_3] = ((/* implicit */short) arr_5 [i_3 + 1] [i_1] [i_0 + 2]);
            }
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                var_18 &= ((/* implicit */unsigned long long int) (signed char)-51);
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-32760))));
                arr_18 [i_0] [6] [6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) arr_8 [i_4] [i_1] [i_1] [(signed char)4])) - (((/* implicit */int) arr_12 [i_0] [i_4])))) : (((/* implicit */int) arr_0 [i_1]))));
            }
            arr_19 [(short)3] = ((/* implicit */_Bool) ((int) arr_11 [i_0 + 2] [i_0 + 2] [i_1] [i_1]));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (var_6)))) : (((/* implicit */int) arr_4 [i_0 + 1]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_17 [i_5] [i_5] [(unsigned short)11]))));
            var_22 -= var_4;
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0 - 1] [13] [i_6] [i_7])) != (((/* implicit */int) ((((/* implicit */int) (short)10533)) != (((/* implicit */int) var_14)))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 4; i_8 < 24; i_8 += 3) 
                        {
                            arr_31 [i_5] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) ^ (var_11))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_0 + 1] [i_5] [i_5])) != (((/* implicit */int) (short)-32748))))))));
                            var_24 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8 - 4]))) ^ (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [(unsigned short)20] [i_6]))) : (arr_1 [(short)10] [i_6]))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-21803)) : (((/* implicit */int) (short)19690))))) ? (((unsigned long long int) (short)-20466)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 3])))));
                        }
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0 + 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (short)-19701)) : (((/* implicit */int) arr_16 [i_0] [i_0 - 2] [i_0])))))));
                            var_27 = ((/* implicit */unsigned long long int) 323759524);
                            var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20466))) : (arr_23 [(signed char)16] [(_Bool)1] [i_9])))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_7] [i_6] [i_5])) : (((/* implicit */int) var_4)))))))));
                        }
                        for (short i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                        {
                            arr_37 [i_0] [i_5] [i_5] [21] [14LL] [i_6] = (+(arr_7 [i_0] [i_5] [i_5]));
                            var_29 = ((/* implicit */unsigned long long int) ((arr_35 [i_5] [i_0 - 1]) + (arr_35 [i_5] [i_0])));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_11))));
                            var_31 = ((/* implicit */unsigned long long int) (signed char)74);
                        }
                        for (short i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                        {
                            arr_41 [i_5] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34755)) ? (arr_23 [i_5] [i_5] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_7])))) : (arr_39 [i_5] [i_5]));
                            arr_42 [i_5] [i_7] [i_5] [i_5] [i_5] [(unsigned short)3] = ((/* implicit */int) var_10);
                            arr_43 [i_5] [(short)17] [(short)17] [i_7] [i_7] [i_7] [(short)16] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_11] [i_7] [i_5]))) >= (-3600768924921485021LL))) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_0 + 2] [i_11])) : (((/* implicit */int) arr_8 [i_0] [i_0 - 2] [(short)23] [i_0 + 3]))));
                        }
                    }
                } 
            } 
            arr_44 [i_0] [(short)8] [i_5] &= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [(signed char)10] [i_5]))))) >> ((((-(((/* implicit */int) (signed char)-45)))) - (34))));
        }
        for (short i_12 = 1; i_12 < 22; i_12 += 4) 
        {
            arr_48 [i_0] [i_12] [i_12 + 1] = ((/* implicit */signed char) (-(arr_1 [i_0 + 1] [i_0 + 3])));
            arr_49 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0 - 2] [4LL] [i_0 - 2])) ? (arr_24 [i_0] [14ULL] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))));
            var_32 &= ((/* implicit */short) -1168496446);
        }
    }
    var_33 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)23988)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-123)))) > (((/* implicit */int) var_7))))) : (((/* implicit */int) var_2)));
    var_34 = ((/* implicit */long long int) var_0);
    var_35 = ((/* implicit */unsigned short) (+(-3600768924921485021LL)));
}
