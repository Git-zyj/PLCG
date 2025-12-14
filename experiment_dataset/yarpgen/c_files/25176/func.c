/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25176
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) var_10);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((+(var_9))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0]))))), (max((var_9), (((/* implicit */unsigned int) var_5))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_9 [i_2] [i_3] [i_2]);
                    var_12 = ((/* implicit */signed char) arr_9 [i_2 - 2] [i_3] [i_4]);
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((845248249U), (2298065882U)))) ? ((-(var_3))) : (((/* implicit */int) ((arr_10 [i_3 + 2]) <= (arr_10 [i_3 - 1]))))));
                }
            } 
        } 
    } 
}
