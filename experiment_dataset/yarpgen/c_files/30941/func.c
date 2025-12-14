/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30941
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
    var_13 *= ((/* implicit */_Bool) var_10);
    var_14 = ((/* implicit */signed char) (~(((long long int) var_3))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) (-(((arr_0 [i_0]) ? (arr_3 [i_1] [i_1] [6LL]) : (((/* implicit */long long int) var_9))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) var_4);
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_4])) || (((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4 + 1] [i_4 - 1]))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_9))) ? (((var_4) & (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1])))));
                    }
                    for (int i_5 = 2; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_1] [(_Bool)1] = ((/* implicit */_Bool) (+(arr_5 [i_1])));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_9)) : (arr_15 [(unsigned char)1] [i_2 + 2] [i_5 + 2] [11] [(_Bool)1] [(unsigned char)1])));
                        var_20 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_9 [i_1] [i_1] [i_5 + 2] [i_1] [i_5] [i_5 + 2]) >> (((arr_9 [10U] [(short)2] [i_5 + 1] [i_1] [i_5] [(unsigned char)5]) - (1467274496)))))) : (((/* implicit */unsigned char) ((arr_9 [i_1] [i_1] [i_5 + 2] [i_1] [i_5] [i_5 + 2]) >> (((((arr_9 [10U] [(short)2] [i_5 + 1] [i_1] [i_5] [(unsigned char)5]) - (1467274496))) + (626269743))))));
                        arr_18 [0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((signed char) (-(var_8))));
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_12)) ? (-2147483647) : (((/* implicit */int) var_5))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned char)10)))) + (2147483647))) >> (((((((/* implicit */_Bool) 495969283)) ? (((/* implicit */int) (signed char)-123)) : (2147483647))) + (136))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [(short)7] [i_1] [i_0] [(short)6] [(short)6] [i_2 + 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(arr_1 [i_2 + 1]))))));
                    }
                    var_25 = ((/* implicit */signed char) ((unsigned int) var_4));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_23 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1]);
                        var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [3ULL])) <= (((/* implicit */int) var_1)))) ? (((int) arr_10 [i_1] [i_2] [(_Bool)1] [i_1])) : (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (unsigned short)14773)) : (752699580)))));
                        var_27 = ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_1]);
                        var_28 += ((/* implicit */signed char) (((((_Bool)1) && (((/* implicit */_Bool) 2147483646)))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (var_4))))));
                    }
                    var_29 &= ((((/* implicit */int) arr_13 [(signed char)5] [(signed char)5] [4ULL] [i_1] [i_1] [i_2 - 2] [4ULL])) > (((/* implicit */int) arr_13 [13] [i_1] [(_Bool)1] [5U] [(short)11] [i_2 - 2] [i_3])));
                }
                var_30 = ((arr_19 [(signed char)3] [i_2] [i_2 + 4] [(signed char)7] [(_Bool)1] [i_2] [i_2]) ? ((-(max((var_8), (((/* implicit */long long int) arr_1 [i_2])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) arr_16 [(_Bool)1] [(short)3] [i_0]))))));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    var_31 *= ((/* implicit */unsigned char) ((unsigned long long int) (-(-2029273474))));
                    arr_28 [(short)3] [0U] [(unsigned char)7] [2] [i_1] [i_8] = ((/* implicit */unsigned char) var_5);
                    var_32 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2] [i_2 + 4] [i_1] [i_2] [i_2 + 4]))))), (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 2] [(signed char)8] [i_1] [(_Bool)1] [i_2 + 4])) ? (((/* implicit */int) var_5)) : (arr_9 [i_2 - 1] [i_2] [(unsigned char)10] [i_1] [i_2] [i_2 + 4])))));
                }
            }
            for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_9] [(signed char)3] [i_1] [i_1] [i_0] [i_0])) + (((((/* implicit */_Bool) arr_21 [i_9 + 1] [(_Bool)1] [i_1] [i_9] [i_9 + 1])) ? (((/* implicit */int) arr_10 [i_1] [i_9] [i_9 + 3] [i_1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_9])) : (var_9)))))));
                var_34 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_22 [i_9 + 1])))) <= (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [11U] [i_9] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [10LL] [10LL] [10LL] [i_1] [10LL] [(_Bool)1] [i_1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) ((var_9) % (arr_9 [i_10 + 1] [13] [i_1] [i_1] [6LL] [i_9 + 2])));
                    var_36 -= ((/* implicit */unsigned short) ((arr_13 [i_0] [(unsigned short)3] [(unsigned short)3] [i_9] [i_9 + 2] [1LL] [i_10 - 1]) ? (((/* implicit */int) arr_22 [(signed char)11])) : ((-(2147483640)))));
                }
            }
        }
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3U)))));
        arr_34 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [9ULL]))))) : (((((/* implicit */_Bool) 17840691769308370064ULL)) ? (5559812148143042873LL) : (((/* implicit */long long int) -2147483627))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_37 [(signed char)9] [i_11] = max((((arr_36 [i_11] [i_11]) ? (((/* implicit */int) arr_36 [(short)5] [i_11])) : (((/* implicit */int) arr_36 [i_11] [i_11])))), (((arr_36 [i_11] [i_11]) ? (((/* implicit */int) arr_36 [i_11] [i_11])) : (((/* implicit */int) arr_36 [22LL] [i_11])))));
        var_38 = max(((_Bool)1), ((_Bool)1));
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 4; i_13 < 21; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_39 |= ((/* implicit */signed char) (((~(((/* implicit */int) ((short) arr_38 [i_11] [i_11]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_38 [i_11] [i_11]))))))));
                        var_40 -= ((/* implicit */_Bool) (-(((arr_44 [(signed char)6] [(signed char)6] [i_12] [i_13 + 3] [i_13] [i_14]) << (((((/* implicit */int) arr_43 [i_11] [i_11] [i_11] [i_13 - 1])) - (45)))))));
                        var_41 = ((((/* implicit */long long int) -495969283)) & (9062420236176493850LL));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((var_7), (var_7))) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)96))))))))));
}
