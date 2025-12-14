/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1351072643;
    var_18 = 0;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_19 |= (min((((!405451424) ? (!-27) : (!255))), ((min((max(-123, -27)), 93)))));
        arr_2 [i_0] = (min((min((!4996607943873119669), 1878294310)), ((~((min(47296, 255)))))));
        arr_3 [i_0] = 1878294307;
        var_20 = (min(var_20, ((min((-127 - 1), (~-1878294312))))));
    }
    var_21 = (min(var_21, (((((((!(!149))))) <= (((min(63, 11576913842353085774)) / (((min(57466, 1)))))))))));
    #pragma endscop
}
