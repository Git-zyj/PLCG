/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225552
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
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_2 - 1] [i_2] [i_2 - 1]), (arr_6 [i_0] [i_1] [i_1]))))))))));
                var_19 |= ((/* implicit */unsigned int) arr_4 [(short)8] [(signed char)1] [i_0]);
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_20 |= ((/* implicit */_Bool) ((unsigned long long int) max((max((((/* implicit */long long int) arr_0 [i_0])), (var_14))), (((/* implicit */long long int) var_6)))));
                    var_21 = ((/* implicit */unsigned char) var_7);
                }
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((short)-25990), (((/* implicit */short) (unsigned char)143)))))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)80)) != (((/* implicit */int) var_9))))))) : (((/* implicit */int) ((signed char) (unsigned char)160))))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)143)) / (((/* implicit */int) ((((((/* implicit */int) (unsigned char)114)) ^ (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (short)3641)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        arr_15 [i_1] [i_2] = ((/* implicit */unsigned long long int) max(((unsigned char)141), ((unsigned char)240)));
                        var_24 = ((/* implicit */short) (-(max((((/* implicit */int) (short)28576)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-9226)) : (((/* implicit */int) (unsigned short)21393))))))));
                        var_25 = ((/* implicit */unsigned char) ((unsigned int) ((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) (short)9043))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [8LL] [i_1] [8LL] [i_2]))))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) 1990416047U)))))))), (((((/* implicit */_Bool) 2304551259U)) ? ((~(arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_4] [i_5]))))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_4] = ((((((/* implicit */_Bool) 1990416049U)) ? (((/* implicit */int) ((_Bool) 587272544))) : (((/* implicit */int) (short)-25302)))) == (((/* implicit */int) min(((short)-9034), (((/* implicit */short) (unsigned char)107))))));
                        arr_19 [i_2] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned char) max((min((arr_7 [i_0] [i_1] [i_2 - 1]), (((/* implicit */long long int) (unsigned short)61452)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) <= (arr_12 [i_1] [(unsigned short)1] [i_1] [i_2] [i_1])))))));
                    }
                    var_27 ^= ((/* implicit */unsigned short) ((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_0] [10LL] [i_4])))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_28 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_8] [i_7] [i_1] [i_8]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)44))))))), (max(((!(((/* implicit */_Bool) 2304551258U)))), ((_Bool)1)))));
                        arr_25 [i_2] [i_7] [i_2 - 1] [i_0] [i_0] [i_2] = ((/* implicit */long long int) -890851134);
                        arr_26 [i_7] [i_7] [i_7] [i_7] [i_2] = ((/* implicit */long long int) arr_22 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 7; i_9 += 3) 
                    {
                        arr_29 [i_2] [i_1] [i_2] [i_7] [i_9 + 3] = ((/* implicit */unsigned int) var_3);
                        var_29 = ((/* implicit */int) ((_Bool) var_2));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_30 += ((/* implicit */_Bool) min(((+(max((var_13), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)15)))))))));
                        var_31 = ((/* implicit */unsigned char) max((arr_7 [i_10] [i_7] [i_1]), (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-28577)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((unsigned short)21390), (((/* implicit */unsigned short) (unsigned char)87))))))))));
                        var_32 *= ((max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (short)9038)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) max(((!(((/* implicit */_Bool) (short)8191)))), (((377082113U) != (((/* implicit */unsigned int) 67108862))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) ((var_15) % (((/* implicit */long long int) var_13))));
                        arr_35 [i_0] [(short)0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2 - 1]))));
                        var_34 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)28576))))) ? (((/* implicit */long long int) var_12)) : (4492462885244914924LL)));
                    }
                    var_35 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-28580)) ? (2385070401U) : (1990416054U))), (((((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_7] [i_7])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_7] [i_7] [i_2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) == (((/* implicit */int) var_7))))))))));
                    var_36 = ((/* implicit */short) (~((-(((/* implicit */int) arr_32 [i_1] [i_2 - 1] [i_2] [i_2 - 1] [i_7]))))));
                }
                var_37 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-8137213932751997525LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_16 [(_Bool)1] [6LL] [i_1] [i_1] [6LL] [i_0])))))) : (3226201074U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */signed char) arr_31 [i_0] [i_1] [i_12] [(unsigned char)4] [i_0] [i_0] [i_12]);
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_41 [i_12] = ((/* implicit */unsigned char) (-(var_13)));
                    arr_42 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (short)-11064)) <= (((/* implicit */int) (unsigned char)170))));
                }
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (-6033032042418656783LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_0))))))) : (arr_14 [i_0] [i_1] [i_12] [i_1] [i_14]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_48 [i_15] [i_14] [i_12] [i_0] [i_12] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (unsigned short)16383))))) ? (((/* implicit */unsigned long long int) var_14)) : (var_8)));
                        var_40 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)3151)) != (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)991))))));
                        arr_49 [i_0] [i_1] [i_12 - 1] [i_12] [i_15] = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_12]))) : (3168597685U))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))))));
                        var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */signed char) (_Bool)0)), ((signed char)127))), (((/* implicit */signed char) (_Bool)1))))), (11059598857457740635ULL)));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */int) max((4294967270U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_14] [i_14] [i_12])) ? (((/* implicit */int) arr_31 [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_12])) : (((arr_33 [i_12] [i_12 - 1] [i_14] [10U]) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)123)))))))));
                        var_42 -= ((/* implicit */signed char) max((((((/* implicit */long long int) 8U)) | (arr_50 [i_12 - 1] [i_12 - 1] [i_12 - 1]))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_44 [i_14] [i_1] [i_14] [i_14])))))));
                        var_43 *= ((/* implicit */unsigned int) max((min((((/* implicit */short) ((_Bool) arr_40 [i_16] [(unsigned char)0] [i_12] [i_1] [i_0]))), ((short)8191))), (((/* implicit */short) max((arr_39 [i_12 - 1] [i_14] [i_12 - 1]), ((_Bool)1))))));
                    }
                }
                var_44 = ((/* implicit */long long int) max((var_44), ((-(max((((/* implicit */long long int) ((((/* implicit */int) arr_39 [0U] [0U] [i_0])) > (((/* implicit */int) var_7))))), (var_15)))))));
                var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((unsigned short) 5351618717027283259LL)))));
            }
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_59 [i_0] [i_0] [i_0] = max((((/* implicit */long long int) min((-67108854), (((/* implicit */int) (_Bool)1))))), (max((((long long int) 14336LL)), (((/* implicit */long long int) var_12)))));
                var_46 = ((/* implicit */signed char) 0U);
                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((7929574540460583004LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) 954229583539680707LL)) ? (-67108890) : (((/* implicit */int) (unsigned char)154)))))))) ? (((/* implicit */long long int) max(((-(((/* implicit */int) arr_51 [i_17 - 1])))), (((((/* implicit */_Bool) arr_53 [i_0] [10U])) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) arr_5 [(unsigned short)2] [i_1] [i_1] [(unsigned short)2]))))))) : (((long long int) (unsigned char)5))));
            }
            arr_60 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_8 [2LL] [i_0] [i_0] [(signed char)6]);
        }
        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) var_10)) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16383))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (arr_4 [i_0] [i_0] [i_0]))))) : (min((1231237585U), (arr_38 [i_0] [i_0] [i_0] [(unsigned char)10]))))))))));
    }
    var_49 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_6))))));
    var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((unsigned char) (signed char)-25)))));
    var_51 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1520164734032248617LL)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (short)-8191))))) ? (((/* implicit */int) ((short) (signed char)40))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)224)))))))));
}
