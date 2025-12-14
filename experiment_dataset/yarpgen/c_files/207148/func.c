/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207148
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_2)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))), (var_13)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            arr_6 [11LL] [11LL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) 1656818352)) : (83537475U)))) ? ((-(((/* implicit */int) arr_0 [i_1] [i_0])))) : (((((/* implicit */_Bool) 4211429801U)) ? (((/* implicit */int) arr_1 [i_0] [(signed char)12])) : (((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))))));
            arr_7 [11] [10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-32756)), ((unsigned short)17791))))) & ((~(((((/* implicit */_Bool) arr_3 [(short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (14523417096461505918ULL)))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3])) | (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (arr_2 [i_3] [(unsigned char)3]))))))), (min((83537475U), (83537485U)))));
                        var_21 *= ((/* implicit */short) (+(-1750799659)));
                        var_22 -= var_4;
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) (+((+(((/* implicit */int) (short)24861)))))));
            arr_20 [i_0] [i_4] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 15332262415648469151ULL)) ? (max((var_1), (((/* implicit */long long int) 83537497U)))) : (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_0] [i_0] [5])), (arr_1 [i_0] [i_4])))))))));
        }
        arr_21 [i_0] = ((/* implicit */short) min((((var_0) ^ (((/* implicit */long long int) (-(83537483U)))))), (((/* implicit */long long int) 0))));
    }
    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((((long long int) var_18)) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_5 + 1] [i_5 - 1]))))));
        var_24 = ((/* implicit */signed char) var_3);
        var_25 = ((/* implicit */unsigned long long int) ((int) (~(((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_26 = ((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_6]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 3; i_8 < 19; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        {
                            arr_36 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((4211429815U) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) arr_31 [(short)17] [i_7] [i_7])) : (4211429780U)));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 83537481U)) && (((/* implicit */_Bool) -8669059269217875736LL))))) == (((/* implicit */int) arr_26 [i_8 + 1] [i_10 + 2]))));
                            var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((((/* implicit */long long int) ((/* implicit */int) var_17))) + (9157099766995484796LL))) : (((/* implicit */long long int) 83537491U))));
                        }
                    } 
                } 
                arr_37 [i_6] [i_6] = ((/* implicit */signed char) var_18);
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6] [i_7])) || (((/* implicit */_Bool) -9157099766995484790LL))));
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) arr_24 [i_6] [i_6]))))) ? (((-9157099766995484813LL) % (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_18)))))));
            }
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                var_31 = (+(((/* implicit */int) ((unsigned short) var_1))));
                var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                var_33 += (-(((/* implicit */int) arr_28 [i_6] [i_6] [i_6])));
                var_34 = ((/* implicit */signed char) (+(1910656372)));
            }
            arr_40 [i_6] = ((/* implicit */unsigned int) ((signed char) -9157099766995484797LL));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_7] [i_6])))))));
            arr_41 [15LL] [(signed char)4] |= (-((+(((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    {
                        arr_48 [i_6] [i_12] [i_12] [i_12] = var_17;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            arr_51 [(short)4] [(short)4] = ((/* implicit */signed char) var_4);
                            arr_52 [i_6] [i_12] [11] [i_14] [i_6] [i_6] = ((/* implicit */unsigned short) (+((-(arr_31 [(signed char)20] [(signed char)20] [i_13])))));
                        }
                        var_36 = ((/* implicit */unsigned short) arr_26 [i_13] [i_6]);
                        var_37 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 83537478U)))) ? (((/* implicit */int) (short)9230)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                arr_55 [i_16] [i_12] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_6] [i_12] [i_16])) && (((/* implicit */_Bool) 167014519))));
                /* LoopSeq 2 */
                for (short i_17 = 1; i_17 < 19; i_17 += 1) 
                {
                    var_38 = (~(((/* implicit */int) arr_47 [i_17 + 1] [i_17 + 1] [i_17 + 2] [(_Bool)1])));
                    arr_58 [i_6] [10ULL] [i_16] [i_6] &= ((/* implicit */unsigned char) arr_38 [i_16] [i_12] [i_6]);
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (~(arr_57 [i_17 + 2] [i_6] [(unsigned short)16] [i_6] [i_6]))))));
                }
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    var_40 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-25213))));
                    var_41 = ((/* implicit */unsigned short) (+(0U)));
                }
                var_42 -= ((/* implicit */short) (-((~(((/* implicit */int) arr_54 [i_12] [i_12] [i_6]))))));
            }
            for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                arr_66 [i_19] [(signed char)19] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) 1247504373)) ? (((/* implicit */long long int) 4166216403U)) : (-9157099766995484807LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_6] [i_6] [i_6] [i_6]))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 1; i_20 < 19; i_20 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_21 = 3; i_21 < 20; i_21 += 1) 
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */_Bool) (+(0U)))) ? (((((/* implicit */_Bool) arr_68 [3LL] [i_20])) ? (var_14) : (14627716937592377378ULL))) : (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_6] [i_6] [i_19] [i_6]))) : (2526126996U)))))))));
                        var_44 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)-2328))))));
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_70 [i_20] [i_21] [i_21 - 2] [(short)15] [(_Bool)1] [i_21] [i_21 + 1])) << (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    }
                    for (unsigned int i_22 = 3; i_22 < 19; i_22 += 1) 
                    {
                        var_46 = ((/* implicit */_Bool) arr_56 [(_Bool)0]);
                        arr_75 [14ULL] [i_12] [14ULL] [i_20] [8LL] [14ULL] [i_20] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_28 [i_12] [i_20] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_22] [i_19] [i_19]))) : (4211429828U)))));
                    }
                    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) ((arr_45 [i_6] [i_12] [i_19] [13LL]) <= (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_6] [i_12] [i_19] [i_12])))))) : (((/* implicit */int) var_18))));
                }
                for (int i_23 = 0; i_23 < 21; i_23 += 3) 
                {
                    var_48 = ((/* implicit */short) (!((!(((/* implicit */_Bool) -5748600418445945885LL))))));
                    arr_80 [i_6] [(_Bool)1] [(short)6] [i_23] [(short)6] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_6] [i_6] [(signed char)2] [i_6] [19ULL])) ? (((/* implicit */int) arr_39 [i_12])) : (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) arr_74 [i_6] [i_6] [i_23] [16U] [i_6] [i_6] [i_6])))) : (((/* implicit */int) arr_47 [i_12] [i_12] [i_19] [i_23]))));
                }
            }
        }
        for (unsigned short i_24 = 3; i_24 < 18; i_24 += 4) 
        {
            var_49 = ((((/* implicit */int) arr_38 [i_24] [i_24] [i_6])) >= (((/* implicit */int) arr_38 [i_6] [i_6] [i_6])));
            var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [12ULL])) / (((/* implicit */int) var_8))))) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_6] [i_24]))) : (var_15)))));
            arr_83 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_13))))) == ((-(((/* implicit */int) var_18))))));
        }
        var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) (((((-2147483647 - 1)) == (((/* implicit */int) (signed char)43)))) ? (((((/* implicit */_Bool) -217548217)) ? (-1801809254) : (((/* implicit */int) arr_32 [11ULL])))) : (((/* implicit */int) arr_30 [i_6] [i_6] [(short)14])))))));
    }
    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) var_9))));
}
