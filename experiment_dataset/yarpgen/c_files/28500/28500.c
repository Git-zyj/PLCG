/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 55492));
    var_19 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((55471 ? 10043 : 6062101175460442104))) ? ((153 ? -303807829 : 1956141417)) : 125));
                var_20 |= (((((10044 / 122) ? (((7 ? 96 : -13478))) : ((9149587940665876113 ? 162 : 22))))) ? (((((1 ? 10 : -12680))) ? 148 : ((-2004605426679967260 ? 3876130523 : 10314)))) : ((((((-4450 ? 14 : 0)) >= (11 / -2316676997421104339))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 += ((((0 ? 42 : -2075272337)) >> (-32743 >= 4087767687)));
                            arr_11 [i_0] [i_0] [i_0] [i_3] |= (((((4035225266123964416 ? 98 : 6754928591126487398))) ? ((-423325843 ? 418836746 : 32764)) : (((1711547981334322400 ? 105 : 40)))));
                            var_22 = (((221 - 3496664195400912714) ? 242 : ((((11641978355713565636 << 1) || 9223372036854775807)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
