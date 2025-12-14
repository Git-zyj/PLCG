/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53876
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))))) ? (9223372036854775807LL) : (2830062780250288390LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -2830062780250288390LL))) ? (((/* implicit */int) ((unsigned char) ((2830062780250288389LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))))) : (((/* implicit */int) arr_9 [12LL] [i_0] [i_1] [i_2] [i_3]))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)136))));
                                var_17 = ((((/* implicit */_Bool) 2830062780250288390LL)) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) 136762637U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_8 [i_1] [i_4] [i_0] [i_3]))))) : (8607383289043644903LL))));
                            }
                            for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                var_18 = ((2830062780250288389LL) < (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-16), ((signed char)-16))))));
                                arr_17 [i_0] [i_0] [i_0] [(unsigned short)1] = ((/* implicit */unsigned long long int) min((3652235886U), (((/* implicit */unsigned int) (unsigned char)119))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (unsigned char)255))))) ? ((~(((/* implicit */int) var_13)))) : ((+(var_6)))))));
    /* LoopSeq 4 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) var_12);
        arr_20 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12732759063043837092ULL)) ? (arr_19 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        var_22 = ((/* implicit */int) ((unsigned short) (-(-8607383289043644904LL))));
        arr_21 [i_6] = ((/* implicit */_Bool) 0ULL);
    }
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
    {
        arr_26 [i_7] [i_7] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_7] [i_7]))))))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_7]))))), (211589870U))) : (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) : (0U))));
        arr_27 [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (((+(-8607383289043644904LL))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))))))));
        var_23 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_7])))));
        arr_28 [i_7] [i_7] = ((/* implicit */_Bool) min(((unsigned char)234), (((/* implicit */unsigned char) var_1))));
    }
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0))))), (max((((/* implicit */unsigned int) min((((/* implicit */signed char) var_0)), (var_1)))), (min((arr_11 [i_8] [i_9] [i_9] [i_8] [i_9] [i_9]), (((/* implicit */unsigned int) (signed char)127))))))));
            var_25 |= (~(6336279906242953112LL));
            var_26 += ((/* implicit */int) ((long long int) (+(((/* implicit */int) (_Bool)1)))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) < (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_8]))) / (-8607383289043644904LL)))))) <= (max(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (short)0)))))))));
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_37 [i_8] [i_10] = ((/* implicit */unsigned char) (!(arr_9 [i_8] [i_8] [i_8] [(_Bool)1] [i_10])));
            /* LoopNest 2 */
            for (unsigned int i_11 = 1; i_11 < 7; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    {
                        var_28 = ((short) var_13);
                        arr_43 [i_10] [i_10] [i_10] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30480)) / (var_4)))) ? (((/* implicit */int) arr_8 [i_8] [i_10] [i_12] [i_11 - 1])) : (((/* implicit */int) (unsigned short)41304)));
                        arr_44 [i_12] = ((/* implicit */unsigned long long int) ((((6336279906242953112LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(arr_31 [i_11])))) : (((unsigned int) (unsigned char)13))));
                        arr_45 [i_8] [i_12] [i_11] [i_11] [i_11] [(signed char)0] = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
            arr_46 [i_8] = ((((/* implicit */_Bool) 8607383289043644903LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) : (0U));
            arr_47 [i_8] [i_10] [i_10] = (~(((/* implicit */int) (short)32043)));
        }
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            arr_50 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [(unsigned char)0])) << (((((/* implicit */_Bool) ((unsigned char) (unsigned short)41304))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (var_3)))));
            var_29 |= ((/* implicit */unsigned char) max((2011297883), (((/* implicit */int) (unsigned char)255))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_57 [i_8] [i_13] [i_15] [i_15] = ((/* implicit */unsigned long long int) (~(2830062780250288389LL)));
                    arr_58 [i_8] [i_15] [i_15] [1LL] = ((/* implicit */short) (~(((/* implicit */int) (signed char)14))));
                    var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_53 [i_8] [i_8] [i_14] [i_14]))));
                    arr_59 [i_15] [i_13] [i_14] [i_15] [i_14] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_13 [i_8] [i_13] [i_14] [i_15])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))));
                }
                var_31 = ((/* implicit */signed char) (-(-2830062780250288389LL)));
            }
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(min((11461389U), (var_5)))))) + (max((((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) var_13))))), (-2830062780250288390LL)))));
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) (short)0);
            arr_63 [i_8] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned char) 63U);
        }
        /* LoopSeq 2 */
        for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (unsigned int i_19 = 2; i_19 < 9; i_19 += 3) 
                {
                    {
                        arr_72 [i_19] [i_8] [i_17] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (251658240U))))))), (((unsigned int) (!(((/* implicit */_Bool) arr_48 [i_18] [i_18])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            arr_76 [i_19] [8] [i_19 - 2] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (short)32767);
                            arr_77 [i_19] = ((((/* implicit */_Bool) ((long long int) arr_32 [i_8] [i_8] [i_8]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
                            arr_78 [i_8] [i_19] [i_19 - 1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */long long int) var_7)) : (arr_34 [i_18] [i_20]))));
                            var_34 = var_1;
                        }
                        var_35 = 2830062780250288389LL;
                        var_36 = ((/* implicit */signed char) var_6);
                        var_37 = ((/* implicit */int) min((4294967295U), (((/* implicit */unsigned int) (signed char)-98))));
                    }
                } 
            } 
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) arr_36 [i_8] [i_17] [i_8]))));
            var_39 = ((/* implicit */int) arr_36 [i_8] [i_17] [i_8]);
            var_40 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) arr_54 [i_8] [i_8] [i_17] [i_17]))), ((-(arr_54 [i_8] [i_8] [i_17] [i_17])))));
            arr_79 [i_8] = ((/* implicit */unsigned char) arr_70 [i_8] [i_8] [i_17] [i_17]);
        }
        for (unsigned char i_21 = 1; i_21 < 6; i_21 += 4) 
        {
            arr_83 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))));
            var_41 = ((/* implicit */signed char) (!((_Bool)1)));
            var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) var_8)))))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? ((+(((((/* implicit */_Bool) arr_80 [i_21 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (883262324U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36047))))))));
        }
        var_44 += ((/* implicit */signed char) min((((/* implicit */unsigned short) ((_Bool) ((unsigned int) (unsigned short)8458)))), (((unsigned short) var_2))));
    }
    /* vectorizable */
    for (unsigned int i_22 = 0; i_22 < 10; i_22 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [(unsigned char)19] [i_22] [i_22] [i_22] [i_22]))))));
        var_46 = ((arr_80 [i_22]) | (arr_80 [i_22]));
        var_47 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_71 [i_22] [i_22] [i_22])))));
        arr_86 [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3606501125U))));
    }
    var_48 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)17236)) ? (-2830062780250288389LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))) != (max((6960013515248299991LL), (((/* implicit */long long int) var_1)))))))));
}
