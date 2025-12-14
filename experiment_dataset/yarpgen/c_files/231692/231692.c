/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(((247 ? 252 : 8)), ((157 ? 7 : -1))))) ? (min((-127 - 1), ((15 ? 0 : 0)))) : ((min(1, 1023)))));
    var_11 = 192;
    var_12 = ((0 ? ((((min(10, 85))) % ((1 ? 8192 : 8)))) : 11));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, ((min(-182236768, 25)))));
        arr_3 [i_0] = 524287;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (min(var_14, 7));
        var_15 = ((((73 ? 30 : 4)) | -1));
        var_16 += (0 | 1);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] = (((((233 ? 268435456 : -70))) ? 0 : ((21 % ((7433 ? 477888514 : 11))))));
        var_17 = (max(var_17, ((min((661601472 >= -73), ((((min(3, 49419))) ? 4026531859 : ((5837 ? 14232 : -31)))))))));
        arr_13 [i_2] [i_2] = (-127 - 1);
        arr_14 [i_2] [i_2] = -15;
        var_18 = ((((((-1257405985 - 37) + ((min(129, 240)))))) ? ((0 ? -1257405996 : 255)) : ((46799 ? 6 : ((9 ? -7 : 16))))));
    }
    #pragma endscop
}
