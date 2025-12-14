/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194211
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [(unsigned char)0]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_0] [(_Bool)1] [(short)3] = ((/* implicit */_Bool) min((5522441641390397228ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-12601)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (~(((((((/* implicit */int) arr_8 [i_1 - 1] [i_4 - 1] [i_4 + 1])) + (2147483647))) << (((/* implicit */int) var_4))))));
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_0 [i_1 - 1])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 35570863)) ? (var_5) : (((/* implicit */int) (short)-2391))))) > (((unsigned int) ((((/* implicit */int) (short)-5982)) > (((/* implicit */int) arr_9 [i_1])))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_16 [i_0] [i_1] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */long long int) 33554428U)) <= (2202933772137229544LL))))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1])))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            {
                                arr_23 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1265765761389618554ULL)))))));
                                arr_24 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) (signed char)58)))));
                                var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) 1511705070)))))));
                                var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_1 - 1] [i_5] [i_9]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_8] [i_9])))))) ? (min((var_0), (((/* implicit */long long int) arr_4 [i_1 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_0] [i_1 - 1] [i_0]) && (((/* implicit */_Bool) (signed char)112))))))));
                                arr_30 [i_0] [i_1] [i_1] [i_8] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) var_2)) >> (((6636320776813057800LL) - (6636320776813057781LL)))))))) ? (((/* implicit */int) (!(arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (32640U)))) ? (((/* implicit */int) arr_28 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (arr_22 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 2; i_10 < 19; i_10 += 3) 
    {
        for (unsigned short i_11 = 2; i_11 < 18; i_11 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) (_Bool)1))), (arr_32 [i_10 + 3])))));
                var_21 ^= ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (_Bool)1))))), (arr_35 [i_11 + 3] [(short)0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_12 = 1; i_12 < 14; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (min((((/* implicit */unsigned int) var_4)), (var_13)))));
                    var_23 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_42 [i_12 - 1] [i_12 + 1] [i_12 - 1])))), (((/* implicit */int) max((((/* implicit */short) arr_42 [i_12 - 1] [i_12 + 1] [i_12 - 1])), (arr_8 [i_12 - 1] [i_12 + 1] [i_12 - 1]))))));
                    var_24 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) arr_20 [i_13] [i_12 + 1] [i_12 + 1])) : (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_10)))))), ((-(((/* implicit */int) ((unsigned short) 2501837376U)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 2; i_17 < 14; i_17 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (arr_46 [3ULL])));
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_11)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) min((((/* implicit */unsigned char) arr_53 [i_12] [i_15] [i_15] [i_16] [i_15] [i_15] [i_18])), (var_3)))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) var_4)))) - (41)))))));
                            arr_54 [i_12] [i_15] [i_16] [i_17] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (arr_49 [i_12] [i_12 - 1] [(signed char)1] [i_17] [i_17 - 1]))))));
                            arr_55 [i_17] |= ((/* implicit */signed char) 9223372036854775807LL);
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_39 [i_18] [i_18]))));
                            arr_56 [i_12] [i_15] [i_16] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (17180978312319933054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? ((-(9223372036854775801LL))) : (((/* implicit */long long int) ((unsigned int) (~(9223372036854775794LL)))))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                        {
                            arr_59 [i_19] [i_16] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (unsigned short)16807)))) <= (var_5)));
                            var_28 = ((/* implicit */int) min((((/* implicit */signed char) max(((!(arr_19 [i_15] [i_15] [i_15]))), (arr_17 [i_17 - 2] [i_19] [(_Bool)0] [i_19])))), (((signed char) ((2202933772137229541LL) / (((/* implicit */long long int) 2597523348U)))))));
                            var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (min((((/* implicit */unsigned char) var_9)), ((unsigned char)253)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_20 [i_15] [i_15] [i_19])))) : (((((/* implicit */_Bool) 428243582)) ? (arr_35 [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                        }
                    }
                    for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 4) 
                    {
                        var_30 -= ((/* implicit */signed char) arr_20 [i_15] [i_12 - 1] [i_20 + 1]);
                        arr_62 [i_12] [i_15] [i_20 + 3] = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_15] [i_12] [i_15]))))), (((((/* implicit */long long int) var_5)) & (arr_38 [i_12])))));
                        var_31 = ((/* implicit */unsigned char) ((max((var_12), (((/* implicit */unsigned long long int) arr_51 [i_12 - 1])))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_15])) ? (((/* implicit */int) arr_45 [i_15] [i_20 + 4])) : (-501735801)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_35 [i_12 + 1] [i_15]))) - (59ULL)))));
                    }
                    arr_63 [i_12] [i_15] [i_16] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) (unsigned short)1009)) ? (((/* implicit */unsigned long long int) 4194231570U)) : (13429277198615663292ULL)))))));
                }
            } 
        } 
    }
}
