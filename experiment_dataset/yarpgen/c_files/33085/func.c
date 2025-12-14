/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33085
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [12] [12] &= ((/* implicit */_Bool) arr_5 [i_0]);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_1])), (((-285546448) / (((/* implicit */int) (unsigned char)11))))))), (var_1)));
                var_10 = var_0;
            }
        } 
    } 
    var_11 += ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                arr_14 [i_3] = ((/* implicit */long long int) arr_9 [i_3]);
                arr_15 [i_2] [i_2] [i_3] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_9 [i_2])), (min((((/* implicit */unsigned long long int) 285546454)), (9217637438033026382ULL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(var_6)))) + ((-((-(var_7)))))));
    var_13 = ((/* implicit */unsigned short) ((_Bool) var_5));
}
