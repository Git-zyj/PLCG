/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [12] = (((~7689958594160445633) ? 19616 : ((((0 == 4611686018427387904) <= ((4611686018427387904 ? 51131 : -5685994224812556176)))))));
                var_17 = ((~-1) >= (((48168180080933319 <= (((4294967288 ? 11952 : 80)))))));
            }
        }
    }
    var_18 = (((((!(1152921435887370240 && -5685994224812556156)))) ^ 2048));
    var_19 = 3075488136;
    #pragma endscop
}
