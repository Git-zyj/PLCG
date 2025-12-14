/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = var_13;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (max(var_16, 1277219982032198313));
            var_17 = (((arr_3 [i_0 + 1] [i_0 + 1]) & 1354840925));
        }
        var_18 = var_14;
    }
    var_19 = ((17169524091677353292 ? 17169524091677353302 : 65528));
    var_20 = (-(~50525));
    var_21 = 62021;
    #pragma endscop
}
