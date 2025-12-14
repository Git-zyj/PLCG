/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239294
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
    var_13 = ((/* implicit */unsigned char) var_11);
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)39626))))))) / (((unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
        var_16 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)25893))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) var_6)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)25893))))))) < (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_9)))), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (unsigned short)16286)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = arr_4 [i_0] [i_1] [i_1];
            arr_6 [i_0] [i_1] [i_0] = (~((-(arr_1 [(_Bool)1] [(unsigned char)6]))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned short) max(((-(var_8))), (((/* implicit */int) arr_4 [i_0] [4ULL] [i_2])))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) min((var_5), (arr_3 [i_0] [i_0])))) : (((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(0U))))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned char) ((long long int) -4471616835930406655LL));
            var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
    }
    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_14 [(_Bool)0]))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)53887))))) ? (((/* implicit */int) max((arr_11 [i_4 + 2] [i_5]), (((/* implicit */unsigned short) (unsigned char)244))))) : (((/* implicit */int) arr_10 [i_4])))) ^ (((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) max((arr_8 [i_4 - 1] [i_4] [i_4 - 1]), (arr_4 [i_4] [(unsigned short)20] [i_5])))) - (49517)))))));
            arr_19 [i_4] [(unsigned short)7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned int) var_12)), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)49248)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_4 + 2] [i_4 + 2]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_4 - 2] [i_5] [i_4 - 2])))))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4] [i_6 - 1])) ? (((/* implicit */int) max((((/* implicit */short) arr_16 [i_4] [i_4])), (arr_20 [i_4] [i_4] [i_6 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_6])))))))));
                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_22 [i_4 - 2] [i_6 - 1] [i_4 - 2] [i_4])))) || (((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_5] [i_6 + 1] [5LL] [i_4])))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_27 [i_4] [i_4] [i_6 + 1] [11U] = ((/* implicit */unsigned char) (_Bool)1);
                    var_24 = ((/* implicit */long long int) arr_24 [5ULL]);
                    arr_28 [i_4] [i_5] [(short)9] [(unsigned short)9] = ((/* implicit */unsigned char) min((4916180774180094099ULL), (arr_21 [i_4 - 1] [i_4])));
                    var_25 = ((/* implicit */int) min((var_25), (min((((((/* implicit */_Bool) arr_16 [i_6] [i_7])) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) arr_24 [i_4])))))), ((-(((/* implicit */int) min((arr_0 [i_4]), (var_5))))))))));
                }
            }
            for (short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)32588))));
                arr_31 [i_4 - 1] [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_23 [(unsigned char)3] [(unsigned char)3] [i_4 - 2]);
            }
            for (unsigned int i_9 = 3; i_9 < 11; i_9 += 2) 
            {
                var_27 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) >> (3ULL)))));
                var_28 = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_5)))));
            }
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) arr_32 [i_4] [i_5] [(unsigned char)3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_29 [8LL] [(unsigned char)8] [i_4])))), (((/* implicit */int) ((unsigned char) var_4))))))))));
        }
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
            {
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (((~((~(18446744073709551615ULL))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))))));
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((((/* implicit */unsigned short) ((signed char) arr_1 [(signed char)22] [i_4]))), (arr_15 [i_10] [10]))))));
                arr_39 [i_4] [i_10] [i_4] = ((/* implicit */unsigned char) (+(arr_32 [i_4 + 2] [i_11 - 1] [i_11 + 1])));
                var_32 = ((/* implicit */_Bool) var_2);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    var_33 = ((/* implicit */int) arr_23 [i_4 - 1] [i_10] [i_11 + 1]);
                    var_34 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_29 [i_10] [i_4] [i_4]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 3; i_13 < 8; i_13 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) arr_38 [i_4] [i_12] [i_13]);
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_12] [9U])) << (((((var_7) + (6944773027791737839LL))) - (12LL)))))) ? (((/* implicit */int) arr_34 [0ULL] [i_4 - 2])) : ((~(((/* implicit */int) arr_33 [(_Bool)1] [i_11] [i_12]))))));
                        arr_45 [i_4] [i_10] [i_11 + 1] = ((/* implicit */short) (~((~(var_11)))));
                        arr_46 [3U] [(_Bool)1] [(unsigned char)11] [3U] [(unsigned char)11] [i_4] = arr_29 [i_4] [i_4] [i_11];
                    }
                    for (unsigned short i_14 = 3; i_14 < 8; i_14 += 3) /* same iter space */
                    {
                        arr_49 [i_4] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                        var_37 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_10] [i_11 - 1] [i_14 + 2])) ? (((/* implicit */int) arr_30 [i_14] [i_14 + 3])) : (((/* implicit */int) arr_4 [i_11 + 2] [i_11 + 2] [i_14 - 3]))));
                        arr_50 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_11] [i_11])) : (((/* implicit */int) arr_23 [i_10] [i_11 + 1] [i_14])))))));
                        var_38 = ((/* implicit */int) ((4294967281U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528)))));
                    }
                    for (unsigned short i_15 = 3; i_15 < 8; i_15 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(var_12)))))))));
                        arr_54 [i_4 + 1] [i_10] [i_11 + 2] [i_12] [(signed char)4] [i_4] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_53 [i_4] [i_4] [(signed char)8] [(signed char)6]))))));
                    }
                    var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2631))));
                    arr_55 [9] [i_4] [i_12] [(unsigned short)0] = ((/* implicit */_Bool) var_5);
                }
                for (unsigned short i_16 = 1; i_16 < 11; i_16 += 2) 
                {
                    var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) arr_34 [i_4 - 2] [i_10]))));
                    var_42 *= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_6))))));
                    arr_58 [i_4] [i_10] [i_4] [i_16 + 1] [i_10] = ((((/* implicit */_Bool) arr_1 [5U] [i_4 - 1])) ? (((unsigned long long int) arr_1 [i_4] [i_4 + 2])) : ((~(arr_1 [i_4] [i_4 + 2]))));
                }
            }
            var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((max(((unsigned short)46689), (arr_34 [i_10] [(unsigned char)5]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1790946916))))))))));
        }
    }
    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
    {
        var_44 = (~(max((((arr_21 [i_17] [(unsigned short)3]) << (((((/* implicit */int) (unsigned short)3059)) - (3023))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))));
        var_45 ^= arr_17 [i_17] [(unsigned short)6];
    }
}
