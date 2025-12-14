/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199066
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_19 += ((/* implicit */short) max((((/* implicit */unsigned long long int) 1905861792597467660LL)), (4677464773571959369ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 1218744135);
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) ((((arr_2 [i_1]) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned int) (((~(10156943974173724682ULL))) > (((/* implicit */unsigned long long int) (+(1697401450U))))));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) <= (2597565846U)))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2597565818U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((1697401477U) | (2714947603U)));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (+(1697401450U)))), (var_4))) / (((/* implicit */unsigned long long int) var_12)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 += ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_15))))));
        arr_14 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) | (arr_0 [i_2] [i_2]))) ^ (((/* implicit */unsigned long long int) ((4294967295U) | (var_8))))))) ? (((((/* implicit */_Bool) -3136689879037226910LL)) ? (arr_11 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) 1218744120))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_24 += ((/* implicit */int) ((long long int) ((arr_2 [i_3]) || (arr_2 [i_3]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 ^= (~(arr_11 [i_3]));
            /* LoopSeq 2 */
            for (int i_5 = 2; i_5 < 7; i_5 += 2) 
            {
                var_26 = ((/* implicit */_Bool) min((var_26), (((((/* implicit */long long int) (~(arr_1 [i_3])))) <= (arr_13 [i_5 - 2])))));
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) ((long long int) (short)-21356));
                            var_28 ^= ((/* implicit */_Bool) ((long long int) arr_19 [i_7] [i_6 - 1] [i_5 - 2]));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_17)) % (((((/* implicit */_Bool) var_17)) ? (3136689879037226904LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [4U] [i_4] [7LL] [i_3] [i_4] [i_3])))))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) 1697401477U)) ? (((/* implicit */long long int) 935353066U)) : (((-4715423119311164438LL) / (-4715423119311164429LL))))))));
                arr_28 [i_3] [i_3] [i_8] [i_4] = ((((((/* implicit */int) (short)-1)) + (2147483647))) >> ((((~(4183346499U))) - (111620792U))));
            }
            /* LoopSeq 2 */
            for (long long int i_9 = 4; i_9 < 10; i_9 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(var_16))))));
                arr_33 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) var_0);
            }
            for (long long int i_10 = 4; i_10 < 10; i_10 += 3) /* same iter space */
            {
                arr_37 [i_3] [i_3] [i_3] [(short)4] = arr_13 [i_3];
                var_32 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [(_Bool)1] [i_4] [i_4] [i_4] [i_3] [i_4])) >= (var_13))) ? (-3136689879037226910LL) : (((/* implicit */long long int) arr_21 [i_10 - 1] [i_10 - 3] [i_10 - 4] [i_10 - 1]))));
                arr_38 [i_3] [i_3] = ((/* implicit */int) (~(((var_11) ? (arr_0 [1U] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
            }
            arr_39 [i_3] = ((/* implicit */int) ((((_Bool) var_4)) || (((/* implicit */_Bool) (-(14014479159168353343ULL))))));
        }
    }
    for (int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (((+(((/* implicit */int) arr_2 [(_Bool)1])))) | (((/* implicit */int) ((_Bool) arr_2 [i_11]))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            var_34 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((-30731743364636541LL) > (arr_11 [i_11])))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_45 [11] [i_12] [i_12])) <= (var_5))))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) var_11))));
                            arr_54 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_45 [i_11] [i_11] [8U])) : (var_5)));
                        }
                    } 
                } 
            } 
            arr_55 [i_11] [i_11] = ((/* implicit */long long int) var_6);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_36 = ((((/* implicit */_Bool) 9977525301931973531ULL)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) -1218744128)) ? (arr_44 [i_11]) : (((/* implicit */long long int) var_8)))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_11]))))))));
            var_37 += (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_2))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_11] [(_Bool)1] [i_11] [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) arr_57 [i_11] [i_16])))))))));
        }
        for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            var_38 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (((+(var_0))) / (((/* implicit */long long int) ((/* implicit */int) (short)-21363))))))));
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((short) (-(((((/* implicit */_Bool) arr_11 [10U])) ? (1051582157U) : (var_15)))))))));
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            arr_64 [i_11] [12LL] [i_11] = 11706883107073597614ULL;
            /* LoopSeq 1 */
            for (long long int i_19 = 1; i_19 < 13; i_19 += 3) 
            {
                var_40 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)7] [i_18]))) : (arr_12 [i_11] [i_11])))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) arr_46 [i_11] [i_11] [i_11] [i_11]))))));
                arr_67 [i_11] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 30731743364636540LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_41 [i_11] [i_11]))))));
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_72 [i_11] [i_11] |= ((/* implicit */_Bool) (short)27856);
                    var_41 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (~(((/* implicit */int) var_18)))))));
                }
            }
            arr_73 [i_11] [(unsigned short)8] = ((/* implicit */unsigned int) ((arr_42 [i_11] [i_11]) ? (var_3) : (((/* implicit */long long int) 4247605617U))));
        }
        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_2), (arr_41 [i_11] [i_11]))))))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-27857), (((/* implicit */short) arr_65 [(short)7] [i_11] [i_11])))))) : (max((((/* implicit */unsigned long long int) arr_66 [i_11] [i_11] [2U] [1U])), (arr_50 [i_11] [2] [(_Bool)1])))))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_76 [i_21]))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_76 [i_21])), (var_16)))))))));
        var_45 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_76 [i_21])) && (arr_74 [12U]))) ? (arr_77 [i_21] [i_21]) : (((((/* implicit */_Bool) arr_76 [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3136689879037226910LL))))) ^ (((/* implicit */long long int) (-(arr_76 [(_Bool)1]))))));
    }
}
