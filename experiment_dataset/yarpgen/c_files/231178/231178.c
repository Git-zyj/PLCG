/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((2433602474 ? 449616994 : var_12)))) ? (!var_12) : ((((32637 >= var_16) == (min(var_16, 14788))))));
    var_18 = (min(var_18, ((((((36 ^ (min(var_16, 51493))))) ? var_16 : var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = ((!(((((((arr_0 [i_0]) >= var_1)))) < ((-5075083981445029443 / (arr_1 [i_0] [i_0])))))));
                arr_4 [i_0] [i_0] = ((-(arr_3 [i_0])));
                var_20 = var_15;
            }
        }
    }
    var_21 |= ((((min(-72, (min(120, var_2))))) ? -1746492526 : (((!(((var_0 << (var_9 - 19299)))))))));
    #pragma endscop
}
