/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41332
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 3])) || (((/* implicit */_Bool) arr_3 [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_7 [i_1 - 1] [i_1 - 1] = (((!(((/* implicit */_Bool) (unsigned short)46956)))) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_5 [i_1]))))));
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 2])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) arr_9 [i_2])), ((+(arr_8 [i_2]))))));
        var_16 = ((/* implicit */unsigned long long int) 416688291U);
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((((/* implicit */_Bool) 16256U)) ? (((/* implicit */int) (short)-12426)) : (arr_12 [i_3]))) : (((1856013635) - (((/* implicit */int) (signed char)-110))))))) == (((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                arr_18 [i_3] [i_3] [i_4 + 2] [i_5] = ((/* implicit */short) 6132904800709106631LL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    arr_22 [i_3] = ((/* implicit */signed char) 18446744073709551615ULL);
                    /* LoopSeq 2 */
                    for (int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */short) ((unsigned char) arr_21 [i_4] [i_4 - 1] [i_6 + 2] [i_7 - 1]));
                        arr_25 [i_3] [i_4] [i_5] [i_6 + 1] [i_3] |= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)12390))));
                        arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_9 [i_4 + 2]);
                        arr_27 [i_3] [i_4] [i_3] [i_6] [i_7] = ((/* implicit */unsigned char) arr_9 [i_5]);
                        arr_28 [i_3] [i_4] [i_4] [i_6] [i_7] [i_7 + 2] [i_5] = ((/* implicit */unsigned long long int) (+(var_11)));
                    }
                    for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_20 [i_3] [i_4 - 2] [i_5] [i_4 - 2] [i_8])) : (1890384065)))) ? (((unsigned int) (unsigned char)68)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)4)))))));
                        arr_31 [i_3] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                        var_20 = ((/* implicit */unsigned short) arr_16 [i_6 + 1] [i_4 + 1] [i_4 - 2] [i_8]);
                        arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_14 [i_8]);
                    }
                    var_21 -= ((/* implicit */_Bool) arr_23 [i_3] [i_5] [i_5] [i_6] [i_4]);
                }
            }
        }
        arr_33 [i_3] = ((/* implicit */short) 262142);
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) 2632482395208676029LL))));
    var_23 = ((/* implicit */long long int) min((var_23), (min((max((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) (short)-8066)), (var_2))))), (((/* implicit */long long int) var_5))))));
}
