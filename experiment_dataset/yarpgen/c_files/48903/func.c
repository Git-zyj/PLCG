/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48903
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_12 = ((/* implicit */int) max((var_12), (arr_8 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) min((((unsigned long long int) 6165553436578307669ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_12 [i_4] [i_1] [i_2] [i_1]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_11)))) : ((+(var_10))))))));
                                var_14 = var_4;
                                var_15 ^= ((/* implicit */short) ((int) (!(((/* implicit */_Bool) arr_13 [i_3 - 2] [i_2 + 1] [i_1 + 2] [i_0 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(_Bool)0] [4] [i_0 - 2] [i_2 - 2] [i_2 - 2]))))), (arr_4 [i_0] [i_1] [i_1])));
                                var_17 = ((/* implicit */unsigned int) arr_5 [i_0 + 2] [i_5]);
                                var_18 = ((/* implicit */signed char) min((var_9), (arr_4 [i_0] [i_2] [i_5])));
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                                var_20 = min((((/* implicit */unsigned long long int) min((arr_2 [i_2 + 1]), (((/* implicit */short) (!(((/* implicit */_Bool) var_11)))))))), (min((arr_17 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_0 - 2]), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_5] [i_6])) ? (arr_20 [i_0] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_10)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [7] [6ULL]);
                    var_22 = ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
                }
                var_23 = ((/* implicit */int) arr_13 [9LL] [9LL] [i_1] [i_1 + 2]);
                var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [6ULL] [i_1])))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) != (((/* implicit */int) var_7))))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_4 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1])) : (((/* implicit */int) min((var_2), (((/* implicit */short) arr_16 [i_0] [0U] [0U] [i_1 + 1]))))))) : (((/* implicit */int) ((arr_9 [i_0] [i_1 + 2] [i_0 + 1]) > (((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_1 + 1])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 23; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) (short)10943)) : (473003856)))) ? (((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_24 [i_7] [4ULL]))))) : (((unsigned long long int) arr_29 [i_7] [i_8])))) : (((/* implicit */unsigned long long int) ((((arr_29 [i_7 - 1] [i_9 + 1]) + (2147483647))) << (((((arr_29 [i_7 - 2] [i_9 + 1]) + (250999085))) - (17))))))));
                    var_28 = ((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_22 [i_8])), (((long long int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_7 + 1] [i_7 + 1] [i_8] [i_8])) ? (((/* implicit */int) arr_30 [i_7 + 1] [i_7 + 1] [i_8] [i_8])) : (((/* implicit */int) arr_30 [i_7 - 2] [i_7 + 1] [i_8] [i_7 - 2]))));
                }
                var_31 = var_9;
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((signed char) var_8)))));
                var_33 = ((/* implicit */long long int) arr_26 [i_8]);
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) var_7))));
            }
        } 
    } 
}
