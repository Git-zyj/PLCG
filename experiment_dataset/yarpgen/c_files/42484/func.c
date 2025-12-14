/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42484
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) (+(((min((8312915962165155591LL), (((/* implicit */long long int) arr_0 [i_0])))) & (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_0)))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 1])) << (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((min((var_11), ((_Bool)1))) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)-27462)) + (2147483647))) << (((((/* implicit */int) var_8)) - (53404)))))))))));
                        var_18 = (i_0 % 2 == 0) ? (((/* implicit */short) (((((_Bool)1) ? (260619378) : (((/* implicit */int) (unsigned char)29)))) >> (((min((arr_9 [i_1 - 3] [i_1 - 3] [i_0] [i_1 + 1]), (((/* implicit */int) var_0)))) + (248031376)))))) : (((/* implicit */short) (((((_Bool)1) ? (260619378) : (((/* implicit */int) (unsigned char)29)))) >> (((((min((arr_9 [i_1 - 3] [i_1 - 3] [i_0] [i_1 + 1]), (((/* implicit */int) var_0)))) + (248031376))) + (961490130))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (min((arr_4 [10LL] [i_1 - 1]), (((/* implicit */long long int) (_Bool)1))))))) ? (arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2]) : ((~((+(((/* implicit */int) arr_0 [i_3]))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_1))));
                        var_21 = ((/* implicit */int) var_3);
                        var_22 = ((((/* implicit */int) var_11)) - (((/* implicit */int) var_11)));
                    }
                    var_23 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) min(((_Bool)1), ((_Bool)1)))))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned short) (((((!(arr_1 [i_0]))) ? (((unsigned int) arr_12 [i_0] [(short)4] [(short)4] [i_0 - 2])) : (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) != (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_8))) + (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1])) < (((/* implicit */int) (_Bool)1))))))))));
    }
    for (long long int i_5 = 3; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)12]))))) != (129757736)));
        var_26 = ((/* implicit */long long int) (-(((arr_8 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 3]) + (((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (arr_0 [(unsigned char)12]))))))));
        var_27 = ((/* implicit */unsigned long long int) arr_9 [i_5 - 3] [6U] [6U] [i_5]);
        arr_15 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_3 [i_5 - 1]))) | (((/* implicit */int) max((((short) arr_6 [i_5])), (min((var_6), (var_5))))))));
    }
    /* vectorizable */
    for (long long int i_6 = 3; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */int) var_8);
        arr_19 [i_6] [i_6] = ((/* implicit */signed char) ((((arr_4 [i_6 - 1] [i_6 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_0 [(signed char)14]))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((int) arr_2 [i_6]))));
    }
    var_30 = ((/* implicit */long long int) var_16);
}
