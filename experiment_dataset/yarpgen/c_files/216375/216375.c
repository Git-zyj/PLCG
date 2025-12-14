/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, -7008112864066081897));
    var_19 ^= ((((((~16022220501538392743) ? 2424523572171158873 : ((min(3663720408, var_8)))))) ? (((((631246883 ? var_10 : var_5))) ? ((var_9 ? var_14 : var_4)) : (var_16 | var_5))) : var_3));
    var_20 = (max(var_20, ((-(((max(631246875, 23282))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_21 = (min((var_3 | var_10), var_3));
        arr_3 [i_0] &= (min(((23282 ? 7008112864066081909 : (3663720429 <= -1))), 1948678385823527073));
        arr_4 [i_0] = var_13;
        arr_5 [i_0] = var_2;
        var_22 -= (((((246 ? 3968 : 1259403967))) ? (~631246875) : (((322406472 ? (~var_13) : ((var_10 ? 3944 : 9)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_10 [12] = (!var_6);
        arr_11 [i_1] &= (((((var_7 ? var_10 : (arr_8 [9])))) ? (arr_0 [i_1]) : 192));
        var_23 = -8;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_14 [14] = (min((!-15001), ((((min(2424523572171158871, (arr_9 [i_2] [i_2])))) || var_17))));
        var_24 ^= var_1;
        var_25 *= (((((-((1 ? 7884 : var_0))))) / ((+(((arr_6 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_12 [8] [i_2])))))));
    }
    #pragma endscop
}
