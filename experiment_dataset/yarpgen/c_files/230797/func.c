/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230797
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
    var_12 = 0ULL;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0 + 2])), ((((_Bool)0) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) var_10))))));
        var_13 = (unsigned char)45;
        arr_3 [(unsigned char)3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned char)8))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((signed char) (unsigned char)3));
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((arr_7 [i_1]), (arr_7 [i_1]))) / (((/* implicit */unsigned int) ((int) 8388607U))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_9 [i_1 - 1] [i_2] [i_4]))));
                        arr_17 [i_1] [(_Bool)1] [i_3] [i_4] = ((/* implicit */int) var_3);
                        arr_18 [i_1] [i_2] [i_3] [i_1] [i_3] = (!(((/* implicit */_Bool) var_10)));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */_Bool) (unsigned short)33912);
                                var_18 = ((/* implicit */_Bool) (unsigned char)51);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_5] [2ULL]))) : (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned short)13341))))))))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_2] [i_3] [i_6])), (var_8)))))) : (((((/* implicit */int) arr_11 [1] [i_2] [1])) - (((((/* implicit */int) var_10)) - (((/* implicit */int) var_3))))))));
                                var_20 = ((/* implicit */unsigned char) 25ULL);
                                var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_20 [i_1] [i_2] [i_5] [i_3] [i_1] [i_6]))))), (arr_23 [i_1 - 1] [i_2] [i_3] [i_5] [i_6])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3337666008U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_13 [i_1] [i_3] [i_3])))) ? (((/* implicit */unsigned int) arr_21 [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_3])) : (min((var_5), (((/* implicit */unsigned int) (unsigned char)8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1ULL)))) : (((((var_11) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((max((arr_19 [i_2] [i_3] [i_3] [i_2] [i_1] [i_2]), (((/* implicit */unsigned int) (signed char)-33)))) - (4294967240U)))))));
                    /* LoopSeq 1 */
                    for (short i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        var_23 ^= ((/* implicit */int) arr_12 [i_1 - 1]);
                        var_24 = ((/* implicit */unsigned char) (~((-((~(var_0)))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) var_10);
    }
}
