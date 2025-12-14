/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 += (((!65535) ? var_12 : ((((12249 <= 12247) <= ((var_1 ? 53288 : 57907)))))));
                    var_21 = var_6;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                var_22 ^= (arr_12 [0] [17] [3]);
                arr_14 [i_3] [i_4 - 1] = ((0 ? var_0 : 0));
            }
        }
    }
    var_23 = 7628;
    var_24 = (12254 == 0);

    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_25 = 62143;
        var_26 = (max(var_26, (12249 == 12249)));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        arr_19 [0] [i_6] = arr_2 [i_6];
        var_27 = (((max(7588, (((arr_11 [21]) ? (arr_6 [i_6 + 1] [i_6 + 1] [i_6] [18]) : 22493)))) / 60458));
        arr_20 [0] |= 39159;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 15;i_8 += 1)
            {
                {
                    var_28 = -0;
                    arr_25 [i_6] [i_6] = ((43968 <= (((max((arr_22 [i_6] [i_7] [i_6]), 7771))))));
                    var_29 ^= 22493;
                    arr_26 [i_6] [8] [i_8] = ((51486 ? 21334 : 65381));
                }
            }
        }
        var_30 = ((var_14 ? var_17 : (~12260)));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_31 = (max(var_31, (((!((((max(var_18, var_5))) || (((var_9 ? 55660 : var_18))))))))));
        var_32 = 57498;
        arr_29 [i_9] |= var_16;
        var_33 = 7640;
    }
    #pragma endscop
}
