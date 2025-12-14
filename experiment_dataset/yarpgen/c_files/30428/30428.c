/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min(173, 13332634037470293777)), (((((min(var_7, var_5))) * var_4)))));
    var_11 = (min((!var_3), ((~(~var_0)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = (min(var_12, (((min(((var_9 ? var_4 : var_8), ((((var_3 + 9223372036854775807) >> (var_6 - 35041)))))))))));
            arr_5 [i_1] = ((((+(((var_7 + 2147483647) >> (var_0 + 88)))))) && 13332634037470293777);
            arr_6 [i_0] [i_1] = (min((min(var_5, var_2), (((var_6 >> (var_4 - 27)))))));
            arr_7 [i_1] [i_0] [i_1] = (((((var_2 / (var_5 / var_0)))) ? (var_6 * var_7) : (44404 * 45434)));
            arr_8 [10] [i_1] [i_0] |= ((((max(var_3, var_8)))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_13 = (max(var_13, (((~((-(var_9 / var_4))))))));
            arr_12 [i_0] = ((((max(var_0, var_9))) <= ((((var_6 && var_0) == (var_8 != var_7))))));
            var_14 = (min(var_14, ((((var_9 * var_4) >> ((((~((75 ? 61087 : var_3)))) + 61091)))))));
        }
        var_15 = (var_3 == var_7);
    }
    #pragma endscop
}
