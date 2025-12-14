/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49105
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
    var_13 = ((/* implicit */unsigned long long int) var_5);
    var_14 = ((/* implicit */signed char) ((short) var_4));
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_1]))) ? (min((((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (unsigned char)44)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (8414542379384340773ULL)))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((short) ((short) ((short) var_6))));
                var_17 = ((/* implicit */_Bool) ((var_12) + (((((11663517514478004521ULL) >> (((((/* implicit */int) (short)15943)) - (15930))))) << (((arr_1 [i_1 - 2]) - (4174388019U)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */int) (short)3030);
                            arr_11 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) max(((~(8414542379384340773ULL))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_2]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 1] [i_3] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max(((~(max((var_12), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [(signed char)2] [i_2] [i_0]))) ? (58720256U) : (((/* implicit */unsigned int) ((arr_9 [i_0] [i_1] [(short)0]) ? (var_0) : (((/* implicit */int) var_11)))))))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned short)2] [i_0] |= ((/* implicit */int) ((((long long int) arr_7 [i_1 - 1] [i_1 - 2])) != (((/* implicit */long long int) ((int) arr_7 [i_1 - 1] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
