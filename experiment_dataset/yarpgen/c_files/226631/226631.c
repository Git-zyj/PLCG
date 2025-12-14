/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((~((((arr_2 [i_0] [i_0]) <= (min(262143, 618465473))))))))));
                arr_4 [i_0] [i_0] [i_0] = (min(186, 2047));
                arr_5 [i_0] = 16962822814553198494;
                var_21 = (max(var_21, ((((((-(min(2047, var_6))))) ? -1121501860331520 : ((min(((-(arr_1 [i_1] [i_1]))), -var_9))))))));
                var_22 = 0;
            }
        }
    }
    var_23 = (max(var_4, 11118621724154399542));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_24 ^= ((~(max(4294967295, 18446744073709551608))));
                arr_11 [i_3] [i_3] = ((-0 << (1121501860331520 - 1121501860331489)));
                var_25 = ((var_0 ? (min((38 + -13641), (2411120822 || 7))) : (arr_10 [i_3] [i_3] [i_3])));
            }
        }
    }
    #pragma endscop
}
