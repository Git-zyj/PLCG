/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (-((var_8 ? (!1689529836196505685) : (arr_3 [i_0]))));
                arr_6 [i_1 - 1] [i_1] [i_0] = ((+((((arr_3 [i_0]) == var_6)))));
                var_12 = arr_1 [i_1] [i_0];
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_13 = (-((var_0 ? (arr_7 [i_2]) : -1689529836196505689)));
                        var_14 = -1689529836196505689;
                        var_15 = (~-665655991146918179);
                    }
                }
            }
        }
        var_16 = ((arr_12 [i_2 - 4]) ? 1841544526027495084 : (arr_7 [i_2 - 4]));
        var_17 = ((7858169251068063870 == var_9) ? var_5 : var_10);
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        var_18 += (-var_3 ? 5325881818740797 : ((-(min(2588234922829731771, var_2)))));

        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            var_19 = (var_9 ? -var_6 : (((((665655991146918152 ? -4447598699420909543 : 665655991146918190))) ? var_9 : (((arr_3 [i_6]) ? -4177939946548787038 : var_11)))));
            var_20 = (min(var_20, (min((arr_21 [i_6] [i_6] [i_6 + 4]), (min(-4325919850591285609, ((var_1 ? var_5 : var_0))))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_6] = (((((var_2 & 8403219840998144847) ? ((var_2 ? -8529323810254738159 : var_0)) : (min(var_10, var_6))))) ? (~1718216123260646604) : ((((min(-16, var_2))) ? -8403219840998144876 : var_2)));
                    var_21 = (3013615652932267679 * (((((min(72053195991416832, var_11)) >= var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
