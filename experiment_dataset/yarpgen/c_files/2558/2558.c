/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = -115491637813577452;
        arr_3 [i_0] |= min((((-32766 <= ((-1481058093 ? 8941884752362463448 : 18446744073709551615))))), (((!7347974964846915760) >> 0)));
        var_13 |= (max((((~(arr_2 [18])))), var_6));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                var_14 -= (max(((((min(1, 13281800122360326508)) != ((max((arr_5 [i_1] [i_2]), (arr_7 [i_1] [i_1] [i_1]))))))), -338345948));
                var_15 &= ((((!(((7485 ? -2858112327434968212 : 32767))))) ? (max((max(0, (arr_1 [i_1]))), var_8)) : (((arr_4 [i_2]) ^ (max(var_10, (arr_7 [i_1] [i_2] [i_1])))))));
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
