/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((((max(1114062503463836032, var_1)) << (var_8 && -3951740929731108677))) >= var_6)))));
    var_13 -= 1296559012;
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((8745403170613566097 && (arr_0 [i_0]))) ? ((31750 ? 2729580231755249447 : 2729580231755249435)) : (arr_0 [i_0]))))));
                var_16 = ((2737 % (min((5554 > 1114062503463836036), var_7))));
            }
        }
    }
    #pragma endscop
}
