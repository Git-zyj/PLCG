/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242536
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
    var_17 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 7; i_4 += 3) 
                    {
                        {
                            var_18 -= ((max((arr_8 [i_0] [(_Bool)1] [i_4 + 4]), (arr_8 [i_0] [i_0] [i_4 - 2]))) * (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1 + 2] [i_2] [i_3 + 1] [i_4 - 1] [i_4 + 4])))), (((arr_4 [i_3] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                            var_19 = ((/* implicit */unsigned char) min((((unsigned int) 134213632)), (((/* implicit */unsigned int) arr_5 [i_0] [(unsigned short)2] [i_2]))));
                            arr_16 [i_4] [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */int) var_13);
                        }
                    } 
                } 
            } 
            var_20 ^= ((/* implicit */unsigned short) min(((~(arr_8 [i_1] [i_1] [i_1 - 1]))), (((arr_8 [i_1] [i_1] [i_1 - 1]) ^ (arr_8 [i_1] [i_1 + 2] [i_1 - 1])))));
        }
        for (short i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_5] = ((/* implicit */int) max((arr_17 [i_0] [i_5]), (((/* implicit */unsigned char) arr_18 [i_0] [i_0]))));
            var_21 ^= ((/* implicit */unsigned char) var_0);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 1) 
        {
            arr_24 [i_0] [i_6] [i_0] = ((/* implicit */int) arr_2 [i_6 - 1] [i_0]);
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 2) 
            {
                arr_27 [i_0] [i_6 - 2] [i_7 + 2] [i_6 - 2] = ((/* implicit */long long int) var_3);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_7 - 1] [i_7] [i_7 + 2])) ? (arr_4 [i_7 - 1] [i_7] [i_7 + 1]) : (arr_4 [i_7 + 2] [i_7 + 1] [i_7 - 1])));
            }
        }
        arr_28 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_23 [i_0] [i_0])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 0)), (var_4)))) ? (((/* implicit */int) arr_21 [i_0])) : (((/* implicit */int) var_7)))) : (max((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0])))), (((/* implicit */int) max((var_14), (arr_21 [i_0]))))))));
    }
    for (unsigned int i_8 = 1; i_8 < 6; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_8] [2LL])) : (var_9)))), (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        arr_32 [i_8] [(unsigned char)0] = ((/* implicit */unsigned int) max((((_Bool) var_9)), (((((/* implicit */_Bool) arr_23 [i_8] [i_8 + 3])) && (((/* implicit */_Bool) arr_23 [i_8] [i_8 + 2]))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        var_23 = ((/* implicit */short) min(((+(arr_34 [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_9]))))) * (((/* implicit */int) arr_35 [i_9])))))));
        arr_36 [i_9] = ((/* implicit */unsigned int) (+(((unsigned long long int) arr_33 [i_9]))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_1)))))) & (((/* implicit */int) arr_35 [i_9]))));
        arr_37 [i_9] = ((/* implicit */unsigned char) arr_34 [i_9]);
    }
}
