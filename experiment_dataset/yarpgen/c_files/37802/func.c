/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37802
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
    var_12 = ((/* implicit */short) ((unsigned long long int) (~((~(var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [(_Bool)1] [i_1 + 4] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (+(((unsigned int) ((arr_9 [i_1] [i_2] [i_1]) / (((/* implicit */int) var_6)))))));
                            var_13 = min((((((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */int) arr_0 [i_0]))))) / (((unsigned long long int) arr_2 [i_0] [i_2] [i_3])))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) arr_0 [i_0]))))))));
                            arr_12 [(_Bool)1] [i_1] [i_1 + 3] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1] [i_2] [i_3 + 1]))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)231))))))) : (min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_1] [i_2])))));
                            arr_13 [i_0] [8ULL] [i_2] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (signed char)97))));
                            arr_14 [i_2] [i_1] [i_2] = ((/* implicit */short) (~(((((15264068340004706999ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3])) * (((/* implicit */int) arr_5 [i_1 + 1] [i_3 + 2])))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) min((max((((arr_9 [i_0] [i_0] [i_1]) ^ (-2146497836))), ((~(((/* implicit */int) var_7)))))), (max((((/* implicit */int) arr_5 [i_0] [i_0])), (max((arr_4 [i_0] [i_1]), (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 3) 
    {
        for (long long int i_5 = 3; i_5 < 22; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((unsigned long long int) arr_18 [i_4]));
                arr_19 [i_4] [i_4] = ((/* implicit */long long int) max(((+(arr_16 [i_4 + 1]))), (((((/* implicit */_Bool) var_10)) ? (arr_16 [i_4 - 1]) : (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_4 - 2]))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (11223875293925035037ULL)));
                var_17 = ((/* implicit */unsigned char) arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((int) (~(min((var_8), (((/* implicit */unsigned long long int) var_9)))))));
}
