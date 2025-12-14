/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191600
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_9))))) : (((9223372036854775795LL) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_9))))) + (((/* implicit */int) arr_3 [i_0]))))) : (min((min((12553198727743281957ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((arr_0 [i_2]), (arr_5 [i_2]))))))));
                    var_11 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((short) var_3))) ^ (((/* implicit */int) arr_4 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((int) arr_1 [i_1] [(unsigned char)15]));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = min((min((((arr_1 [i_1] [i_4]) + (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0]) ? (((/* implicit */int) ((var_8) < (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((_Bool) 9223372036854775792LL))), (arr_10 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) var_9))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [16ULL])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_0] [i_0] [i_2]))) : (max((11479266776778109847ULL), (var_6)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) var_0);
                }
            } 
        } 
    } 
    var_16 = var_3;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_19 [i_7]))));
        var_18 = ((/* implicit */signed char) ((short) var_6));
        arr_22 [i_7] [i_7] = ((((((/* implicit */_Bool) -9223372036854775784LL)) ? (((/* implicit */unsigned long long int) 33554431U)) : (var_6))) | (((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */long long int) var_1))))));
    }
    var_19 = ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned long long int) var_0))));
}
