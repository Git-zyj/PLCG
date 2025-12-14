/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233663
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 &= ((/* implicit */signed char) var_0);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [1LL] [i_1] [i_3] [i_2] = ((/* implicit */short) ((arr_2 [i_1]) <= (min((956157313U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)8926)) < (((/* implicit */int) arr_5 [i_3] [i_1] [(_Bool)1])))))))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1] [i_2] [i_3]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (arr_2 [i_1 + 3])))));
                        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_2] [i_2] [i_2] [(unsigned char)6] [i_2] [(signed char)9] = arr_7 [i_2] [10ULL];
                            var_17 -= ((/* implicit */_Bool) var_14);
                        }
                    }
                    var_18 = ((/* implicit */short) min((((/* implicit */unsigned char) ((_Bool) var_1))), (var_5)));
                    var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1])))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_11))), (((/* implicit */unsigned long long int) arr_9 [i_1 - 2] [i_1] [7U] [i_2] [(signed char)8]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) arr_19 [i_5] [i_5 - 3]);
        arr_20 [i_5] &= ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) arr_19 [i_5 - 4] [i_5 - 3])));
    }
    /* LoopSeq 2 */
    for (int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16785616626760299731ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_16 [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_14))))) : (((3583768183U) << (((((/* implicit */int) var_12)) - (16647)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((16785616626760299743ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_6])))))) ? (((((/* implicit */int) var_7)) >> (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_2)))))))) : (((unsigned long long int) (short)8927)));
        arr_24 [(signed char)1] = min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [(short)10]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)109)), (arr_22 [i_6])))) : (arr_16 [i_6] [i_6]))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_21 [i_6] [i_6])))), (((/* implicit */int) var_4))))));
        arr_25 [16] |= var_5;
        arr_26 [(unsigned short)1] [i_6] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_6])), (var_2)))))), (((/* implicit */int) var_13))));
        var_22 *= ((/* implicit */unsigned char) ((signed char) (-(max((arr_19 [6ULL] [i_6]), (((/* implicit */unsigned long long int) arr_23 [i_6])))))));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            arr_40 [i_9] [(_Bool)1] [i_8] [i_10] [i_9] [i_11] = ((/* implicit */signed char) arr_39 [i_8] [i_9] [i_9]);
                            arr_41 [i_8] = ((/* implicit */short) ((((-1048763115) <= (((/* implicit */int) (short)-8928)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_28 [i_7] [i_8 - 1]), (arr_28 [i_8] [i_8 + 1]))))) : (((unsigned long long int) (short)8904))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 2; i_12 < 16; i_12 += 3) 
                        {
                            arr_45 [i_7] [10U] [i_9] [10U] [10U] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_10] [i_10] [(unsigned char)6] [8ULL] [(unsigned char)9] [i_10] [16ULL])) ? (arr_27 [i_7]) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) : (3411554567U));
                            arr_46 [i_10] [i_8] [i_10 - 1] [(_Bool)1] [i_10 + 1] [i_10 - 1] = ((/* implicit */long long int) var_7);
                        }
                        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            arr_49 [i_10] [14LL] [i_8] = ((/* implicit */unsigned int) 1048763115);
                            arr_50 [(_Bool)1] [(unsigned char)10] [(signed char)14] [i_10] [i_13] [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_5)) | (((/* implicit */int) arr_44 [i_7] [i_8 - 1] [i_9] [i_10] [i_13]))))));
                        }
                        arr_51 [(unsigned short)10] [i_8] [i_9] [i_10] [i_8] = arr_36 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10];
                    }
                } 
            } 
            arr_52 [i_8] = ((/* implicit */unsigned char) ((min((arr_21 [i_8] [i_7]), (arr_21 [i_7] [i_7]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_8 + 2]))) * (arr_31 [i_7] [i_7] [i_8 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_21 [(_Bool)1] [i_8 - 1])))))));
            arr_53 [6ULL] [8ULL] [6ULL] |= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)235))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) * (0ULL))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_39 [(_Bool)1] [i_7] [i_8])) ? (1240112864U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7]))))) | (883412729U))))));
            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_37 [i_7] [i_8] [i_7] [i_8] [i_8])))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) 993921092U))));
        }
        for (int i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned short) ((_Bool) (~(1048763112))));
            arr_57 [5U] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_56 [i_7]) >= (var_8))))) : (18446744073709551615ULL)))));
        }
        for (int i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_15]))) : (var_9))) : (((/* implicit */long long int) var_8)))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_30 [i_7] [i_15]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                arr_62 [16U] [i_15] = ((((/* implicit */int) arr_54 [i_7] [i_15] [i_16])) < (((/* implicit */int) (unsigned short)663)));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 1; i_17 < 15; i_17 += 3) 
                {
                    var_26 *= ((/* implicit */signed char) (_Bool)1);
                    var_27 += ((/* implicit */_Bool) var_8);
                }
                arr_67 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) var_0);
            }
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                arr_71 [i_7] [i_7] [i_15] [i_18] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) arr_35 [i_15] [i_7] [i_15] [i_7])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_18])))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_2)))))) + (956157313U)));
                var_29 += ((/* implicit */unsigned long long int) ((arr_31 [i_7] [i_15] [i_18]) % (arr_31 [i_7] [i_7] [(_Bool)1])));
            }
        }
        for (int i_19 = 0; i_19 < 17; i_19 += 2) /* same iter space */
        {
            arr_74 [16] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_44 [i_7] [i_7] [i_19] [i_7] [i_19]), (arr_64 [i_7] [(unsigned short)1] [i_19] [(unsigned short)1])))) | (((((/* implicit */_Bool) 2241496953847888800ULL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-8927)), (var_2)))) : (((((/* implicit */_Bool) (short)-16646)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))))));
            var_30 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_19] [i_19] [i_7]))) * (5ULL))) << (((((((/* implicit */_Bool) 2641278746U)) ? (((/* implicit */int) arr_54 [i_7] [i_7] [i_7])) : (((/* implicit */int) var_12)))) - (21804))));
        }
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)8930))) & (arr_39 [10ULL] [i_7] [10U]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    }
}
