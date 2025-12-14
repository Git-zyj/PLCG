/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_20 = (((((~(arr_3 [i_0] [7])))) || (~var_19)));
                    var_21 -= 4294967275;
                }
                arr_7 [i_1] [i_1] = (((arr_2 [i_0] [i_1] [i_1]) ? (~13560) : (((arr_3 [i_1] [i_0]) ? (arr_2 [i_0] [i_1] [i_0]) : ((18 ? (arr_5 [i_0] [i_0] [i_1]) : -20121))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_22 *= (min((min((arr_6 [i_3] [i_3] [22]), (arr_6 [i_3] [i_3] [12]))), ((min(13562, 1)))));
                var_23 = (max((arr_0 [i_3]), (max((arr_0 [i_3]), (arr_0 [i_4])))));
            }
        }
    }
    var_24 = ((((((min(var_3, -9266))) * var_7)) != (((((max(-6749146666378948838, 20113))) && 9223372036854775807)))));
    #pragma endscop
}
