/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239109
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2050176336U))))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1720073019716888284LL)) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_11)))) : ((~(((/* implicit */int) var_8))))))) ? ((+((-2147483647 - 1)))) : (((((/* implicit */_Bool) max(((unsigned short)11), (((/* implicit */unsigned short) (short)-14811))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-35)), ((unsigned char)135)))) : (((/* implicit */int) var_10)))))))));
        }
        var_21 = ((/* implicit */unsigned int) min((var_21), ((((~(var_13))) << (((((/* implicit */int) var_18)) - (51)))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (unsigned char)29)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_12)))))))) ? (((unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_23 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)3)) + (((/* implicit */int) (short)-21731))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */_Bool) (unsigned short)18599)) || (((/* implicit */_Bool) 9679567896490573022ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned long long int) 1051248597U)), (var_1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((min((4091425881U), (((/* implicit */unsigned int) arr_9 [i_3])))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7713))))))))));
                        arr_16 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_9)))))))) ^ (((/* implicit */int) var_12))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 3; i_5 < 15; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) (((-(((unsigned int) var_4)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_5] [i_4] [i_3])), (var_19))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (4294959104U)))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((min((min((((/* implicit */unsigned long long int) 1132109449U)), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_0])) || (((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_3] [i_2] [i_0] [i_0]))))))) << ((((~(arr_14 [i_0] [i_0] [i_4] [i_5 - 2]))) - (10703754073742356181ULL))));
                            arr_20 [i_0] [i_0] [i_3 - 2] [i_5] [i_0] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24127))) % (4035747189U)));
                            arr_21 [i_0] [i_2] [i_4] [i_0] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_3 - 2] [i_4] [i_5 + 1]))) - (((((/* implicit */_Bool) (signed char)-31)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))))))) - (((((/* implicit */_Bool) -439320366)) ? (133169152U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_2])) <= (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))));
            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_14 [i_0] [i_0] [i_0] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_2])))))) < (0)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                arr_25 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)8691)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16))) : (26ULL)))));
                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)18121))));
                var_29 = ((/* implicit */int) arr_1 [i_0] [i_0]);
            }
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    arr_31 [i_0] [i_2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8689912318551827866LL)) || (((/* implicit */_Bool) var_17))));
                    var_30 = ((/* implicit */int) arr_9 [i_7]);
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_28 [i_8] [i_0] [i_0]);
                        var_31 |= ((/* implicit */short) var_0);
                        arr_36 [i_0] [i_2] [i_7] [i_0] [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3420028161U)) ? (min((((/* implicit */unsigned long long int) arr_32 [i_7 - 1] [i_7 - 1])), (9807799313547408152ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2136))))))));
                        var_32 = ((/* implicit */unsigned short) ((signed char) var_0));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((long long int) (unsigned short)65535)) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_14 [i_0] [i_9] [i_7 + 2] [i_8])) && (((/* implicit */_Bool) var_2))))))))));
                    }
                    for (int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        var_34 ^= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0]);
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-1LL) / (((/* implicit */long long int) 1875950675U)))) & (((/* implicit */long long int) 0U))))) || (((/* implicit */_Bool) -217456342876278516LL))));
                        var_36 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_8])) : (((/* implicit */int) arr_17 [i_8] [i_8])))))), (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) < (14937286870177374242ULL))))));
                        arr_41 [i_0] [i_0] [i_8] [i_8] [i_10] [i_10] [i_0] = ((/* implicit */int) arr_22 [i_10] [i_10]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_37 += ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0] [i_0])) / (-2147483626)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_0 [i_7 + 2])))));
                        arr_46 [i_11] [i_2] [i_11] [i_8] [i_11] = ((/* implicit */signed char) (((+(var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (var_6)))))));
                        var_38 -= ((/* implicit */_Bool) arr_12 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1]);
                    }
                }
                var_39 = ((/* implicit */long long int) min((((/* implicit */int) (short)-7960)), (-67453950)));
                var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */int) var_10)) != (-2144339269)))))) | (((/* implicit */int) var_18))));
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19272)) ? (((/* implicit */long long int) var_5)) : (var_14)))) ^ ((~(12154483592486173808ULL)))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) arr_11 [i_7] [i_2] [i_7 + 1] [i_2])) ^ (((((/* implicit */_Bool) arr_29 [i_0] [i_0])) ? (var_6) : (((/* implicit */int) var_9))))))));
                arr_47 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_2] [i_2] [i_7] [i_2] [i_2]))) : (arr_14 [i_0] [i_0] [i_7 + 2] [i_7]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((683891375288855681ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21774)))))))))) & (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39603))))))));
            }
            /* vectorizable */
            for (unsigned short i_12 = 4; i_12 < 13; i_12 += 4) 
            {
                var_42 = ((/* implicit */long long int) (~(((/* implicit */int) (short)17678))));
                var_43 = ((/* implicit */unsigned int) max((var_43), (((arr_33 [i_0] [i_12 - 3] [i_12] [i_12] [i_12]) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
            }
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            arr_52 [i_0] &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 126U)))));
            var_44 |= (unsigned short)0;
            var_45 = ((int) 512U);
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            var_46 = ((/* implicit */short) (+((+(arr_51 [i_0] [i_0] [i_0])))));
            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_28 [i_14] [i_0] [i_0]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_15 = 3; i_15 < 11; i_15 += 1) 
    {
        var_48 = ((/* implicit */unsigned short) ((unsigned int) var_6));
        var_49 = ((/* implicit */unsigned short) arr_13 [i_15] [i_15 + 1] [i_15]);
        var_50 = ((arr_51 [i_15 - 3] [i_15] [i_15]) << (((((arr_18 [i_15 - 3] [i_15 - 3] [i_15 - 3] [i_15 - 3] [i_15 - 2] [i_15 - 2]) >> (((2861103275U) - (2861103269U))))) - (52643781U))));
    }
    for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
    {
        var_51 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((948745060U), (arr_58 [i_16])))) ? (((/* implicit */unsigned long long int) (+(arr_59 [i_16])))) : (((((/* implicit */_Bool) var_13)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned short) var_16);
        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61854))))) ? (max((((/* implicit */unsigned int) var_17)), (arr_60 [i_16]))) : (((/* implicit */unsigned int) ((1561306537) << (((((/* implicit */int) var_3)) - (50648))))))))) ? (((/* implicit */unsigned long long int) ((((arr_59 [i_16]) << (((((/* implicit */int) var_18)) - (41))))) << ((((~(((/* implicit */int) (unsigned short)41513)))) + (41523)))))) : (((((/* implicit */_Bool) (signed char)-51)) ? (13391918475132780731ULL) : (5399444238548877313ULL))))))));
    }
    var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) var_14))));
}
