/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206843
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
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) / (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)244))))), (((unsigned long long int) -1342346503))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) var_0);
                    var_15 ^= ((/* implicit */signed char) 2147483647);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((arr_3 [i_2] [i_1] [i_0]) + (arr_3 [i_0] [(unsigned short)8] [(unsigned short)8])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [i_3] [i_3] = ((/* implicit */short) ((int) var_11));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
}
