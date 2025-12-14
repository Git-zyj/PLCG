/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(151, 2147483647));
    var_12 = (max(var_9, var_0));
    var_13 ^= (991874073 - 123);
    var_14 = ((3530215427 << (223 - 203)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 = (min(((min((max(3905553841, 2755289614)), ((min(13566, 128)))))), (arr_1 [0])));
        var_16 = 776105688139463865;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [11] = 222;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_17 = (max(4294967295, 1));
            var_18 = 144;
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = (((((arr_8 [i_3] [i_3] [i_3]) / -1585080357)) <= ((((max(21623, 0))) >> (((max((arr_0 [i_3]), -1331852486)) + 51))))));
        var_19 = -1870463377;
        var_20 += ((((((2032 ? 1 : 3231684444)) | 1913090157))) ? 4294967295 : 1);
    }
    #pragma endscop
}
