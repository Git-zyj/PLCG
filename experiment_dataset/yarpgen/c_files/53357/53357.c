/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-76851973 ? ((-((47 ? 232 : 2639326287)))) : var_10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (76851972 == -66);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_14 *= ((28656603 == (((((arr_6 [i_1 + 1]) || 76851980))))));
            var_15 += ((7 ? 76851970 : 25856));
            arr_7 [i_0] [i_0] = (240 && 29258);
        }
        var_16 = (max(var_16, 6262605671266817995));
        var_17 = ((((arr_6 [i_0]) == (max(4266310692, 76851955)))));
        var_18 ^= (max(2047, ((((max(241, 92))) ? (!181) : 1952340598480547995))));
    }
    var_19 = max((max(var_0, 76851970)), var_11);
    #pragma endscop
}
