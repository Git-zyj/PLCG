/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-5682194303080837937, 11588896868268192198));
    var_15 = (((17732 + -var_5) ? ((((-5682194303080837920 | 11588896868268192198) ? -757511905 : ((5682194303080837920 ? 17744 : 4272810475))))) : -5682194303080837937));
    var_16 = ((((var_4 == (min(17, 17941785796376698419))))));
    var_17 = ((768 ? (min(3691103006, (-5682194303080837959 ^ 757511899))) : (((((!var_13) > var_13))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (max((((((113 ? -14425 : (arr_1 [9] [i_0]))) <= (arr_1 [i_0] [i_0])))), (max(864130000, -5682194303080837920))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (((((3500740865509056868 ? -757511905 : 4294967295))) ? (((!((((arr_0 [i_2]) ? 2400081570 : var_6)))))) : -12223));
                    var_19 = ((3799805329359563112 ? ((~(arr_0 [i_1]))) : (~var_11)));
                    arr_9 [i_2] = min((~4272810465), (min((arr_7 [i_2 - 1] [5] [i_2 - 2] [i_0]), var_4)));
                }
            }
        }
    }
    #pragma endscop
}
