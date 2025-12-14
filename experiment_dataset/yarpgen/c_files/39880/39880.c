/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max(((21316 ? var_6 : -12)), 217)), ((((((-2147483647 ? -101 : -10))) ? (!727935155) : var_8)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_11 = (max(var_11, ((((arr_3 [i_1]) + (min((var_2 != -727935170), 727935131)))))));
                        var_12 = (~1809988641041272567);
                    }
                }
            }
        }
        var_13 = (arr_6 [i_0] [i_0] [4] [i_0]);
    }
    var_14 = var_8;
    var_15 = ((!-111) * (min(((4095 >> (-2014288962 + 2014288968))), -111)));
    var_16 = (min(var_0, ((9 / (var_3 != var_8)))));
    #pragma endscop
}
