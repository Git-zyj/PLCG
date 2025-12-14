/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [9] = ((((var_1 ? ((var_13 ? var_15 : 239467434)) : (32131 >= var_12))) % ((((var_3 & 11020) ? -55768 : ((var_8 ? -32131 : 1501844611)))))));
                var_16 ^= (min(((1056046297 ? 23961 : (min(3370520095, 4294967278)))), ((-var_11 * (min(var_15, 4007050961))))));
                var_17 += (((44233 + (var_0 == var_13))));
                var_18 = (max(var_18, ((((((((-2843 ? 18 : 0))) || (((6 ? 29 : 180))))) && (4161727965989748012 >= 183))))));
                var_19 |= (max(105, 19268));
            }
        }
    }
    var_20 = (max(((92 ? var_9 : 2376727785)), (((411437861 << (var_0 - 822237188))))));
    var_21 |= ((var_11 >= ((((min(var_14, var_9))) ? 1533369873 : 0))));
    #pragma endscop
}
