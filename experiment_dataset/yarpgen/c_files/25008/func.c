/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25008
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_17))));
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_0] [i_0])))) : (arr_1 [i_0] [i_0])));
            var_23 = ((/* implicit */int) ((short) ((unsigned int) var_3)));
            var_24 = ((((/* implicit */unsigned long long int) arr_1 [i_0 + 3] [i_1])) + (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22277))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_25 = ((/* implicit */int) (signed char)38);
                    arr_8 [i_0 + 4] [i_1] [(signed char)8] [i_1] [i_1] [i_3] |= ((/* implicit */unsigned short) 14406435392573372376ULL);
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_26 = ((arr_0 [i_2 + 1]) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 + 1])));
                    arr_12 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)254)) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) (signed char)-40))))));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (arr_13 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6)))));
                    arr_15 [i_0] [i_1] [8LL] [i_2] [i_1] = ((/* implicit */unsigned short) arr_0 [i_5]);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2] [i_2 - 3])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2] [i_2 - 1]))));
                        arr_19 [i_0] [i_5] [i_6] = (~(((/* implicit */int) (_Bool)1)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_0] [i_0] [(signed char)9] [i_5] [(unsigned char)6] [i_7] [i_7] = ((/* implicit */unsigned char) (~((~(var_18)))));
                        var_28 = ((/* implicit */unsigned long long int) var_13);
                    }
                }
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((unsigned short) 554495883)))));
                arr_24 [i_0] = ((/* implicit */unsigned int) (-(((arr_4 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27887)))))));
            }
        }
        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [(short)6] [i_0]))));
            var_31 = ((/* implicit */int) arr_21 [i_0 + 3] [(short)4] [(unsigned char)6] [(short)0] [0LL] [i_0 + 3]);
            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((signed char) var_7)))));
            var_32 = ((/* implicit */short) (~(1719804014U)));
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
        {
            arr_31 [i_0] [i_9] = ((/* implicit */unsigned long long int) var_15);
            arr_32 [10LL] &= ((/* implicit */unsigned short) var_6);
        }
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_13 [i_0]))) || (((/* implicit */_Bool) arr_20 [i_0]))))))))));
        var_34 -= arr_13 [i_0];
    }
    for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 3) 
    {
        arr_36 [i_10] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-27880))))) & ((-(((/* implicit */int) arr_14 [i_10]))))))));
        var_35 = ((/* implicit */unsigned int) ((unsigned short) (+(var_14))));
        var_36 &= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (arr_22 [i_10] [11] [i_10]))), (((/* implicit */unsigned long long int) arr_9 [i_10] [i_10] [(unsigned char)6] [i_10]))));
    }
}
