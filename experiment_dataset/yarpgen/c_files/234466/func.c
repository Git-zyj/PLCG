/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234466
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) (((+(64020746U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)241)))))));
        arr_3 [i_0] |= ((/* implicit */signed char) ((short) arr_0 [i_0] [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            var_12 -= ((/* implicit */short) (signed char)-32);
                            var_13 = ((/* implicit */long long int) var_10);
                            arr_19 [i_5] [i_2] = ((/* implicit */unsigned int) var_1);
                            var_14 = 949144509U;
                        }
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_23 [i_6] [i_4] [i_3 + 1] [i_2] [(unsigned char)14] [i_1] [i_1] = ((/* implicit */unsigned char) 4230946566U);
                            arr_24 [i_3] [i_2] [i_6] [i_2] [i_6] [i_2] = ((/* implicit */int) (unsigned short)65523);
                            arr_25 [i_1] [i_2] [i_2] [i_2] [0U] [0U] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3] [i_3])) ? (arr_11 [i_3 + 1] [(unsigned char)15]) : (arr_11 [i_3 - 1] [i_2])));
                            arr_26 [i_2] = ((/* implicit */short) 949144505U);
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])))))));
                            arr_31 [4U] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_7);
                            arr_32 [i_2] [9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_3 - 2] [i_1] [i_4] [i_4]))) & (3345822778U)));
                        }
                        arr_33 [i_1] [10] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)31);
                    }
                } 
            } 
            arr_34 [i_2] = (short)-22979;
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    {
                        arr_41 [i_2] [i_9 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)22987)) ? (((/* implicit */int) ((unsigned char) var_6))) : (((((/* implicit */_Bool) arr_27 [i_2] [i_1] [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_40 [i_2] [i_9])) : (((/* implicit */int) var_8))))));
                        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_1] [i_2] [i_1]))) || (((((/* implicit */_Bool) 949144501U)) || (((/* implicit */_Bool) var_0))))));
                    }
                } 
            } 
        }
        for (long long int i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            var_17 = ((/* implicit */long long int) 4230946578U);
            arr_44 [i_1] [i_10] = max(((+(max((((/* implicit */long long int) 949144497U)), (var_7))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_1] [i_10])), (max((((/* implicit */unsigned int) (short)32759)), (arr_18 [i_1] [i_1] [i_1] [i_10] [7U])))))));
        }
        for (signed char i_11 = 2; i_11 < 16; i_11 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) arr_28 [i_1] [i_1] [i_11] [i_1] [i_11] [i_1] [i_1]);
            var_19 *= ((/* implicit */unsigned int) arr_48 [i_1]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32748)))))) ? (((/* implicit */int) arr_12 [i_12] [i_12] [i_1])) : (((/* implicit */int) ((3345822777U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-22974))))))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_17 [i_12] [i_12] [(short)1] [i_1] [i_1]))));
        }
        arr_53 [i_1] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_51 [i_1] [i_1]))))));
    }
    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
    {
        arr_57 [i_13] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)-93)), (max((3644927058U), (var_9)))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 3; i_14 < 16; i_14 += 4) 
        {
            for (short i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 2; i_16 < 15; i_16 += 3) 
                    {
                        for (short i_17 = 2; i_17 < 16; i_17 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (unsigned short)21);
                                arr_66 [i_15] [i_14 + 1] [i_15] [i_14] [i_17] [i_14] [i_16 + 1] = ((/* implicit */short) max((((/* implicit */long long int) arr_50 [i_13] [i_14 - 1])), ((-(min((((/* implicit */long long int) var_4)), (-7354449481862808830LL)))))));
                            }
                        } 
                    } 
                    arr_67 [i_14] [i_14 - 3] [i_14] [i_14] = (i_14 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_15] [i_15] [i_14])) + (2147483647))) << ((((~(((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_15] [i_14 - 3] [i_13]))) : (arr_58 [i_14] [i_14] [i_14]))))) - (4294949647U)))))) : (((/* implicit */signed char) ((((((((/* implicit */int) arr_12 [i_15] [i_15] [i_14])) - (2147483647))) + (2147483647))) << ((((~(((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_15] [i_14 - 3] [i_13]))) : (arr_58 [i_14] [i_14] [i_14]))))) - (4294949647U))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((arr_52 [i_13] [i_13] [i_13]) + (((/* implicit */long long int) ((/* implicit */int) (short)32729))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) == (((((/* implicit */int) (short)-28854)) ^ (((/* implicit */int) max(((short)-28856), (((/* implicit */short) arr_14 [i_15])))))))));
                    arr_68 [i_14] = ((/* implicit */int) min(((short)-32754), (((/* implicit */short) (unsigned char)14))));
                }
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((max((1345219769U), (((/* implicit */unsigned int) arr_40 [10U] [i_18])))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((unsigned short) (unsigned char)238))))))))))));
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            arr_74 [i_18] = ((/* implicit */unsigned int) min((((((((/* implicit */int) arr_5 [i_18] [i_19])) & (((/* implicit */int) arr_12 [i_18] [4U] [i_18])))) ^ (((/* implicit */int) min((arr_17 [i_18] [i_19] [i_19] [i_18] [11LL]), (((/* implicit */unsigned char) var_5))))))), (((/* implicit */int) ((4294967278U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7406))))))));
            var_25 = ((/* implicit */int) arr_10 [i_19] [i_18]);
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) arr_35 [i_19])))), ((!(((/* implicit */_Bool) min((arr_27 [i_18] [i_18] [(short)14] [i_18] [i_19]), (((/* implicit */unsigned int) (unsigned char)24))))))))))));
        }
        /* vectorizable */
        for (unsigned int i_20 = 1; i_20 < 10; i_20 += 2) 
        {
            var_27 *= ((/* implicit */unsigned int) (signed char)40);
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (arr_49 [2U] [(short)4] [(short)4])));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_22 = 1; i_22 < 18; i_22 += 1) 
        {
            for (short i_23 = 1; i_23 < 18; i_23 += 2) 
            {
                {
                    arr_88 [i_21] [i_21] = ((/* implicit */short) max((((unsigned short) 9223372036854775788LL)), (((unsigned short) var_0))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_86 [i_21] [i_22] [i_22] [(short)6]))));
                    arr_89 [i_21] [i_22] [i_22] [i_23] = (unsigned short)58133;
                    var_30 -= ((/* implicit */unsigned int) ((unsigned short) arr_79 [i_22]));
                }
            } 
        } 
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) max((((/* implicit */long long int) (+(min((arr_87 [i_21] [12]), (((/* implicit */int) arr_81 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20]))))))), (arr_86 [i_21] [i_21] [(unsigned short)4] [20]))))));
    }
    var_32 = ((/* implicit */short) var_9);
}
