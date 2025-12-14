/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240276
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
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((((arr_0 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-8245))))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) (short)-1024)))) : ((-(776837893U))))) << (((min((arr_0 [i_0]), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-17916))) + (var_9))))) - (372059070U)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_0 [i_1])), (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_1 [i_0]))), (((/* implicit */long long int) min((var_10), (var_5))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)-4)), (min((((/* implicit */unsigned int) min(((short)1045), ((short)-17916)))), (((((/* implicit */_Bool) (short)5278)) ? (var_4) : (3823814857U)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_14 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((short)0), ((short)-3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (471152439U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))))))) ? (max(((+(3544597395030737024LL))), (((/* implicit */long long int) min((arr_8 [i_3]), (arr_13 [i_0] [i_3])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5279))) : (var_2))))))))));
                    var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_12 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (short)-5279)))), (var_7)))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)3)) ? (var_7) : (arr_12 [i_2] [i_2] [i_0] [i_2]))), (((/* implicit */unsigned int) arr_3 [i_0]))))) : (min((((/* implicit */long long int) arr_3 [i_2])), (((((/* implicit */_Bool) arr_13 [i_0] [i_2])) ? (((/* implicit */long long int) 229376U)) : (-4171911375588788511LL)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) (-(arr_13 [i_0] [i_2])));
                        arr_18 [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)1023)))))));
                        arr_19 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((arr_13 [i_0] [i_2]) & (arr_9 [i_2])));
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-1024)) + (2147483647))) << (((((/* implicit */int) var_0)) - (53)))))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17904))) : (arr_13 [i_2] [i_3])))));
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        var_15 *= ((/* implicit */signed char) max(((~(((3518129376U) << (((arr_1 [i_2]) + (882391675329954000LL))))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)5278)))) - (((/* implicit */int) (signed char)31)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_24 [i_6] [i_5] [i_3] [i_3] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_5] [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_2])))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)27703)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (short)-4)))) - (44)))));
                            arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) 0U);
                        }
                        for (short i_7 = 2; i_7 < 23; i_7 += 3) 
                        {
                            arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) 7398348099606688156LL);
                            var_17 -= ((/* implicit */short) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)81))))), (((((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_3] [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (arr_8 [i_0])));
                            var_19 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (min((7398348099606688156LL), (arr_7 [i_8]))) : (arr_17 [i_0] [i_3] [i_8] [i_5]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            var_20 = min((arr_7 [i_2]), (((/* implicit */long long int) arr_15 [i_0] [i_3])));
                            arr_32 [i_2] [i_2] [i_8] [i_2] [i_2] = -8LL;
                            arr_33 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */signed char) min(((+(3221225472U))), (var_7)));
                        }
                    }
                }
            } 
        } 
        arr_34 [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_0])), ((-(((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)5293)) : (((/* implicit */int) (short)-256))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_9 = 2; i_9 < 22; i_9 += 4) 
    {
        arr_38 [i_9 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 3708750261U))) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 - 2])))));
        arr_39 [i_9 - 1] = ((/* implicit */short) (((~(((/* implicit */int) arr_37 [i_9 - 2])))) < (((/* implicit */int) arr_4 [i_9 + 1] [i_9 + 3] [i_9 + 3]))));
        arr_40 [i_9 + 1] = ((/* implicit */unsigned int) (signed char)123);
        var_21 = ((/* implicit */short) arr_22 [i_9 + 3] [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9 + 2]);
    }
}
