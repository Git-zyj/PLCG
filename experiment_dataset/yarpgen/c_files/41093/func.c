/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41093
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
    var_13 += ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) -4602246369894403278LL))), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)205)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) var_12))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((7880749592133735904ULL), (((/* implicit */unsigned long long int) 2147483640))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (2077359341171506348LL) : (((/* implicit */long long int) arr_2 [i_0]))))))) : ((~(8950764491649305389ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 4; i_2 < 12; i_2 += 2) 
                {
                    var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */int) ((unsigned short) (signed char)0))) : (((/* implicit */int) var_9))));
                    var_15 += ((/* implicit */_Bool) arr_1 [i_1]);
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (3147803255854905905ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32530)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))));
                        arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_12 [i_2] [i_1] [i_2] [i_3] [i_2]);
                        var_18 &= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_1 - 3]))));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */short) ((int) arr_10 [i_2] [i_2] [i_2 - 3] [i_2]));
                            arr_19 [i_0] [i_1] = ((((/* implicit */_Bool) (((_Bool)1) ? (7547606333051241041LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_1]) : (((/* implicit */int) (unsigned short)21155)))) : (((/* implicit */int) var_7)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2 - 4] [i_2 - 4] [i_2 - 1] [i_1 - 3])) ? (((/* implicit */int) ((short) var_9))) : (((((/* implicit */_Bool) (short)-2866)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (unsigned short)21155))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53557))) : (((((/* implicit */_Bool) (short)32530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) : (18446744073709551615ULL)))));
                        }
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 15298940817854645723ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2164)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-2148))))) : ((~(15298940817854645710ULL))))))));
                        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1 + 1] [i_1] [i_0] [i_0])) ? (arr_15 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2]) : (arr_15 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (var_0)));
                            var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_4] [i_0])) : (arr_7 [i_0] [i_1] [i_4] [i_4]))));
                            arr_22 [i_0] [i_1] [i_0] [i_6] [i_6] [i_6] [i_2] = ((/* implicit */short) (~(arr_15 [i_2] [i_2 - 2] [i_1 + 2] [i_1] [i_1] [i_1 + 2])));
                            var_26 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_2 - 3] [i_1] [i_1 - 2] [i_1 - 2]))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) ((unsigned short) arr_10 [i_1 + 1] [i_1] [i_2] [i_7]));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (15298940817854645711ULL)))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_7]))))));
                    }
                    var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 + 2] [i_2 + 2] [i_1 + 3]))) : (arr_18 [i_0] [i_1] [i_1] [i_2])))));
                }
                var_29 = ((/* implicit */int) ((unsigned long long int) (unsigned char)80));
            }
        } 
    } 
}
