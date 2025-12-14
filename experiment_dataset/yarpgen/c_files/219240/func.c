/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219240
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
    var_13 = ((/* implicit */long long int) 34359737344ULL);
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 -= ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_2] [0ULL] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_4 - 3]))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_1])))))));
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_3 [i_2 + 1])), (((((/* implicit */long long int) arr_1 [i_2])) / (var_1))))) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [8ULL] [i_2] [i_3] [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_3), (((/* implicit */short) var_5))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned char)0), ((unsigned char)3)))), ((-(8428757432355797471LL))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [(signed char)6] = ((/* implicit */signed char) ((short) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] [i_2]))))));
                            }
                        } 
                    } 
                    var_17 = min((((/* implicit */long long int) ((arr_14 [i_2 + 1] [i_2] [i_2] [6]) < (arr_14 [i_2 + 2] [i_1] [i_2] [i_2 - 3])))), (((arr_14 [i_2 + 2] [i_0] [i_2] [i_2]) % (arr_14 [i_2 - 2] [i_1] [i_2] [10U]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max(((((!(((/* implicit */_Bool) (unsigned char)2)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_9)))) : (max((var_2), (var_10))))), (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */long long int) var_2)) / (5793022707868155243LL))))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
