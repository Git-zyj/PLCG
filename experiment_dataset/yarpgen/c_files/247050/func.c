/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247050
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
    var_13 = (~((~(((((/* implicit */_Bool) (unsigned short)28339)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50823))) : (1266421534989487418LL))))));
    var_14 = ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_0))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((long long int) max((arr_1 [i_0 - 1]), (((/* implicit */int) (unsigned short)37180)))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0 - 1]))));
            var_18 = ((/* implicit */int) ((unsigned short) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            arr_7 [(unsigned char)4] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)45213);
            arr_8 [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0] [i_0]));
            arr_9 [i_0] [i_0] = ((/* implicit */short) arr_6 [i_0]);
            var_19 *= ((/* implicit */_Bool) (unsigned short)14713);
        }
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) /* same iter space */
        {
            arr_13 [i_0 + 1] [i_3] [i_3] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) (unsigned short)50800)) ? (((/* implicit */long long int) arr_1 [i_0 + 1])) : (arr_12 [(unsigned char)7] [i_3]))), (min((((/* implicit */long long int) var_6)), (6071862490813384827LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((686276060) <= (((/* implicit */int) (short)508))))))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((1073479680ULL), (((/* implicit */unsigned long long int) (-(arr_11 [i_0 - 1])))))))));
            arr_14 [i_0] [i_0] [i_3] = ((((unsigned long long int) arr_4 [i_0] [i_0 + 1])) ^ (((((/* implicit */_Bool) (short)-17773)) ? (((/* implicit */unsigned long long int) 686276048)) : (17615827547971985967ULL))));
        }
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0 + 1]);
            arr_18 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) min((min(((~(arr_6 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (-686276060)))))), (((/* implicit */long long int) ((arr_5 [i_0] [i_0]) ^ ((~(((/* implicit */int) (unsigned char)8)))))))));
            var_21 = ((/* implicit */long long int) min((var_21), ((((~(((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [i_0 + 1]) : (((/* implicit */long long int) var_1)))))) << (((max(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (_Bool)0)) : (609310277))))) - (57775)))))));
        }
    }
    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_19 [i_5 + 1] [i_5 + 1])))) ? (((/* implicit */long long int) ((int) arr_6 [i_5]))) : (min((((arr_19 [i_5] [i_5]) / (((/* implicit */long long int) 686276046)))), (((((/* implicit */_Bool) 2147483644)) ? (arr_20 [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14713)))))))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        arr_30 [i_7] [i_7] [i_6] [i_7] = ((((/* implicit */_Bool) (+(17358710380537507749ULL)))) ? (((/* implicit */int) (unsigned short)14713)) : (((/* implicit */int) var_11)));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_6] [i_5] [i_7] [i_9] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 268435424LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 268435424LL))))) : (((/* implicit */int) (unsigned char)209))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_5] [i_6] [i_5])), (arr_23 [i_5]))))));
                            arr_34 [i_9] [i_6] [14ULL] [i_7] [i_7] [i_6] [i_5 - 2] = ((/* implicit */unsigned short) (~((+(10416588676122727263ULL)))));
                            arr_35 [i_5] [i_5] [i_6] [i_7] [i_8] [i_6] [i_5] = arr_31 [i_5] [i_5] [i_7];
                            arr_36 [i_5] [i_6] = ((/* implicit */unsigned short) (+(9223372036854775807LL)));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_11 [i_5 - 2]), (5928467370833553235LL)))), ((~(18446744073709551615ULL)))));
                            arr_39 [i_6] = ((/* implicit */int) max((10416588676122727263ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)50823), (((/* implicit */unsigned short) (unsigned char)0)))))) : ((~(var_5))))))));
                        }
                        arr_40 [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [14U])), (arr_29 [i_5] [i_6] [i_7] [i_8] [i_8] [i_5])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 4) 
                        {
                            var_25 = (((-(((((/* implicit */_Bool) -6936915549026768457LL)) ? (arr_20 [7LL]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) - (((/* implicit */long long int) var_1)));
                            arr_45 [i_5] [i_8] [i_6] [i_8] [i_7] = ((max((((/* implicit */long long int) arr_29 [i_5] [i_6] [i_6] [i_7] [i_8] [i_11])), (((((/* implicit */_Bool) arr_2 [i_5] [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)197))) : (arr_11 [i_5 - 2]))))) - (arr_12 [i_5] [i_5]));
                            var_26 ^= ((/* implicit */unsigned char) arr_41 [13] [i_6] [i_5]);
                            arr_46 [i_5] [i_5 - 2] [i_6] [(_Bool)1] [i_8] [i_8] [i_6] = ((/* implicit */_Bool) (unsigned short)28331);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) /* same iter space */
    {
        arr_49 [i_12] = ((/* implicit */short) arr_1 [i_12]);
        arr_50 [17ULL] = ((/* implicit */int) ((_Bool) arr_23 [i_12]));
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            for (signed char i_14 = 1; i_14 < 15; i_14 += 4) 
            {
                {
                    arr_57 [i_14] [i_12 + 1] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2444724825U)) ? (arr_44 [i_14] [i_14] [i_14 + 1] [i_14] [i_14]) : (arr_44 [i_14 + 2] [i_14 + 2] [i_13 - 1] [i_13 - 1] [i_12])));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (_Bool)1))));
                    arr_58 [i_14] [i_13] [7] = ((/* implicit */unsigned short) ((int) var_0));
                }
            } 
        } 
        arr_59 [(unsigned char)4] = ((/* implicit */_Bool) 5928467370833553235LL);
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_23 [i_12]))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_16 = 3; i_16 < 19; i_16 += 1) 
        {
            arr_66 [i_15] [i_15] [i_16] = ((/* implicit */short) arr_62 [(_Bool)1] [(_Bool)1]);
            arr_67 [i_15] [i_15] = ((/* implicit */int) (unsigned short)37182);
            arr_68 [i_16 - 2] = (~(((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50837))) : (-5928467370833553235LL))));
        }
        arr_69 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)50823))))) ? (((/* implicit */unsigned long long int) arr_60 [i_15] [i_15])) : (min((((/* implicit */unsigned long long int) 1778911021)), (arr_65 [i_15] [i_15] [i_15])))))) ? ((~(((((/* implicit */_Bool) 865364646)) ? (((/* implicit */unsigned long long int) 5928467370833553235LL)) : (359044475163922252ULL))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_60 [i_15] [i_15])) ? (((/* implicit */int) arr_62 [i_15] [i_15])) : (((/* implicit */int) (unsigned char)179)))), (arr_64 [i_15] [i_15] [i_15]))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_17 = 3; i_17 < 17; i_17 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_2))));
        var_30 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (+(arr_65 [i_17] [i_17] [i_17])))) ? (((((/* implicit */_Bool) arr_63 [i_17 + 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_61 [i_17] [i_17 - 3]))) : (((/* implicit */int) arr_70 [i_17])))));
        arr_72 [i_17] = ((/* implicit */long long int) ((min((arr_63 [i_17 + 1]), (arr_63 [i_17 - 1]))) - (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_63 [i_17])))), ((!(((/* implicit */_Bool) 440585394)))))))));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_61 [i_17] [i_17]), (((/* implicit */int) (unsigned short)41385))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) != (var_3)))), ((short)508))))) : (max((((unsigned int) 1970324836974592ULL)), (((/* implicit */unsigned int) (unsigned char)0))))));
    }
}
