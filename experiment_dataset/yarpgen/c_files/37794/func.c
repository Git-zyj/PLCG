/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37794
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
    var_13 = ((/* implicit */int) (unsigned char)56);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(signed char)15] [i_1] = ((/* implicit */int) max((min((min((((/* implicit */unsigned long long int) (signed char)34)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                arr_5 [i_0] [i_0] [12U] = ((/* implicit */unsigned char) (short)-6263);
                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((4179378488564903379ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_1] [(short)3]), (var_6)))))))) * (min((((/* implicit */int) min((var_5), (var_6)))), (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] [11ULL] [11ULL] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((var_6) ? (4179378488564903379ULL) : (arr_3 [(short)9]))))) * (((/* implicit */int) var_10))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_2] [(short)12])), (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_10 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) : (min((14267365585144648237ULL), (((/* implicit */unsigned long long int) 1850480197U)))))))));
                                var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) (+(2U))))), (((((/* implicit */_Bool) min((arr_10 [i_2]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [(signed char)15] [5ULL] [i_2] [0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (4799889922830384453ULL)))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */int) (signed char)102)) >> (((((/* implicit */int) var_10)) - (154)))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [(unsigned char)14] [i_2] = ((/* implicit */unsigned short) ((var_9) * (((/* implicit */unsigned long long int) ((unsigned int) var_10)))));
                }
            }
        } 
    } 
}
