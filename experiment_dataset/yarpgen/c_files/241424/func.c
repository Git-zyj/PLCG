/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241424
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned long long int) (unsigned short)4699);
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
            {
                arr_6 [i_1] [(unsigned short)6] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_1]);
                var_12 = ((/* implicit */unsigned int) (_Bool)0);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) 667391881);
                            arr_13 [i_0] [i_1] = 1001973693U;
                            arr_14 [14] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((max((min((((/* implicit */unsigned int) -667391855)), (1001973670U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_14 &= ((/* implicit */unsigned char) ((_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (arr_4 [i_0]))))));
                            var_15 *= ((/* implicit */unsigned short) arr_8 [i_0] [i_3] [i_2] [i_3] [i_2]);
                        }
                    } 
                } 
            }
            for (unsigned int i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
            {
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~((~(arr_4 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_16 = arr_4 [i_0 - 1];
                            var_17 |= ((/* implicit */unsigned short) max((1139433568U), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_7 + 1] [i_6] [i_6] [i_0 + 3])))))));
                            var_18 = ((/* implicit */unsigned long long int) 4294967295U);
                            var_19 = ((/* implicit */long long int) (+(var_1)));
                        }
                    } 
                } 
                var_20 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? ((+(arr_4 [i_1]))) : (((/* implicit */int) ((unsigned short) arr_4 [i_0 - 1])))))), (min((((arr_0 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_0] [4U] [3] [i_1]))) : (arr_1 [i_0]))), (arr_5 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))));
                var_21 ^= ((/* implicit */long long int) 1001973693U);
                var_22 = ((/* implicit */int) (~((~(927639498U)))));
            }
            for (unsigned int i_8 = 2; i_8 < 13; i_8 += 1) /* same iter space */
            {
                var_23 = ((unsigned int) (~(1001973693U)));
                var_24 = ((/* implicit */unsigned short) (_Bool)0);
            }
            /* LoopSeq 1 */
            for (unsigned int i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) min((var_25), (16777184U)));
                var_26 &= ((/* implicit */_Bool) 3367327792U);
                var_27 += ((/* implicit */unsigned int) var_9);
            }
            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)51060), (((/* implicit */unsigned short) (_Bool)1)))))) : (max((((967987630U) + (2536508884U))), (((/* implicit */unsigned int) arr_15 [i_1] [(unsigned short)10]))))));
            arr_27 [i_0] [i_1] = ((/* implicit */long long int) 928618130);
        }
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) <= (arr_20 [(_Bool)1] [i_0] [i_0] [i_0]))))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_22 [i_0 + 1] [6LL] [i_0 + 1] [6LL] [i_0]))));
        arr_28 [i_0] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (1758458411U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [0U] [i_0])))))) ? (min((((/* implicit */unsigned long long int) arr_25 [(_Bool)1] [i_0] [i_0] [i_0 - 1])), (var_1))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) 1023U)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) / (-1LL))))))));
        var_31 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 1] [i_0 - 1]);
    }
    for (unsigned short i_10 = 3; i_10 < 21; i_10 += 1) 
    {
        arr_31 [18U] |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_29 [i_10] [i_10 - 3])), (var_5)))) ? (((/* implicit */int) arr_30 [i_10 - 1])) : (((/* implicit */int) var_9)))));
        /* LoopNest 3 */
        for (unsigned short i_11 = 3; i_11 < 19; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 2; i_13 < 20; i_13 += 4) 
                {
                    {
                        arr_44 [i_13] [i_13] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 0U)) ? (var_8) : (((/* implicit */int) arr_29 [i_10] [i_12]))))))) ? (((((/* implicit */_Bool) 1437846061)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9820))) : (arr_39 [i_10 - 2]))) : (var_1)));
                        arr_45 [i_10] [i_10] [8] [i_12] [i_13] = ((/* implicit */unsigned short) min(((~(arr_40 [i_13 + 1] [i_11 - 3] [i_10 - 1]))), (((((/* implicit */_Bool) (-(arr_33 [i_13 - 2] [i_11] [i_12])))) ? ((-(1413370416U))) : (((((/* implicit */_Bool) arr_35 [i_12] [i_11] [8U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1758458414U)))))));
                        var_32 = (+(max((max((((/* implicit */unsigned long long int) (unsigned char)55)), (var_2))), (((/* implicit */unsigned long long int) 1001973675U)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_48 [i_10] [5ULL] [i_10] [i_13] [i_14] = ((/* implicit */int) ((4487206037862594064ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4894487430472906098LL)) ? (((/* implicit */unsigned int) arr_32 [i_10])) : (arr_43 [i_10]))))));
                            arr_49 [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_11 + 1] [i_11 + 1] [i_11 + 1]))));
                            arr_50 [i_10] [i_10] [i_12] [i_13] [i_14] [6] [i_11 - 3] = ((/* implicit */unsigned int) arr_42 [i_10 - 1]);
                            var_33 = ((/* implicit */int) (-(5880538765968393385LL)));
                        }
                        arr_51 [i_10] [i_11] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (arr_32 [i_12])))) ? (min((((/* implicit */long long int) arr_46 [i_11] [i_11])), (-6515583183818361095LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_15 = 2; i_15 < 21; i_15 += 1) 
    {
        arr_54 [i_15] = ((/* implicit */unsigned char) var_7);
        var_34 ^= ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_7)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        arr_57 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_4 [i_16]) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) 3305291186U)), (var_0))))) : (((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            for (unsigned int i_18 = 1; i_18 < 15; i_18 += 4) 
            {
                {
                    var_35 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((unsigned int) var_3)), (((/* implicit */unsigned int) arr_3 [i_17 + 1] [i_18 - 1] [i_18 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 4) 
                        {
                            {
                                arr_68 [i_16] [i_17] [i_16] [i_17] [5ULL] [(unsigned short)1] [i_17] = ((/* implicit */unsigned short) min(((+(1838667693U))), (min(((+(3136554788U))), (1972287263U)))));
                                var_36 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) 1758458412U)));
                                arr_69 [i_19] [i_19] [i_16] [i_19] [i_20] [12] [i_16] = ((/* implicit */unsigned short) ((((_Bool) max((var_5), (var_2)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [0U] [i_17 + 1] [i_18 + 1] [i_18] [i_18 - 1] [i_19] [i_19])) ? (((/* implicit */int) (_Bool)1)) : (393426091)))) ? (((/* implicit */long long int) min((128085298U), (arr_64 [i_16] [i_17] [5ULL] [i_16])))) : (var_0))) : (((/* implicit */long long int) 1758458401U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_70 [i_16] [i_16] = ((/* implicit */unsigned int) arr_16 [i_16] [i_16] [i_16] [3U]);
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 823187039)) ? (max((((/* implicit */unsigned long long int) var_0)), (1927848133405630209ULL))) : (((/* implicit */unsigned long long int) max((arr_26 [(unsigned short)0] [i_16] [i_16]), (((/* implicit */long long int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_38 &= ((/* implicit */unsigned char) 4487206037862594070ULL);
}
