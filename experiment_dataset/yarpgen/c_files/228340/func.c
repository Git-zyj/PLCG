/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228340
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((short) arr_1 [i_0] [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_12 [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)63))));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        var_11 = ((/* implicit */signed char) ((short) ((unsigned int) (short)5)));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 + 2]))))) ? ((+(((/* implicit */int) (short)1948)))) : ((~(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 + 1]))))));
                        arr_15 [i_4] &= ((/* implicit */unsigned int) arr_8 [i_4]);
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
                        var_13 = ((/* implicit */unsigned int) (short)-25749);
                        arr_20 [i_2] = ((/* implicit */unsigned int) max((((((((/* implicit */int) (short)-1)) > (((/* implicit */int) arr_18 [i_5] [i_3] [i_2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 3] [i_1 - 1]))) : (arr_11 [i_5] [i_2] [i_5] [i_5]))), (((/* implicit */long long int) var_8))));
                        var_14 = ((/* implicit */long long int) min((var_14), (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 + 1]))))) ? (((((/* implicit */_Bool) (short)25743)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))) : (arr_11 [i_1] [i_5] [i_3] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (short)32537))))) ^ ((-(arr_11 [i_1 - 1] [i_5] [i_1 + 4] [i_5])))))));
                    }
                    for (short i_6 = 4; i_6 < 19; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((arr_17 [i_1] [i_3] [i_2] [i_2] [i_2] [i_1]), (((short) ((((/* implicit */_Bool) arr_5 [i_1 + 4])) ? (((/* implicit */int) (unsigned short)44617)) : (((/* implicit */int) (short)18380)))))));
                        arr_24 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) var_0);
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (unsigned short)35467))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (1649804678U)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 18; i_9 += 1) 
                        {
                            {
                                arr_31 [i_2] [i_2] [i_2] [i_9] [i_9] [i_2] [i_2] = ((/* implicit */short) ((((long long int) arr_9 [i_9] [i_2] [i_1])) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9 - 2] [i_9 - 1] [i_9] [i_9 + 3] [i_9 - 2] [i_9 - 3])))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned short) ((short) arr_13 [i_9 - 2] [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767))))) : (((/* implicit */int) var_6)))));
        arr_32 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) 4192256U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1 + 4] [i_1 + 4] [i_1] [i_1]))) : (537794984U))) : (((8U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1])))))));
    }
    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        arr_37 [i_10] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_16 [i_10] [i_10] [i_10])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)16607)) : (((/* implicit */int) (unsigned short)32398)))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_21 [i_10] [i_10]))))))));
        var_21 = (short)448;
        /* LoopSeq 1 */
        for (signed char i_11 = 2; i_11 < 18; i_11 += 1) 
        {
            var_22 = ((/* implicit */signed char) 1649804659U);
            var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_11 - 1])) ? (((/* implicit */int) arr_7 [i_10])) : (((/* implicit */int) (short)8906))))));
            var_24 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_39 [i_11])) ^ (((/* implicit */int) arr_13 [i_11 + 1] [i_10] [i_11 - 1] [i_10] [i_10])))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_39 [i_10]))))))) ? (arr_26 [i_10] [i_10] [i_11 - 2] [i_11 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524)))))))));
            var_25 = ((/* implicit */unsigned short) arr_8 [i_10]);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_40 [i_10]))))) : ((+(((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (short)8192))))))))))));
        }
        var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_10])) ? (1859859606U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10])))))), (max((arr_22 [i_10]), (((/* implicit */long long int) (unsigned short)16045))))));
    }
    var_28 = ((/* implicit */long long int) var_4);
}
