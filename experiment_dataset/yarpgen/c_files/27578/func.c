/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27578
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
    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned short)32628)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [2ULL])) : (((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((long long int) var_8))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) max((var_1), (3335449606U)))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                arr_8 [i_0 + 1] [i_1 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3335449606U))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    arr_13 [(_Bool)1] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1] [i_1] [10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1]))))) : (((/* implicit */int) arr_2 [i_0]))))));
                    arr_14 [i_2 + 1] [(unsigned short)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_1 - 2] [i_2])) ? (((((/* implicit */_Bool) arr_4 [(short)3] [(short)3] [(short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) >= (arr_12 [i_0])))), (max((((/* implicit */unsigned long long int) arr_9 [i_2] [(short)15] [i_1] [(short)15])), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((int) min((arr_1 [i_1] [i_2 + 1]), (arr_1 [i_1 + 1] [i_0 + 1]))));
                                arr_21 [i_3] = ((/* implicit */unsigned char) arr_17 [i_3]);
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_2] = ((/* implicit */unsigned short) var_9);
                }
                for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_31 [i_7 - 1] [12ULL] [i_7] [i_1] [i_0 + 1] = ((/* implicit */long long int) arr_18 [i_0] [i_5] [i_7 + 1]);
                                arr_32 [i_0] [i_1] [i_7] [i_6] [i_7] = ((/* implicit */int) ((unsigned int) 7853360970982878801LL));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_3))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (((((-(var_7))) >= (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_0] [i_0]), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56626))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_1]))) : (arr_10 [i_0] [i_1] [i_0] [i_5])))))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
                    {
                        {
                            arr_39 [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_1 - 1])) ? (7758727426812730516ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2])))))));
                            var_15 = ((/* implicit */unsigned long long int) ((signed char) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_0 + 1] [i_0 + 1] [i_1 + 1]))))));
                            var_16 = ((/* implicit */unsigned int) arr_0 [i_8]);
                            arr_40 [i_0 + 1] [(signed char)3] [i_8] [(signed char)3] = (~(max((min((var_1), (((/* implicit */unsigned int) arr_3 [i_8])))), (((/* implicit */unsigned int) max(((unsigned short)32628), (((/* implicit */unsigned short) var_10))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (short)-10184))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((var_4) == (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (var_2) : (var_2))))));
    /* LoopNest 3 */
    for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 4; i_12 < 16; i_12 += 2) 
            {
                {
                    var_19 = 7758727426812730538ULL;
                    var_20 = ((/* implicit */signed char) min((var_20), (arr_24 [i_10])));
                }
            } 
        } 
    } 
}
