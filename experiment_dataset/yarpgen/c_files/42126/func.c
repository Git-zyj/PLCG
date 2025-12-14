/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42126
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */long long int) -669485978);
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_9))));
                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_11) : (((/* implicit */int) arr_1 [i_0] [i_1])))) / (((/* implicit */int) max(((unsigned short)17024), (arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] [(unsigned char)17] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_19 [i_3] [i_3] [i_3] [(signed char)18] [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_15 [i_2 + 1] [i_2] [i_3] [i_2] [i_2] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -1)))) != (var_6)))))));
                                var_16 ^= ((/* implicit */int) min((arr_18 [i_2] [i_3] [i_4] [i_6]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) > (((long long int) 28)))))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (549755813887LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                arr_25 [i_8] [i_3] [i_3] [i_3] [i_2 + 2] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_3]))) % (arr_11 [i_3] [i_3] [(signed char)8]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) > (((/* implicit */int) ((signed char) var_11)))));
                                var_18 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [i_7 - 1] [i_4] [i_3]))) >= (var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = var_5;
    var_20 = ((/* implicit */_Bool) var_0);
}
