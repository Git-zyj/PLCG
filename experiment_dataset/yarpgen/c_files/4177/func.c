/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4177
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_20 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-108)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_2 [i_1])))));
        /* LoopSeq 2 */
        for (signed char i_2 = 3; i_2 < 8; i_2 += 2) 
        {
            arr_8 [i_2] [i_2 + 1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)107))) : (-6972026256795120884LL))));
            arr_9 [i_2] = ((/* implicit */_Bool) (+(((int) (signed char)-108))));
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 7; i_3 += 4) 
            {
                for (unsigned short i_4 = 1; i_4 < 7; i_4 += 2) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (signed char)-74);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_2 - 3] [0LL])) : (((/* implicit */int) arr_1 [i_2] [i_2]))));
                        arr_15 [(short)6] [3U] [i_2] [1LL] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)38861))))));
                    }
                } 
            } 
        }
        for (short i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) : (0U))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((arr_11 [i_1] [i_5 + 1] [i_6] [i_8]) ? (((/* implicit */int) arr_3 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_5] [i_7] [i_5])))))));
                        arr_27 [i_1] [i_1] [i_6 + 3] [i_6] [i_1] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (679095042U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115)))))) : (arr_20 [i_6 + 1] [i_5 + 1] [i_6 + 1] [i_6])));
                        var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_5 + 1] [i_6]))));
                    }
                }
                arr_28 [(signed char)0] [i_5] [i_5] |= ((((-3356863996306087855LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))) + (((/* implicit */long long int) 4294967288U)));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_32 [i_1] [i_5] [i_5] = (signed char)25;
                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_5]))))) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) (signed char)-31))));
            }
            var_27 ^= ((signed char) ((20U) + (4294967287U)));
        }
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_10] [i_10])) ? (((arr_34 [i_10]) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (short)-23541)))) : (((/* implicit */int) arr_34 [i_10]))));
        arr_38 [i_10] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)79))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            for (signed char i_12 = 2; i_12 < 21; i_12 += 1) 
            {
                {
                    var_28 = (~(12072092548034701902ULL));
                    /* LoopSeq 4 */
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        arr_46 [21LL] [i_10] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_33 [i_10])))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */int) (_Bool)1)) << (((5463399208121047634ULL) - (5463399208121047627ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14895685893988978174ULL)))))));
                        var_30 -= ((/* implicit */unsigned short) (+(((unsigned int) arr_39 [(short)16]))));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-101)) >= (((/* implicit */int) arr_42 [i_14] [i_11] [i_10] [i_13])))))) | ((+(1526881884U)))));
                            var_32 = ((/* implicit */long long int) arr_42 [i_10] [i_10] [i_10] [i_14]);
                        }
                        for (long long int i_15 = 3; i_15 < 24; i_15 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6972026256795120880LL)) ? (((((/* implicit */_Bool) (signed char)-80)) ? (arr_49 [i_10] [i_10] [i_12] [i_13] [9LL] [i_10] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2545723025U)) ? (((/* implicit */int) (unsigned short)47041)) : (((/* implicit */int) arr_41 [i_10] [8ULL] [i_12])))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) 2768085430U))));
                            arr_53 [i_10] [(short)16] [i_11] [i_12] [24ULL] [(short)16] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_40 [i_10] [i_12 + 2]))));
                        }
                        var_35 ^= ((((/* implicit */_Bool) (short)-22129)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : ((-(18446744073709551605ULL))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-86))));
                        var_37 -= ((/* implicit */unsigned short) 3813657150631623616LL);
                    }
                    for (signed char i_17 = 1; i_17 < 22; i_17 += 2) /* same iter space */
                    {
                        arr_58 [i_10] [i_11] [i_12 + 2] = ((/* implicit */unsigned char) arr_49 [i_10] [i_11] [i_12] [i_17] [i_10] [i_10] [i_17]);
                        arr_59 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4U)))) : (((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_10] [i_10] [i_12] [i_17] [10LL]))) : (arr_39 [i_10])))));
                    }
                    for (signed char i_18 = 1; i_18 < 22; i_18 += 2) /* same iter space */
                    {
                        var_38 = (-(arr_47 [i_10] [i_10] [i_11] [i_10] [i_18 + 3]));
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_12 + 4] [(_Bool)1] [(signed char)12] [i_18 + 3] [i_18])) & (((/* implicit */int) (signed char)124)))))));
                    }
                    var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [14ULL] [i_12 + 1] [13])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-80))))) : (((((/* implicit */_Bool) arr_35 [(unsigned char)20] [(unsigned char)20])) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)-28)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                        {
                            var_41 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_10] [16ULL] [i_12] [i_19] [16ULL])))))));
                            var_42 += ((/* implicit */unsigned long long int) -2340564386386503983LL);
                        }
                        var_43 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6561559354233828274LL)) ? (((/* implicit */unsigned long long int) arr_47 [i_12 + 2] [(signed char)10] [i_12 + 1] [i_19 + 1] [(signed char)10])) : (arr_63 [i_12 + 4] [i_12 + 2] [i_19 + 1])));
                    }
                    for (long long int i_21 = 2; i_21 < 22; i_21 += 4) 
                    {
                        var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_10] [i_10] [i_10] [i_21 + 1] [i_12 - 1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_45 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_21 + 1] [i_21])) ? (10653549811840000971ULL) : (((/* implicit */unsigned long long int) 0U))));
                            var_46 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            var_47 -= ((((/* implicit */_Bool) arr_69 [i_12] [(signed char)23] [i_22])) ? (((((/* implicit */_Bool) (unsigned short)56609)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [(_Bool)1] [(_Bool)1] [i_21] [i_21 + 2] [i_22] [i_11]))) : (10623529768016407282ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32758))))));
                        }
                        for (signed char i_23 = 0; i_23 < 25; i_23 += 4) 
                        {
                            var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)54))));
                            var_49 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-13610))));
                        }
                    }
                    arr_77 [(_Bool)1] [i_10] [i_10] = (+(arr_72 [i_10] [i_12 + 4] [i_12 + 1] [(short)3]));
                }
            } 
        } 
    }
    var_50 = ((/* implicit */_Bool) max((((/* implicit */int) (((~(70368744177152ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)101)))))))), (var_16)));
}
