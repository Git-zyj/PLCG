/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_5 / var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_18 = (max((((-((32487 ? var_7 : var_3))))), 13124404622842691816));
                        var_19 = (max(var_19, ((max((((arr_7 [i_0] [i_1] [i_3 + 3] [i_3 + 3]) | 74)), (((!(arr_7 [i_2] [i_2] [i_3 + 3] [i_3])))))))));
                    }
                    arr_10 [i_0] [i_1] = (((1678384852 ? -9223372036854775803 : (2981789567 % var_6))));
                    arr_11 [i_0] [i_0] = (((((((14441196493277742021 ? 148418076 : var_8))) || (((19 ? 1462146137 : (arr_5 [i_2] [i_0])))))) ? 32767 : (((13124404622842691816 >= 3276455803152252560) ? (arr_7 [i_0] [5] [i_0] [i_0]) : (arr_7 [i_2] [i_2] [i_1] [i_0])))));
                }
            }
        }
    }
    var_20 = (((((((var_10 ? var_5 : 65535)) | (~-1678384853)))) ? var_13 : var_4));
    #pragma endscop
}
