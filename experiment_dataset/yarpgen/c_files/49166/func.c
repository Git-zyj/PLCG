/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49166
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
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10412458757308664990ULL)) ? (max((arr_6 [i_2] [i_2]), (7ULL))) : (arr_6 [i_0 - 3] [i_0 - 3])))) ? (((((arr_8 [i_0] [10ULL] [i_3] [i_4]) ? (arr_10 [i_0] [i_3] [i_2]) : (var_6))) >> (((((/* implicit */int) max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned short) var_11))))) - (65419))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_0 + 1] [i_0 - 3])))) : (((15589763723105398991ULL) / (((/* implicit */unsigned long long int) -16LL)))))))))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(max((arr_10 [i_0 - 2] [i_0 - 2] [i_4]), (((/* implicit */unsigned long long int) 44LL)))))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)124)) * (max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (signed char i_6 = 3; i_6 < 23; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_16 = arr_10 [i_0] [i_1] [i_1];
                                arr_23 [i_7] [i_7 + 1] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) max((4303481010537080227ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))) ? (440705249398719892ULL) : (arr_21 [(signed char)17] [(signed char)17] [(short)0] [(short)0] [i_7])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 4; i_8 < 11; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 2; i_11 < 12; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) -2093451461);
                                var_18 = ((/* implicit */signed char) min(((+(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */int) arr_31 [i_9])) : (((/* implicit */int) arr_17 [i_11 - 1] [i_9] [i_8])))))));
                                arr_38 [i_9] [i_9] [(short)12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_12 + 1] [i_8 + 1] [i_10] [i_9] [i_8 + 1]))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_21 [i_8 - 1] [i_9] [i_8 - 1] [i_11] [i_12 + 2]) : (arr_21 [i_8 - 2] [i_8 - 2] [i_8 - 2] [(short)11] [i_12 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        for (signed char i_14 = 2; i_14 < 13; i_14 += 4) 
                        {
                            {
                                arr_46 [i_8 + 2] [i_9] [i_10] [i_13] [8U] = ((/* implicit */unsigned long long int) max((min(((~(((/* implicit */int) (signed char)8)))), ((-(((/* implicit */int) var_1)))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_8 + 4] [i_14 - 1] [i_13] [i_13 - 1] [i_10])), (var_8))))));
                                var_19 += ((/* implicit */short) (~(((((/* implicit */_Bool) -42LL)) ? (((((/* implicit */_Bool) -45LL)) ? (1ULL) : (16698411277536711337ULL))) : (((((/* implicit */unsigned long long int) arr_0 [17ULL])) + (var_12)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 11; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 1) 
                        {
                            {
                                arr_52 [i_8] [i_16] [i_9] [i_15] [i_9] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) 34362564U)), (10012364179119122614ULL))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_42 [i_8] [i_9] [i_10] [i_15] [i_15])))))))));
                                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? ((+(((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_1))));
                                var_21 = ((/* implicit */signed char) max((67553994410557440ULL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_8] [i_9] [i_9] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_16] [i_16] [(unsigned short)6] [i_16] [i_9] [i_10]))) : (4294967286U)))) ? (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_16]))) : (arr_19 [16] [i_8] [i_9] [16] [16] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (arr_37 [i_8] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (18379190079298994178ULL))))));
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(arr_24 [i_8 + 2])))), (((((/* implicit */_Bool) arr_24 [i_8 + 2])) ? (var_7) : (((/* implicit */unsigned long long int) arr_24 [i_8 + 2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_8] [i_9] [i_10] [i_8] [i_18 + 1] [i_10])) ? (max((18006038824310831734ULL), (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) var_12)) ? (18379190079298994143ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_8] [i_10] [i_10] [i_17] [i_8] [i_10]))))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_16 [i_9] [i_9]))))))))));
                                arr_59 [i_17] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)32757)) ? (var_10) : (((/* implicit */unsigned long long int) 39LL))))))) ? (((((/* implicit */_Bool) -45LL)) ? (arr_34 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_17] [i_8] [i_9] [i_17]) : (arr_18 [i_8] [i_8 + 1] [i_8 - 3] [i_8] [i_8 - 3] [i_18 - 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-10914)))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(-1967437224754212109LL))), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_31 [i_9])) : (((/* implicit */int) (unsigned short)41741)))), (((/* implicit */int) max((var_5), (((/* implicit */short) var_11)))))))) : (272676148U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 15; i_20 += 4) 
                        {
                            {
                                arr_66 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */signed char) min((6778070932892232878ULL), (((/* implicit */unsigned long long int) (short)-5554))));
                                var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_8] [i_9] [i_10] [i_8] [i_20]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 4) 
    {
        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) (~((+(((/* implicit */int) ((272676148U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_23 - 1] [i_22]))))))))));
                            var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_23 - 1] [i_23 - 1] [i_23 - 1])) ? (((/* implicit */int) arr_17 [i_24] [i_24] [i_23 - 1])) : (((/* implicit */int) arr_17 [i_24] [i_23] [i_23 - 1]))))), (((((/* implicit */_Bool) arr_19 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_22] [i_22] [i_21])) ? (arr_19 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 1] [(_Bool)1] [i_21]) : (arr_19 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_21] [i_21] [i_21])))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-46LL), (((/* implicit */long long int) arr_15 [i_23 - 1] [i_23] [i_23 - 1] [i_23] [i_23] [i_23 - 1]))))) ? ((-(((/* implicit */int) (signed char)49)))) : (((((/* implicit */int) (unsigned short)65517)) - ((~(((/* implicit */int) (signed char)3))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 4) 
                {
                    for (unsigned short i_26 = 0; i_26 < 16; i_26 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_67 [i_25])), (((((/* implicit */int) arr_8 [i_25] [i_22] [i_25] [i_26])) - (((/* implicit */int) var_2)))))))))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 8897785027428045188ULL))));
                            var_32 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) arr_3 [i_22] [i_22])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32239)) - (1734417942)))) : (min((18379190079298994162ULL), (((/* implicit */unsigned long long int) arr_16 [i_22] [i_22])))))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_4))))) : (max((var_3), (((/* implicit */unsigned long long int) 507384528)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_27 = 0; i_27 < 16; i_27 += 4) 
                {
                    for (unsigned int i_28 = 0; i_28 < 16; i_28 += 4) 
                    {
                        for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -5325467983600184145LL)), (arr_76 [i_27] [i_21] [i_21])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_22] [i_28]))) : (((((/* implicit */_Bool) (short)25237)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) & (var_6)));
                                arr_87 [i_29] [i_27] [(unsigned short)7] [i_27] [i_21] [i_21] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((arr_86 [12ULL]), (((/* implicit */short) (signed char)3))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_21]))) : (9635491784744722057ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 16; i_30 += 4) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 16; i_31 += 4) 
                    {
                        {
                            arr_93 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) (short)-22698);
                            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)4))));
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_21] [i_21] [i_30])) / (((/* implicit */int) (short)-22922))))) ? (((5ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_21] [i_22] [i_31]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_17 [i_21] [i_22] [i_30]))))))))));
                            arr_94 [i_21] [i_22] [i_22] [i_31] = ((/* implicit */short) arr_20 [i_21] [i_22] [i_21] [i_21] [i_21] [i_31]);
                            arr_95 [i_21] [i_22] [i_30] [i_31] = ((/* implicit */signed char) ((min((arr_90 [i_22] [i_30] [i_31]), (arr_90 [(signed char)0] [i_30] [i_21]))) <= (((((/* implicit */_Bool) 15319753978670026690ULL)) ? (((/* implicit */int) arr_16 [i_21] [i_21])) : (((/* implicit */int) arr_9 [i_22] [22U]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
