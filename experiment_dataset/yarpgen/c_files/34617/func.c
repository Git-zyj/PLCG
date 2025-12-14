/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34617
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
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_15 ^= ((unsigned short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (var_8)));
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((4118844690U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38625)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_5 [(signed char)10] [0ULL] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                var_17 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0] [(signed char)12]);
                arr_12 [i_1] = ((/* implicit */signed char) (~(((arr_2 [i_0]) / (arr_2 [i_0])))));
            }
        } 
    } 
}
