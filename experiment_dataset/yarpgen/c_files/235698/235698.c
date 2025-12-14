/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(min(var_11, var_12))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [24] &= ((137438953472 / (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] |= (arr_2 [i_0] [i_0]);
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = (((!(arr_6 [i_1]))) && (!35167192219648));
        var_16 = (var_12 != var_8);
        var_17 -= var_12;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_18 &= (((((792720057 + ((var_13 ? 35167192219648 : 4603636501620696907))))) ? 12064 : 1072693248));
        arr_13 [i_2] = (1287079883 == var_9);
        arr_14 [i_2] = (~1);
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_25 [i_3] [2] [17] [17] [i_3] [i_6] = ((3038558828582155245 ? -1 : 8976046778355898192));
                        arr_26 [0] [i_4] [i_4] [i_4] [i_4] [i_4] = ((-63 ? 1152921504606845952 : 1));
                    }
                }
            }
        }
        arr_27 [i_3] = (-4857991352642505232 + 3038558828582155245);
    }
    #pragma endscop
}
