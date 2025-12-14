/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213608
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
    var_16 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_11)))))));
    var_17 |= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (8U)))) != (((var_14) - (((/* implicit */unsigned long long int) 4294967289U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */int) arr_1 [i_1]))))) : ((+(var_12)))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) 1253162497U);
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_18 = (+(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_2]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_19 [(short)10] [i_4 + 1] [i_0] [i_2] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_10 [i_4 - 1]);
                            arr_20 [i_5] [i_3] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) (unsigned short)36219)) : (((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) var_13))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)7)))))))));
                            arr_21 [i_0] [i_3] [i_0] [i_0] [i_0] = (-(((/* implicit */int) ((((/* implicit */int) (signed char)-8)) < (((/* implicit */int) (short)-28313))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_5] [i_5])) ? (4294967291U) : (arr_16 [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_5] [5LL] [i_5]))))));
                        }
                        arr_22 [i_0] [i_3] [i_3] [i_4] = arr_11 [i_0] [i_0];
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                {
                    arr_31 [i_6 + 3] [i_6 + 3] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                    arr_32 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(var_0)))))) ? (min((((/* implicit */unsigned int) ((short) arr_30 [i_6 + 1] [i_7] [(short)7]))), (((((/* implicit */_Bool) var_11)) ? (arr_24 [i_6] [i_6]) : (((/* implicit */unsigned int) arr_26 [i_8])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)11)) == (var_0))))))));
                }
            } 
        } 
        arr_33 [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_23 [i_6 + 4])) : (((/* implicit */int) arr_23 [i_6 - 1]))))));
        arr_34 [i_6] [i_6 + 3] = ((/* implicit */signed char) ((long long int) (+(((var_0) & (arr_26 [i_6]))))));
        arr_35 [i_6] = (i_6 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((long long int) (unsigned short)51971)), (((/* implicit */long long int) ((var_5) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))))))) ? (((/* implicit */long long int) ((((23U) << (((((/* implicit */int) arr_25 [i_6])) - (30226))))) * (((/* implicit */unsigned int) var_0))))) : (min((((/* implicit */long long int) var_15)), (arr_27 [i_6] [i_6])))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((long long int) (unsigned short)51971)), (((/* implicit */long long int) ((var_5) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))))))) ? (((/* implicit */long long int) ((((23U) << (((((((/* implicit */int) arr_25 [i_6])) - (30226))) - (19165))))) * (((/* implicit */unsigned int) var_0))))) : (min((((/* implicit */long long int) var_15)), (arr_27 [i_6] [i_6]))))));
    }
    for (short i_9 = 3; i_9 < 7; i_9 += 1) 
    {
        arr_38 [i_9 - 2] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_36 [i_9 + 2] [i_9 + 3]))) ? (((/* implicit */unsigned long long int) 17U)) : (((arr_29 [i_9 + 3] [i_9 + 3] [i_9]) ? ((~(var_7))) : (((((/* implicit */_Bool) 8U)) ? (var_11) : (((/* implicit */unsigned long long int) -65536))))))));
        arr_39 [i_9] [i_9] |= ((/* implicit */signed char) (-(max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))), (((arr_29 [i_9] [i_9] [i_9 - 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [2U]))) : (var_7)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 4) 
        {
            var_21 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)104))))), (4294967278U)))));
            arr_43 [i_10] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (signed char)-10)))));
        }
        arr_44 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_18 [(short)6])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((4294967289U) == (33554431U)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3))) == (arr_16 [i_9] [i_9] [i_9] [i_9] [8] [i_9 + 3] [i_9]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9 + 1] [i_9]))) : ((+(9223372036854775803LL)))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) 4194304U)), (-9223372036854775804LL)));
    }
}
