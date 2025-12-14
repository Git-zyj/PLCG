/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 ? (--0) : var_3));
    var_18 |= ((21837 >> (-var_0 + 5799322550686814497)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = 1382176850;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = var_13;
                            var_21 = ((((arr_0 [i_1]) & -7562993399133591346)));
                            var_22 = (((var_7 >= 1969115212) & (((((0 ? 1331054872 : (arr_6 [2] [i_1] [i_2]))) == (!1331054872))))));
                            var_23 = var_8;
                            var_24 |= (((max((arr_6 [i_0] [i_1] [i_0]), -22632)) - (var_14 - -104000175)));
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, (((!(((-20 + (50815 != 38)))))))));
    #pragma endscop
}
