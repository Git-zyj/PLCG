/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202386
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
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 1596172439)) ? (-1885159025243369903LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30986)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) arr_0 [i_0] [i_1])))) : ((-((-(((/* implicit */int) arr_1 [i_0 - 1])))))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)193))))) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)11] [i_1] [i_1])) ? ((+(((/* implicit */int) arr_1 [4])))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_0 [2U] [2U])) : (((/* implicit */int) arr_0 [10] [i_1 + 2])))))) : (arr_3 [i_0] [(unsigned char)15] [i_0]))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-((~(1596172439))))))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) arr_9 [(short)13] [i_2] [i_1] [i_0]);
                                var_18 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [15] [i_4 - 3] [i_3] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [6U] [i_0] [i_3 + 1] [i_4] [i_1])) : (((/* implicit */int) arr_10 [i_4] [i_3] [i_3] [i_2] [i_1 - 1] [i_1] [i_0])))), ((-(((/* implicit */int) arr_1 [i_0]))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1]))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_1 - 1] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_11 [i_0] [13] [i_1] [i_1] [13] [i_0])), (arr_0 [i_0] [i_1]))), (arr_10 [i_0] [i_0] [(signed char)14] [i_1] [i_1 + 2] [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_0 - 1] [i_2])) ? ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [6U] [2ULL] [i_0])))) : ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 - 2]))))))));
                    var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1146283674U)) ? (1125899839733760ULL) : (((/* implicit */unsigned long long int) 1293677633U))))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_2])))) : ((+(((/* implicit */int) arr_1 [i_0]))))))));
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    arr_15 [i_5] [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) (~(arr_14 [i_5] [(signed char)14] [i_0 + 3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)30986))))) : (max((((/* implicit */unsigned int) arr_1 [i_5])), (arr_5 [i_0] [i_5]))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((arr_4 [(_Bool)1] [i_1 - 1]), ((~(arr_4 [i_1] [i_1 + 2]))))))));
                    arr_16 [i_0] [5ULL] [i_1] [5ULL] = ((/* implicit */long long int) arr_5 [i_0 + 2] [18]);
                }
                for (int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_7 [i_0] [i_1] [11] [i_1] [i_6]) : (((/* implicit */int) arr_10 [i_0 + 3] [i_0] [i_0] [7LL] [i_0 + 3] [i_6] [12LL])))))))))));
                    var_24 = ((/* implicit */long long int) (+((+(arr_17 [i_0] [i_1] [7ULL] [i_6])))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [(_Bool)1] [19ULL] [i_6])) ? (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_1 [i_0]))))))) : (arr_5 [20ULL] [i_1]))))));
                    var_26 = (+(((((/* implicit */_Bool) 3001289663U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3001289663U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-30987))))) : (2820823440U))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_6] [i_6] [i_6] [i_6]))))) ? (max((((/* implicit */int) arr_13 [i_1] [i_1] [i_6])), (arr_19 [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_1]))) : (max((arr_19 [i_0] [i_1 + 1] [0ULL] [12]), (arr_7 [i_0] [i_0] [i_6] [i_6] [i_1])))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [8U] [i_6] [4ULL] [i_1] [18ULL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1] [i_6] [i_6])) ? (arr_7 [i_6] [5U] [7ULL] [i_1 - 1] [i_0 - 3]) : (((/* implicit */int) arr_2 [i_0]))))) : (max((4801631747134558216LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) max(((~(arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_6] [i_0] [(_Bool)1]))))))))));
                }
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
