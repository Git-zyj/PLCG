/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -711673848;
    var_15 = (((max((min(711673842, var_11)), 229)) + -711673843));
    var_16 = (max(var_8, (((((max(var_2, 65535))) > ((var_3 ? var_5 : var_2)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] = ((var_6 ? (((arr_1 [5]) ? var_7 : 0)) : ((11941416074667069485 ? -4918 : 6505327999042482131))));
        var_17 = ((~(max((arr_0 [i_0]), ((var_1 ? var_4 : -1))))));
        arr_4 [i_0] = (var_11 - (((arr_0 [i_0]) ? var_10 : ((var_13 ? var_4 : var_0)))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = (max(-711673836, ((((arr_9 [i_1] [i_1]) > 56548)))));
            arr_12 [i_1] [10] [i_1] = ((((var_9 + (arr_7 [i_2 - 2]))) | (arr_8 [i_1 + 4])));
            var_18 = (min((var_6 - 711673826), (((8961 | 0) ? 6505327999042482131 : (((3180711902 ? -29817 : 3755011893)))))));
        }
        var_19 = (max(var_19, ((min((max(((max(var_3, 1114255393))), (((arr_6 [6]) ^ var_0)))), (arr_10 [i_1]))))));
    }
    #pragma endscop
}
