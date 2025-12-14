/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220708
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */long long int) arr_2 [i_1])) * (((((/* implicit */long long int) -2147483647)) / (4699416770093281555LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)146)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [11ULL]);
                                arr_13 [4LL] [(short)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) -2147483647)) ^ ((~(arr_7 [i_2 - 3] [i_1] [10U] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -2824161515844787557LL))));
}
