/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = (-var_15 / -var_12);
    var_19 = ((2160050829 ? 43561 : 21974));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_20 ^= (arr_0 [i_2 - 2]);
                    var_21 = ((228 ? (~var_10) : (((arr_1 [i_2 - 2] [12]) ? -6456678624993061472 : 1126809199))));
                    var_22 = 6013175618914724340;
                    var_23 = (arr_1 [i_0] [i_2 - 2]);
                }
                arr_7 [i_0] = ((~(((((4788554869577001909 ? var_13 : 13897253241738130084))) ? (~var_10) : 6884866615343554537))));
                arr_8 [i_0] [i_0] = (arr_5 [13] [1] [i_1] [i_1]);
                arr_9 [i_0] = var_14;
            }
        }
    }
    var_24 = (~var_1);
    #pragma endscop
}
