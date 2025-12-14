/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(var_0, var_9)))) ^ var_1)) * ((~(min(var_6, 3384363476))))));
    var_17 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = ((-(arr_3 [i_0])));
        arr_5 [i_0] = 1;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_9 [1] = (((arr_6 [i_0] [i_1] [i_1]) || (arr_6 [i_0] [i_1] [i_1])));
            arr_10 [i_1] [i_0] [16] = ((-(((arr_1 [i_0]) ? 2005448531031534116 : (arr_0 [i_0] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_15 [i_0] [i_0] [24] |= (((arr_2 [i_0]) ? -1 : (((arr_6 [i_3] [i_2] [i_0]) - (arr_7 [i_2] [i_3])))));
                arr_16 [i_2] = (arr_13 [i_0] [i_0] [i_0]);
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_21 [9] [13] [i_4] [i_2] = ((1 ? -2005448531031534105 : -5895354575930651143));
                arr_22 [i_0] [i_4] [i_2] = (arr_20 [i_0] [i_2] [i_2] [i_4]);
            }
            arr_23 [i_0] [i_0] [i_2] = (arr_20 [i_0] [i_2] [i_2] [i_2]);
        }
    }
    var_18 = (((min((min(15589134236446550795, var_3)), (min(15589134236446550795, var_10)))) & ((var_3 ? (~1) : (min(2857609837263000830, 2005448531031534129))))));
    var_19 = (min((min((min(var_7, var_2)), (var_3 && -126))), var_3));
    #pragma endscop
}
