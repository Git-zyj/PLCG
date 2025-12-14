/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232017
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
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) 5711274098038019180ULL))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_13 ^= ((/* implicit */unsigned char) ((short) (signed char)122));
                    var_14 += ((/* implicit */signed char) arr_6 [i_1] [i_1] [(unsigned char)4]);
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_4 [i_0 + 1] [(signed char)8] [i_3]), (((/* implicit */unsigned int) arr_0 [i_1 - 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1112979143818068151LL)) ? (1112979143818068151LL) : (var_7)))) ? (5711274098038019177ULL) : (((/* implicit */unsigned long long int) 1112979143818068151LL)))))))));
                    var_16 = ((unsigned long long int) ((0ULL) / (((/* implicit */unsigned long long int) -4511590779154470503LL))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_0))));
                        arr_12 [10ULL] [i_1 + 1] [i_0] [(unsigned char)2] = ((/* implicit */signed char) (-(-1710159909)));
                        arr_13 [i_0] [i_1] [i_3] [i_0] [(signed char)13] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_0]);
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [(signed char)14])) ? (((((/* implicit */_Bool) (unsigned short)12313)) ? (((/* implicit */unsigned long long int) 100894327)) : (12735469975671532436ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [10ULL] [(_Bool)1] [i_0])) ? (-976493477) : (((/* implicit */int) arr_8 [(short)17] [7] [i_3] [11U])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned long long int) 100894327)) : (18446744073709551615ULL)))) ? ((((_Bool)0) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned short)50076)))) : (((/* implicit */int) arr_10 [i_0 + 2] [(unsigned short)9] [(unsigned char)17] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1])) || (((/* implicit */_Bool) (unsigned short)50076)))))));
                    }
                    arr_14 [i_0] [(signed char)0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_5) == (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])))))))) ? (((((/* implicit */_Bool) arr_5 [(unsigned short)14] [9LL] [(signed char)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)1] [i_1] [(unsigned short)13] [i_1] [i_0]))) : (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_7 [11U] [i_3] [i_3] [(_Bool)1]))))) : (var_7));
                }
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) arr_10 [i_0] [i_1] [(signed char)2] [i_1 - 1] [i_5])), (arr_7 [19LL] [i_1] [(unsigned char)18] [i_5]))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) var_9)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 6061442819300531744LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (arr_9 [i_0]) : (((/* implicit */long long int) ((((var_11) ? (((/* implicit */int) (unsigned short)65280)) : (-534820433))) + (((((/* implicit */_Bool) 31U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)0)))))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (-1751284968)))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)16])))) : (((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [9LL] [i_5] [i_1 + 1] [(_Bool)1]))))))) ? (((((/* implicit */_Bool) max((11ULL), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_5] [(short)4] [i_1]))))) ? (((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_1] [i_1] [i_1] [(short)4])) ? (arr_16 [i_6] [4LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))))) : (((/* implicit */unsigned long long int) ((int) arr_5 [i_6 + 1] [i_1 + 1] [(unsigned char)11]))))))));
                        arr_20 [i_0] [8LL] [i_1] [(signed char)16] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 431702224)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)12313))))) : (arr_11 [(unsigned short)20] [(unsigned short)3])));
                    }
                    for (short i_7 = 3; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12735469975671532436ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551602ULL) <= (((/* implicit */unsigned long long int) -100894327)))))))))));
                        arr_24 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 + 2] [i_0 + 1] [(signed char)21] [(_Bool)1] [i_0 + 2])) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) : (((((/* implicit */_Bool) arr_19 [i_0 + 3] [0LL] [i_0 + 1] [i_0 + 3] [i_0] [i_0 + 2])) ? (7677656149429473578LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 2] [2ULL] [i_0 + 1] [i_0] [11U] [i_0 + 1]))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_7 + 1] [i_0 + 1])) & (((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_7 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_7 - 2] [i_0 + 2])))))))));
                    }
                    for (short i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (arr_2 [(signed char)10] [i_1 - 2])))) : (((/* implicit */int) arr_21 [i_5] [(short)18] [i_5] [i_5] [i_5] [i_5]))))) | (((((/* implicit */_Bool) arr_15 [i_1 - 2] [i_8 - 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [18LL] [i_1] [i_5])), ((unsigned short)20942)))))))));
                        arr_27 [(signed char)12] [i_5] [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)32758))))) : (((/* implicit */int) (unsigned short)44594))))), (((((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) >> (((-100894327) + (100894389)))))) ? (18446744073709551611ULL) : (18446744073709551615ULL)))));
                    }
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_16 [i_1 - 2] [i_0 + 2] [i_5]), (arr_16 [i_1 - 2] [i_0 + 2] [i_5]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    var_26 -= ((_Bool) (!(((/* implicit */_Bool) 5179289870821565551LL))));
                    var_27 = ((/* implicit */unsigned short) arr_21 [(_Bool)1] [i_9 - 1] [19] [i_1] [i_1] [i_0]);
                }
            }
        } 
    } 
    var_28 = ((short) ((((/* implicit */_Bool) max((645028442U), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) : (max((-8025313509307553665LL), (((/* implicit */long long int) var_6))))));
}
