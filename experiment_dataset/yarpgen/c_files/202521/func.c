/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202521
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_11 -= ((/* implicit */long long int) max((((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)21628))))) + (((((/* implicit */_Bool) (unsigned short)9497)) ? (2113929216U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1]))))))));
            var_12 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))))));
        }
        for (short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            arr_8 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 515272224809954987LL)) ? (((/* implicit */int) arr_4 [i_0])) : (1180662606)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2])) + (((/* implicit */int) arr_5 [i_0 - 1]))))) : ((+(2181038099U)))))) ? (((/* implicit */int) arr_6 [i_0 - 1])) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) -1454716736)) : (2181038099U)))) ? (((((/* implicit */int) arr_0 [i_2 - 1] [i_0])) + (((/* implicit */int) arr_5 [i_0 - 1])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
            var_13 *= ((/* implicit */short) (-((((_Bool)0) ? (1454716712) : (1882060634)))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    var_14 ^= ((((((/* implicit */int) arr_14 [(unsigned short)6] [(unsigned short)6] [i_3] [(signed char)4])) >= (((/* implicit */int) arr_6 [i_0 - 1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_0] [i_4]))))));
                    var_15 += (+(((arr_14 [i_0] [i_2 + 1] [i_3] [(signed char)2]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))));
                }
                arr_15 [2LL] [2LL] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0])))))))) < ((-((-(((/* implicit */int) (_Bool)1))))))));
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [12LL] [i_2 + 1]))))) ? (((-1541720803) / (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))) : (((((/* implicit */_Bool) ((1346737148U) >> (((/* implicit */int) arr_14 [i_0] [i_2 - 1] [i_2 + 1] [12]))))) ? ((-(((/* implicit */int) arr_1 [i_0 - 1] [i_2])))) : (((/* implicit */int) ((_Bool) 2147483647)))))));
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned short i_6 = 4; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (unsigned short)21865)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) 1454716734)))))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(signed char)6] [(signed char)6] [i_3] [i_6 - 4] [i_6])) ^ (((/* implicit */int) arr_6 [i_3 - 1]))))) ? ((~(((/* implicit */int) arr_17 [i_5 - 2] [i_5] [i_5 - 1] [i_6 + 2] [i_6])))) : (((((/* implicit */int) arr_6 [i_3 - 1])) << (((((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6 + 3] [i_6])) - (46954))))))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+((-(((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_5] [i_6])) >= (-9223372036854775803LL)))))))))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_6 - 4] [(signed char)10] [i_6] [i_6])) ? (((/* implicit */int) arr_17 [i_6 + 3] [i_6 - 1] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_0] [i_6 - 2] [i_6] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) : (((((/* implicit */long long int) (+(2113929216U)))) | (max((((/* implicit */long long int) arr_3 [i_0] [(unsigned short)8])), (9223372036854775793LL))))))))));
                            var_21 *= ((/* implicit */signed char) ((unsigned short) (signed char)-1));
                        }
                    } 
                } 
                var_22 += ((/* implicit */unsigned short) (+(((arr_14 [i_2 - 1] [i_0 - 1] [i_3] [(unsigned short)10]) ? (-3499024659522464796LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1])))))));
            }
            for (signed char i_7 = 4; i_7 < 13; i_7 += 4) 
            {
                arr_25 [i_0] [i_0 - 1] [0LL] [i_0] &= ((((/* implicit */long long int) ((-1454716736) - (-1454716736)))) <= (((((9223372036854775803LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (-2052589116)))))));
                var_23 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0]))) : (2181038087U)))) ? (((int) 2113929216U)) : ((~(((/* implicit */int) arr_18 [(unsigned short)1]))))))));
            }
            var_24 = ((/* implicit */long long int) min((var_24), (((long long int) (!(((/* implicit */_Bool) arr_20 [i_2 + 1] [(_Bool)1] [i_2] [i_2 + 1] [i_2 - 1])))))));
        }
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))))))));
        var_26 -= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0 - 1])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))) << (((/* implicit */int) ((_Bool) arr_5 [i_0]))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0] [12]))))))))));
        /* LoopSeq 4 */
        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1454716719)) ? ((~(((((/* implicit */_Bool) -8409319155464987680LL)) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6319))))))) : (max((9223372036854775803LL), (((/* implicit */long long int) (unsigned short)1123)))))))));
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (unsigned short)65524))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_23 [i_9] [i_10] [i_9] [i_10 - 1]), (((/* implicit */int) (unsigned short)12))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5340))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_6 [(signed char)10])) ? (arr_11 [i_0] [i_8] [i_9] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_9]))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_11] [i_11] [i_11]))))))))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_12 = 2; i_12 < 11; i_12 += 4) /* same iter space */
        {
            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_0])) >= (((/* implicit */int) arr_34 [i_0 - 1]))));
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) 549621596160LL))));
        }
        for (unsigned short i_13 = 2; i_13 < 11; i_13 += 4) /* same iter space */
        {
            var_33 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2181038080U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0 - 1] [i_0 - 1] [i_0]))))) : (((((/* implicit */_Bool) 2181038084U)) ? (((/* implicit */int) (unsigned short)35933)) : (((/* implicit */int) (unsigned short)11))))));
            var_34 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27)) ? (max((-9223372036854775806LL), (((/* implicit */long long int) -1460650868)))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) arr_34 [i_13 + 1])))))));
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            var_35 = ((/* implicit */long long int) max((var_35), (((arr_42 [i_0] [i_14] [i_0 - 1]) ? (((arr_5 [i_0]) ? (arr_41 [i_0]) : (-258216418519198196LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_0] [(short)10]) && (((/* implicit */_Bool) (unsigned short)39419))))))))));
            var_36 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1])) - (((/* implicit */int) (unsigned short)11))));
            var_37 *= ((/* implicit */_Bool) 9223372036854775803LL);
            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)62631)) ? (arr_36 [i_0] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_14]))))))))));
        }
    }
    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
    {
        var_39 *= ((/* implicit */signed char) (+(((arr_29 [i_15] [i_15] [i_15]) - (arr_29 [i_15] [3LL] [i_15])))));
        var_40 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_6 [i_15])) ? (((/* implicit */int) arr_6 [i_15])) : (((/* implicit */int) arr_44 [i_15]))))));
    }
    /* LoopSeq 3 */
    for (signed char i_16 = 3; i_16 < 9; i_16 += 2) /* same iter space */
    {
        var_41 += ((/* implicit */unsigned int) arr_16 [i_16 - 2] [i_16 - 2] [i_16 + 2]);
        var_42 *= min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_42 [i_16] [i_16 - 1] [i_16]))))) < (2113929216U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_16]))) : (2181038063U)))) ? (-1454716736) : (((((/* implicit */_Bool) (unsigned short)23075)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (unsigned short)65535)))))));
    }
    /* vectorizable */
    for (signed char i_17 = 3; i_17 < 9; i_17 += 2) /* same iter space */
    {
        var_43 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [(signed char)2] [(signed char)2]))));
        var_44 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_17]))))) : (((/* implicit */int) arr_0 [i_17 + 1] [i_17 + 2]))));
    }
    for (signed char i_18 = 3; i_18 < 9; i_18 += 2) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_18] [i_18] [i_18])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_38 [i_18] [i_18]))))))) : (((/* implicit */int) max((arr_45 [i_18 - 1] [i_18 - 3]), ((unsigned short)65535)))))))));
        /* LoopNest 3 */
        for (signed char i_19 = 1; i_19 < 9; i_19 += 2) 
        {
            for (unsigned short i_20 = 3; i_20 < 9; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_46 = ((/* implicit */_Bool) max((var_46), ((!(((/* implicit */_Bool) (unsigned short)65525))))));
                        var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2181038099U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4352))) : (-9223372036854775803LL)));
                        var_48 += (!(((/* implicit */_Bool) (unsigned short)17413)));
                    }
                } 
            } 
        } 
        arr_61 [(_Bool)1] |= ((/* implicit */unsigned short) min((arr_52 [i_18 - 1] [i_18]), (arr_36 [i_18] [i_18 + 1])));
    }
    var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_0))))))));
    var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) -258216418519198176LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)42461)))))))))));
}
