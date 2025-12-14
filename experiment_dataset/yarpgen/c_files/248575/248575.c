/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] |= ((-1590049580 ? 1 : (max(0, -3160766974073754069))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = ((1 ? 7964652748345887296 : 1));
                    arr_9 [1] [i_1] [i_2] [3] = (((!1) + -3431065018314966988));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_15 += ((((((min(var_11, 7964652748345887301))) && (2147483647 || 1))) && ((((4522613451050794640 == 4522613451050794652) ? (min(var_8, 9600103194053137028)) : (var_13 % 11256434658417738820))))));
                    var_16 = (min(var_16, ((((arr_2 [i_3]) ? 2147483647 : (arr_2 [i_0]))))));
                }
            }
        }
        arr_14 [i_0] = (((((var_13 ? var_4 : (arr_11 [i_0] [i_0])))) / var_4));
    }
    var_17 = ((!(var_4 ^ var_2)));
    #pragma endscop
}
