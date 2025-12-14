/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [1] = (arr_2 [i_0]);
                        var_10 = (~var_9);
                        var_11 = ((+((31 ? (-1574284014 | 1574284005) : (!1574284005)))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_12 = -618909008;
                        var_13 = 1;
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((arr_6 [i_2] [i_2] [i_0]) != 144115188075855872)) ? ((min((arr_10 [i_0] [i_1] [i_0] [i_4]), (arr_2 [i_0])))) : (((arr_6 [i_0] [i_1 - 1] [i_0]) ? 747900551720757418 : (arr_2 [i_0]))));
                        var_14 -= ((((min(747900551720757418, 357790793)) < (!144115188075855872))) ? (((var_7 ^ 1) ? (255 ^ -1704071508) : ((-1652722773 ? 1885380947 : var_8)))) : (max(((134217696 ? (arr_8 [i_0] [i_1] [i_1] [i_0]) : (arr_7 [i_1] [i_1]))), ((~(arr_12 [i_1] [i_4] [i_4] [i_4]))))));
                    }
                    var_15 = ((!var_5) ? ((min((3114283736152337658 < -1574284006), 1))) : (((((arr_4 [i_0]) < 1)) ? (((var_5 && (arr_6 [i_0] [i_0] [i_0])))) : ((994531329 ? var_9 : 253)))));
                }
            }
        }
    }
    var_16 |= (0 != -1574284014);
    #pragma endscop
}
