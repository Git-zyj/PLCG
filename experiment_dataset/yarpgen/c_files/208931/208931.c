/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(2875882138, (max(4294967293, (min(5939090142890399837, 1419085138))))));
    var_18 = 1419085158;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = 4294967292;
                arr_5 [i_0] = (min(var_13, (((max(var_16, 0))))));
                arr_6 [i_0] = (max(((((3 >= var_3) != (16263257856145536636 != 14782836298454019342)))), -1));
            }
        }
    }
    var_20 = (min((min((var_1 >= var_8), (max(0, var_3)))), (((((max(var_16, var_12))) ? (max(var_0, 38990)) : (-366 | 38990))))));
    var_21 = ((((max(-1, (var_12 || var_4)))) ? (min(((min(14370, 0))), var_14)) : ((((min(var_8, 1871719944804555196)) < (((min(1, -15735)))))))));
    #pragma endscop
}
