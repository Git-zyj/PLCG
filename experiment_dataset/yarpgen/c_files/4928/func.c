/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4928
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)14))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (arr_0 [i_0]))))) | ((-(arr_0 [i_1])))))));
                var_17 -= ((/* implicit */signed char) (((+(min((16405391205019853561ULL), (((/* implicit */unsigned long long int) (signed char)24)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) var_15))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_19 [i_3] [i_2] [i_4] [i_3 - 1] [i_2] [11] = ((/* implicit */signed char) min((max((arr_11 [i_2] [i_3]), (arr_11 [i_2] [i_3]))), ((short)(-32767 - 1))));
                            var_18 = ((/* implicit */_Bool) ((unsigned int) min((arr_12 [i_2] [9] [i_3 + 1] [i_2]), (arr_12 [i_2] [(unsigned short)16] [i_3 + 1] [i_5]))));
                            arr_20 [i_3] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (arr_10 [(signed char)11] [14] [i_2])))));
                            var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_9 [i_3 + 1] [i_3] [i_3 + 1])), (max((((/* implicit */long long int) max((1671403588), (((/* implicit */int) arr_11 [i_3 - 1] [i_3]))))), (((long long int) arr_7 [i_4]))))));
                            var_20 = ((/* implicit */signed char) arr_9 [i_2] [i_3] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned short i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        {
                            arr_25 [i_2] [i_3] [i_6 - 2] [i_2] [i_3] [(short)8] = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) arr_7 [i_2]))));
                            var_21 = ((/* implicit */int) max((arr_12 [i_6 + 2] [i_6 - 1] [i_6 - 2] [i_3 + 1]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-7)), (-1673479624))))));
                        }
                    } 
                } 
                arr_26 [i_3] = ((/* implicit */unsigned long long int) ((int) 0U));
            }
        } 
    } 
}
