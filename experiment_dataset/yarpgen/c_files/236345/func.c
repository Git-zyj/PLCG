/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236345
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
    var_13 += ((/* implicit */int) var_8);
    var_14 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_0 [i_0] [i_0]))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (((((~(((/* implicit */int) var_0)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [5ULL] [i_1])) != (((/* implicit */int) arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_14 [i_3] [i_2] = ((/* implicit */int) arr_9 [i_2] [i_2]);
                var_16 = ((/* implicit */short) (-(((var_1) >> (((((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 - 1])) + (53)))))));
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) ? (((unsigned long long int) 4029669033U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244)))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((signed char) ((unsigned short) arr_15 [i_2] [i_3] [i_2] [i_2 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
