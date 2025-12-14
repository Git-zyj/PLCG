/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238159
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
    var_16 |= ((/* implicit */short) ((var_9) % (var_12)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_3])))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_2] [i_0])))) : (((/* implicit */unsigned long long int) 7587072722267753304LL))));
                        var_17 *= ((/* implicit */unsigned char) max((((long long int) (short)-14780)), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551597ULL)) && (((/* implicit */_Bool) min((11940501440876130453ULL), (11940501440876130469ULL)))))))));
                        var_18 = ((long long int) (signed char)-18);
                    }
                    for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_19 = ((long long int) -9223372036854775804LL);
                            arr_18 [i_2] [i_1] [i_5] = ((/* implicit */long long int) (short)5103);
                            var_20 *= ((unsigned char) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_5])))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (unsigned char)249))));
                        }
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) arr_8 [i_4 + 1] [i_2] [i_4 + 1] [i_2] [i_2])), (var_9))), (var_12)));
                            arr_22 [i_2] [(short)10] [i_2] [i_2] [i_2] = ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) var_6)))) ? (arr_3 [i_4 + 4] [i_4 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6224))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_5), ((unsigned char)183)))), (((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)118)))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (signed char)45))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_24 &= -6631360887024947763LL;
                            arr_25 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_15 [i_7] [i_2] [i_7] [i_4] [i_2] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) (short)29796))) / (6062110315127945569LL)))));
                        }
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_4 - 1] [i_0] [i_4] [i_4] [i_4])) * (((/* implicit */int) arr_14 [i_0] [i_4 + 3] [(signed char)12] [(signed char)12] [i_4] [i_4 + 3]))))) ? (((((/* implicit */int) max((arr_8 [(unsigned char)0] [i_1] [i_2] [i_1] [i_4 - 1]), (var_6)))) / (((((/* implicit */int) (unsigned char)3)) % (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)63488)) || (((/* implicit */_Bool) arr_17 [i_1]))))))));
                        arr_26 [i_2] [i_1] = (i_2 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_4] [i_2] [i_4 - 2] [i_2] [i_1]) << (((((/* implicit */int) (unsigned char)9)) - (9)))))) ? (((/* implicit */int) ((unsigned char) (signed char)69))) : (((/* implicit */int) max(((short)(-32767 - 1)), ((short)5103))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((arr_11 [i_4] [i_2] [i_4 - 2] [i_2] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)9)) - (9)))))) ? (((/* implicit */int) ((unsigned char) (signed char)69))) : (((/* implicit */int) max(((short)(-32767 - 1)), ((short)5103)))))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_26 *= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_0]);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((2780613114739205387LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (624971535535308315LL)))))))));
                    }
                    arr_31 [i_2] [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)254))))), (min((-3288777540125136556LL), (arr_17 [i_0]))))), (((/* implicit */long long int) (signed char)-110))));
                    arr_32 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */int) (unsigned char)51)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_28 -= var_5;
}
