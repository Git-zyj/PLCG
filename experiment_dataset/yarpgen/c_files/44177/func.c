/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44177
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_17 ^= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
        var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)243))))) : (var_14)))) ? (((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (4019358743U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 934511288)) / (var_4))) > (((((/* implicit */unsigned long long int) 275608552U)) + (164384004969337917ULL)))))))));
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_19 += max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4019358749U)) ? (2357660109280507113ULL) : (var_15))))))), (((var_7) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((((/* implicit */int) var_10)) << (((var_8) - (2984447247U))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (arr_0 [i_1]))))));
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2]))) : (4019358740U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_22 -= (+(((int) (signed char)-115)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)23))) : (7247346388526928266LL)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((arr_2 [i_1 + 2] [i_1 + 2]) < (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)51483))))))))));
                            var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_2] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((-(-799352887)))));
                        }
                    } 
                } 
            }
            for (signed char i_6 = 2; i_6 < 11; i_6 += 3) 
            {
                var_26 = arr_7 [i_1 + 2] [i_1 + 2];
                arr_21 [i_1 + 2] [i_1 + 3] [i_6] [12ULL] |= ((int) arr_17 [i_1] [i_1 + 2] [i_1 + 2] [i_6 - 1] [i_6 - 1]);
                var_27 = ((/* implicit */unsigned long long int) min((var_27), ((~(arr_17 [i_6] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 - 2])))));
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_24 [i_7] [i_7] [6ULL]))));
                var_29 += ((/* implicit */unsigned short) arr_3 [i_2] [i_2]);
                var_30 -= ((/* implicit */short) arr_15 [4LL] [i_7] [i_7 + 1] [i_7] [4LL]);
            }
            /* LoopNest 2 */
            for (signed char i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1])))))));
                        var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_27 [i_2] [i_2] [i_2]))) ? (((/* implicit */int) arr_22 [i_1 + 2])) : (((/* implicit */int) (_Bool)1))));
                        var_33 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_26 [i_1] [i_1] [(short)4])) ? (arr_7 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51499))) : (var_14))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10 + 2] [i_8 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 1]))))))));
                            var_35 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1] [i_9]))));
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_10 - 2] [i_8 + 2] [i_1 + 3])) ? (((/* implicit */int) arr_9 [i_10 + 1] [i_8 + 1] [i_1 + 2])) : (((/* implicit */int) arr_9 [i_10 - 1] [i_8 - 2] [i_1 - 1])))))));
                            var_37 -= ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -3085271972786852109LL)) : (arr_17 [i_10] [i_1 + 2] [i_8] [i_1 + 2] [i_10]))) % (((/* implicit */unsigned long long int) arr_28 [i_1] [i_2] [i_9])));
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            var_38 += ((((/* implicit */int) arr_33 [i_1 + 1] [i_2] [i_8] [i_8] [i_8])) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)28672)) < (((/* implicit */int) var_13))))));
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_34 [i_2] [i_8 - 1] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0)))))));
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 3) /* same iter space */
                        {
                            var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_1 + 1] [i_8 + 2] [i_8 + 2] [i_12 + 2] [i_12 - 1])) / (((/* implicit */int) arr_31 [i_1 + 1] [i_8 - 2] [i_8 + 2] [i_12 - 2] [i_12 - 1]))));
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [(_Bool)1]))));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 1) 
                        {
                            var_42 -= var_13;
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((arr_15 [(unsigned short)2] [i_8 - 2] [i_8 + 1] [i_8 + 1] [(unsigned short)2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        }
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8] [i_1 + 1] [i_8])) ? (arr_27 [i_1] [i_1 - 1] [i_1 - 1]) : (arr_27 [i_1] [i_1 + 2] [i_1]))))));
                    }
                } 
            } 
        }
        for (short i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_34 [i_1] [i_1] [i_14])) < (arr_41 [i_1] [i_14] [i_14] [i_14] [i_1])))), (var_8)))))))));
            var_46 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) arr_22 [i_1 - 1])) : (((/* implicit */int) arr_20 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 3]))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
            {
                var_47 -= ((/* implicit */unsigned char) ((arr_41 [i_1] [i_1] [i_1 + 1] [i_15] [i_15]) | (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1 + 2] [i_15]))));
                var_48 -= ((/* implicit */short) ((max((arr_19 [i_1 + 1] [i_1 + 1] [i_1]), (max((((/* implicit */int) arr_31 [i_1] [i_1 + 3] [i_1] [i_1] [i_1])), (arr_27 [i_1] [i_1 + 1] [i_1 + 1]))))) + (((/* implicit */int) var_13))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
            {
                var_49 |= ((/* implicit */signed char) ((((var_4) + (((/* implicit */unsigned long long int) var_14)))) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_1] [i_1] [i_14] [i_1] [i_16])) * (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))) : (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9031)))))))));
                var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_16]) >> (((arr_15 [i_16] [i_16] [i_16] [i_1] [i_16]) - (3580762808U)))))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned short)14053))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_1] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1))))))))))));
                var_51 -= var_9;
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_23 [10U] [10U] [10U]), (var_7)))))))));
                var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 51840246)) ? (arr_28 [i_1] [i_14] [i_1]) : (arr_26 [i_1] [i_1] [(signed char)0])))))) && (arr_48 [i_1 + 3] [i_14]))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) ((short) arr_19 [i_1] [i_1] [i_18]))))))))));
                var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) var_5))));
            }
        }
        for (unsigned short i_19 = 4; i_19 < 9; i_19 += 1) 
        {
            var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (arr_8 [i_19] [i_1 + 2])))), (((unsigned long long int) arr_9 [i_1 + 3] [i_1 + 2] [i_1])))))));
            var_57 -= ((/* implicit */short) (~((~(var_2)))));
            /* LoopSeq 1 */
            for (short i_20 = 1; i_20 < 10; i_20 += 3) 
            {
                var_58 -= ((((/* implicit */_Bool) min((arr_30 [(short)10]), (((/* implicit */long long int) arr_1 [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_30 [(short)4])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) (signed char)4)))));
                var_59 -= ((/* implicit */unsigned short) var_13);
            }
        }
    }
}
