/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25380
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */short) ((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]) / (((((/* implicit */_Bool) (unsigned short)63343)) ? (328378031) : (328378031)))));
                arr_7 [i_1] [i_0 + 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((arr_2 [i_0 + 2] [i_1] [i_1]), (arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])))), (((((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) % (506761585450265345LL)))));
                arr_8 [i_0 + 2] [i_1] [i_0 + 2] = max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) ((unsigned int) var_1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_18 [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((427905528863904712LL) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    arr_19 [i_4] [i_3 - 3] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) (+(328378031)))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) / (max((((/* implicit */long long int) -328378031)), (-506761585450265334LL)))))));
                    arr_20 [i_3 - 3] [i_4] = ((/* implicit */short) arr_16 [i_3 + 1]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_4);
}
