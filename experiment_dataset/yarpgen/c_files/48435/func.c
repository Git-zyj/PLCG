/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48435
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
    var_19 = ((/* implicit */short) min((max(((~(134217727LL))), (((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_0)))))), (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_18))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_6 [i_2] [i_2] [i_2])), (var_18))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13530)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 3]))) : (var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [9LL] [1U]))) : (var_16)))) ? (arr_7 [i_0] [i_1 - 1] [i_0]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) - (arr_0 [4LL]))))) : (max((((/* implicit */unsigned long long int) var_10)), (arr_7 [i_1 - 1] [i_1 + 2] [i_1 + 3]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_0] [(_Bool)0] [i_4] [i_0] = ((/* implicit */unsigned short) ((short) max((max((((/* implicit */unsigned long long int) arr_12 [i_4] [i_1])), (var_5))), (((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */long long int) arr_10 [i_1 + 3] [7U] [i_3] [i_4 - 1]))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 + 1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2]))))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_4))))))))));
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 3] [i_4 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_6] [2LL] = ((/* implicit */unsigned int) arr_18 [i_0] [i_6] [i_1] [i_1 + 2] [i_2] [i_5] [i_1]);
                                var_23 = ((/* implicit */unsigned long long int) arr_2 [i_6] [i_2]);
                                var_24 += max((((arr_0 [i_1 - 1]) - (arr_0 [i_1 + 1]))), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            {
                arr_27 [i_8] = ((/* implicit */unsigned int) arr_10 [i_7] [i_7] [i_7] [i_7]);
                var_25 = ((/* implicit */_Bool) arr_3 [i_7] [i_8]);
                arr_28 [i_8] [i_8] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) min((arr_13 [i_7] [i_7] [i_7] [i_8] [i_7]), (arr_13 [7ULL] [i_8] [7ULL] [i_8] [i_7]))))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_8 [i_10] [i_8] [i_8])))))) ? (((/* implicit */int) ((unsigned short) arr_12 [i_8] [i_8]))) : (((/* implicit */int) (short)-14178))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_22 [5ULL] [5ULL])), (arr_12 [i_9] [i_10]))), ((+(arr_12 [i_10] [i_8]))))))));
                            var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65428))) ? (((/* implicit */int) ((_Bool) arr_30 [i_10]))) : (((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))), (min((((/* implicit */unsigned long long int) ((19U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), ((-(var_3)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 4) 
                        {
                            {
                                var_29 ^= ((/* implicit */long long int) (+(((arr_19 [i_8] [i_12] [i_13 - 2] [5ULL] [i_13 + 1]) - (arr_19 [i_13] [(_Bool)0] [i_13 - 1] [i_13 + 1] [i_13 - 1])))));
                                arr_41 [i_7] [i_8] [i_13] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((arr_21 [i_13 + 1]) > (arr_21 [i_13 - 1]))) ? (((((/* implicit */_Bool) arr_21 [i_13 + 1])) ? (arr_21 [i_13 + 1]) : (arr_21 [i_13 - 2]))) : (((/* implicit */unsigned long long int) (~(19U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 4; i_14 < 8; i_14 += 4) 
    {
        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_16 = 2; i_16 < 8; i_16 += 2) 
                {
                    for (unsigned int i_17 = 4; i_17 < 8; i_17 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [3U] [i_16 + 1] [i_14 - 2] [i_15] [i_14 - 2])) / (var_0)))) ? ((-(((/* implicit */int) arr_13 [2U] [i_17 - 3] [i_16 - 1] [i_15] [i_14 + 2])))) : (((/* implicit */int) arr_13 [i_14 - 2] [i_14] [i_14 + 1] [i_14] [i_14 - 3]))));
                            var_31 = ((/* implicit */unsigned int) max((((arr_5 [(_Bool)1] [i_15] [i_16 + 2]) & (arr_5 [i_14 - 4] [i_15] [i_16 + 1]))), (((((/* implicit */_Bool) arr_5 [i_14 - 3] [i_16 - 2] [i_17 + 2])) ? (arr_5 [i_14] [i_14] [i_14 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_14] [i_14 + 2]), (arr_23 [i_14 - 3] [i_14 - 3]))))) : (((arr_35 [i_14 + 1]) / (arr_35 [i_14 + 2]))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) var_14))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) ((((arr_18 [(_Bool)0] [i_15] [i_14 - 2] [i_14] [i_15] [i_15] [0U]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) arr_48 [i_14 - 1] [i_14 - 1] [i_15]))));
                arr_61 [i_14 - 3] [3U] [i_15] = ((/* implicit */unsigned short) ((unsigned long long int) (+(arr_9 [i_14] [i_14]))));
            }
        } 
    } 
}
