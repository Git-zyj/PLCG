/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 130;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_14 = (!2992051875);
        var_15 = ((2769938744 ? ((((((14 != (arr_3 [i_0])))) << (((max(var_4, var_3)) - 2917060689))))) : var_9));
        var_16 = var_12;
        var_17 = ((var_1 ? var_2 : 17));
    }
    var_18 = max(((var_6 ? var_8 : (min(1302915414, var_1)))), ((54 ? 2992051886 : 2175119933)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                var_19 = (max(var_19, -var_7));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_20 = 1302915414;
                            var_21 = (((!var_5) ? (((((2992051884 << (2992051889 - 2992051879))) < (arr_10 [i_4 + 1] [i_4] [14] [i_4 + 1] [i_4] [i_4 + 2])))) : (255 < 1302915425)));
                            var_22 *= (max(((~(arr_9 [i_4 + 2] [i_4 - 1] [i_3 - 2] [i_1]))), var_2));
                            var_23 = min((!1302915420), 1302915414);
                            var_24 = (var_1 ? (((var_7 && 3996090855) ^ ((2992051861 ? 2992051860 : 255)))) : (max(((1302915418 >> (((arr_6 [2] [2] [3]) - 232)))), var_2)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
