/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_9);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((((((((arr_3 [5] [i_0]) % (arr_4 [i_0])))) == ((1513491707 ? 0 : (arr_3 [5] [i_0]))))) ? (arr_4 [i_0 - 1]) : ((+((0 ? (arr_6 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))))));
                var_22 = (((((min((arr_3 [i_0 - 3] [i_0]), (arr_3 [i_0 + 1] [i_0]))))) & (min(4182163492854436949, (arr_3 [i_0] [i_0])))));
            }
        }
    }
    var_23 = (max(var_23, 10804273734218909262));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_24 = (((arr_14 [i_2] [i_3 + 1] [i_4]) || ((((!(arr_12 [i_3] [i_3] [i_4] [i_3]))) || (107 % -867395524875333590)))));
                    var_25 &= ((!(((~(arr_9 [i_3 - 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
