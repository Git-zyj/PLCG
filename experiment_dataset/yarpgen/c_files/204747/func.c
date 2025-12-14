/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204747
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
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (((~(-1761077664))) < (((/* implicit */int) ((2920497300U) <= (3U)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_0 [i_0])));
        arr_3 [i_0] = ((((/* implicit */long long int) 4294967287U)) ^ (1582499265393790648LL));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((4294967292U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (max((3U), (((/* implicit */unsigned int) arr_4 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */signed char) min((max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) arr_5 [i_1])), (var_1))))), (((/* implicit */long long int) 4294967292U))));
        var_16 = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)25546)) - (((/* implicit */int) arr_5 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_17 &= ((/* implicit */long long int) (((-((+(((/* implicit */int) (short)0)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (var_0)))) && (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_6 [i_2]))))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_17 [i_2] = ((/* implicit */signed char) (unsigned short)15872);
            arr_18 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) (unsigned short)58925))), (min((((/* implicit */int) (short)3072)), (var_2)))));
        }
        var_18 = ((/* implicit */_Bool) 288089638663356416LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_19 = ((/* implicit */signed char) (_Bool)0);
                arr_24 [i_5] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_2])) <= (2147483641)));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_27 [i_2] [i_5] [i_4] [i_2] = ((/* implicit */unsigned long long int) 2086986818U);
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) ((arr_13 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(-288089638663356416LL)))));
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9428187333768524555ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046))) : ((~(3245107473U)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */long long int) -1481405847)) : (arr_31 [(unsigned short)4] [i_2] [i_5] [i_2] [i_2]))) : (((/* implicit */long long int) ((unsigned int) 1949176236010055610LL)))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2437095665971126885LL)) ? (((/* implicit */int) arr_4 [i_8])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32756))) < (var_5))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7010))) : (0ULL))))));
                        arr_34 [i_2] [i_2] [6] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [(short)1] [i_6] [i_5] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (0ULL)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */int) min((var_25), ((-(607286915)))));
                        var_26 = ((/* implicit */int) min((var_26), (((int) -607286915))));
                        var_27 = ((/* implicit */signed char) arr_28 [i_10] [i_2] [i_5] [i_4] [i_2]);
                        arr_38 [i_10] [i_6] [i_2] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_31 [i_10] [i_2] [i_5] [i_2] [i_2]))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned int) 254432846)) : (arr_28 [i_10] [i_6] [i_5] [i_2] [i_2])));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) arr_13 [i_11])))))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 4; i_12 < 14; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_2] [i_11] [i_4] [i_4] [i_2])) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)36496)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        arr_44 [i_12] [i_2] [(unsigned short)5] [i_5] [i_4] [i_2] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2])) < (var_0)))) : (((/* implicit */int) ((_Bool) arr_30 [i_2] [i_2] [(_Bool)1] [i_5] [i_2] [i_2])))));
                        arr_45 [i_4] [i_11] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)29040)) : (((/* implicit */int) arr_29 [i_11] [i_5] [i_4])))))));
                    }
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11] [i_5] [i_5] [i_2] [i_5] [(unsigned short)10] [i_2]))) : (485111325U)))) / (((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_5] [i_5]))) : (7286204091353334153ULL))))))));
                    arr_46 [i_2] [i_5] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_11] [i_2])) < (((/* implicit */int) arr_12 [i_4] [i_2]))));
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    arr_49 [(signed char)3] [i_2] [i_2] [i_2] [i_2] = (~(-1447869799));
                    arr_50 [i_2] [i_5] [i_4] [i_2] = ((/* implicit */unsigned int) var_3);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        arr_53 [(short)12] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_22 [i_4] [i_4] [i_4])))) ? (((((/* implicit */int) (unsigned short)3853)) & (((/* implicit */int) (signed char)119)))) : ((-(((/* implicit */int) (unsigned short)63699))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-607286908)))) ? (arr_32 [i_2] [i_13] [i_5] [i_4] [i_2]) : (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) var_0)))))));
                        arr_54 [i_2] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */long long int) (~(arr_28 [i_14] [i_13] [i_2] [i_4] [i_2])))) : (var_5)));
                        var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                    }
                }
            }
            var_34 = ((/* implicit */int) 18446744073709551615ULL);
            arr_55 [i_2] = ((/* implicit */signed char) 0ULL);
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                arr_58 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_15] [i_15] [i_4] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) 503316480)) ? (-474182153) : (((/* implicit */int) arr_48 [i_2]))))));
                arr_59 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])))))));
            }
            arr_60 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 474182162)) ? (((/* implicit */int) arr_16 [i_2] [i_4] [i_2])) : (((/* implicit */int) arr_12 [i_4] [i_2]))));
        }
    }
    /* LoopSeq 1 */
    for (int i_16 = 0; i_16 < 11; i_16 += 2) 
    {
        arr_64 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_3), (((/* implicit */short) arr_35 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))) <= (max((181260180), (((/* implicit */int) arr_35 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [14U]))))));
        var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((253952U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)28940))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_16]))))))));
    }
}
