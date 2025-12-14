/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_8));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (min(1, (1 + 17700404839382759971)));
        arr_2 [i_0] = -48;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = ((2715515347654226362 ? 7884 : 746339234326791636));

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_16 = ((746339234326791654 ? 8812107637838594795 : (746339234326791672 ^ -2431)));
            var_17 = (--0);
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_18 = 65533;
            var_19 = (~1);
            arr_12 [i_1] [i_3] = ((8812107637838594814 <= (8812107637838594814 / -114)));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_1 - 1] [i_4] [i_4] = (((25701 - -1) + 4294967295));
            arr_17 [i_1] [i_4] [i_4] = ((8812107637838594814 >= (-8812107637838594796 - -1713495686276151384)));
        }
    }
    var_20 = (((((((max(4294967295, -5947786476825239825))) ? 4294967274 : (1 && 1)))) ? ((((6 ? 0 : 70368744177663)) * 53156)) : (((-((min(2, 37861))))))));
    var_21 = -29;
    #pragma endscop
}
