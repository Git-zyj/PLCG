/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45303
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
    var_13 = (+(max((min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (var_0))), (((/* implicit */unsigned long long int) ((var_3) ^ (9223372036854775807LL)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 574827157)) && (((/* implicit */_Bool) (short)-2264)))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_15 = ((/* implicit */int) (short)27274);
                var_16 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) -1571189502)) ? (((/* implicit */unsigned long long int) var_10)) : ((+(18357708154380472894ULL)))))));
            }
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_17 = 0LL;
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_18 += (short)-1;
                            var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) var_12))))), (((long long int) max((((/* implicit */long long int) (unsigned short)19991)), (var_3))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) arr_3 [i_6 + 2] [i_6 + 3])));
                    var_20 = -8459598320674658316LL;
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -30638903016251757LL)) ? (-6743643147066624307LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))));
                        arr_24 [i_6] [i_6] [i_0] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_7 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                    }
                }
                for (signed char i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_23 += ((/* implicit */short) var_3);
                    var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) <= (min((7375977277403382025LL), (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) / (var_8)))))));
                    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (short)22826))));
                }
                for (int i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        var_26 = ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_1))))) / (((/* implicit */int) var_11)));
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                        var_27 = ((/* implicit */short) ((202817051) >> (((var_6) - (2107627348)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned short)34227)) - (34211)))))))) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : ((((~(((/* implicit */int) (short)0)))) | (((/* implicit */int) (signed char)-44))))));
                    }
                }
            }
            for (int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_3) / (((/* implicit */long long int) (-(1164418658))))));
                var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((long long int) arr_3 [i_1] [i_1]))) ? (((((-8347460802418017772LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)154)) - (133))))) : (((/* implicit */long long int) ((int) arr_25 [i_12] [i_12])))))));
                var_31 = var_2;
                var_32 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2729))) == (1605572626812137218LL)))), ((+(var_6)))))));
            }
            for (int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (var_0) : (((/* implicit */unsigned long long int) var_6))))) ? (max((var_6), (var_10))) : (((/* implicit */int) (unsigned short)57281)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (short)22696))))))))));
                /* LoopSeq 4 */
                for (long long int i_14 = 3; i_14 < 9; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_34 = ((((var_6) != (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) ((signed char) arr_17 [i_14] [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14 + 2]))));
                        var_35 = ((/* implicit */short) var_12);
                    }
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), ((~(-6336970925038731101LL)))))) ? (((/* implicit */int) (short)-16530)) : (var_6))))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2878967720U), (((/* implicit */unsigned int) (signed char)64))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-19970)) ? (((/* implicit */int) (short)4990)) : (((/* implicit */int) (signed char)-55)))) & ((-(((/* implicit */int) var_5))))));
                    arr_54 [i_0] [i_0] = ((/* implicit */long long int) var_0);
                }
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
                {
                    var_39 -= ((/* implicit */short) ((((/* implicit */int) max((max((((/* implicit */unsigned short) (short)-31331)), ((unsigned short)3))), (((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))) >= (((/* implicit */int) var_5))));
                    var_40 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9606))) > (max((max((1199858183677897166LL), (1886736976518768063LL))), ((~(9223372036854775807LL)))))));
                }
                /* vectorizable */
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
                {
                    var_41 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)52))));
                    var_42 += ((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]))));
                    arr_60 [i_13] [i_13] [i_0] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1))));
                    arr_61 [i_0] = ((/* implicit */signed char) var_11);
                    arr_62 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)84)) : (var_10)))) ? (var_10) : (((arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) var_4))))));
                }
                arr_63 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                var_43 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_29 [i_1 - 2] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19531))) : (arr_29 [i_1 + 1] [2U])))));
            }
            var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2]))));
            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28599)) < (((/* implicit */int) (short)0))));
            var_46 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_0)))) ? (var_10) : (((/* implicit */int) arr_53 [i_0] [i_0]))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            arr_66 [i_0] [i_0] = ((/* implicit */unsigned char) arr_50 [i_0] [i_0] [i_0] [i_0]);
            var_47 = ((/* implicit */unsigned char) ((long long int) (-(arr_1 [i_0]))));
            /* LoopNest 2 */
            for (short i_20 = 2; i_20 < 11; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    {
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (0LL)))) ? (((/* implicit */int) ((short) (_Bool)0))) : (287488079))))));
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_68 [i_20 + 1] [i_0] [i_20 + 1] [i_20 - 1])) : (((/* implicit */int) arr_68 [i_20 - 2] [i_0] [i_0] [i_20 + 1])))) : ((+(((/* implicit */int) arr_68 [i_20 - 2] [i_0] [i_20 - 2] [i_20 - 1]))))));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)85))));
        }
        for (int i_22 = 1; i_22 < 11; i_22 += 1) 
        {
            var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11186)) ? ((-(max((((/* implicit */unsigned int) 247135680)), (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_0] [i_0])))));
            var_52 = ((/* implicit */short) ((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))) != (3719700313U)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57687)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2349))) : (12305009958005707990ULL)))) ? ((-(((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */int) (signed char)89)))))))));
            var_53 = ((/* implicit */long long int) ((((/* implicit */long long int) min((((0) & (((/* implicit */int) var_5)))), (((/* implicit */int) max((var_9), (var_4))))))) >= (((((/* implicit */_Bool) arr_11 [i_22 - 1] [i_22 + 1] [i_22 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_12)))))) : (((-9167450149073777723LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)33)))))))));
        }
        for (long long int i_23 = 0; i_23 < 12; i_23 += 4) 
        {
            var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) -5327633326142490173LL))));
            var_55 |= ((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0])) == (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (0) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7))))));
            var_56 = ((/* implicit */int) ((short) ((var_6) > (((/* implicit */int) ((short) 0U))))));
            var_57 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_51 [i_0] [i_0])), (var_3))), (((/* implicit */long long int) ((short) arr_51 [i_0] [i_0])))));
        }
        arr_79 [i_0] [i_0] = ((/* implicit */short) -2287261467784745224LL);
    }
    var_58 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 268435440)) ? (2362288359765871948LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52587))))) < (((/* implicit */long long int) ((/* implicit */int) var_1)))));
}
