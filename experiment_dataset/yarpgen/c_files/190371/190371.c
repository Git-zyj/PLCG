/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] = (max(((min((arr_0 [i_1 - 1] [i_0 + 1]), (arr_0 [i_0 + 1] [10])))), (((18446744073709551615 / 117) ? (arr_1 [i_0]) : ((~(arr_0 [i_1 + 1] [i_1 + 1])))))));
                arr_7 [i_0] [i_1 + 1] = (((((-117 ? 1099963 : -113032097))) ? ((((arr_5 [i_0] [i_0]) <= -118))) : (arr_4 [9] [9] [i_1])));
                arr_8 [i_0 - 1] [i_0] [i_0 + 2] = -21770;
            }
        }
    }
    var_14 = (max(3502, 12398723116809258882));
    #pragma endscop
}
