/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min(1256115254, 9223372036854775799)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0] = max((arr_10 [i_0] [i_2] [i_4]), ((min((min(1, 16)), 46))));
                                var_18 += ((!(((var_9 ? (~41274) : (((arr_9 [i_0] [i_1] [i_2] [i_3] [i_1]) | (arr_3 [i_1]))))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_0] [i_0] = 29;
                    var_19 ^= ((-241 ? -118 : (((max(45232, -13))))));
                    var_20 = (+-7313745955793372901);
                    var_21 = (!-var_13);
                }
            }
        }
    }
    var_22 = (((((31 / ((min(var_6, var_11)))))) ? (max(-6106331771183544717, var_16)) : var_12));
    var_23 ^= (((~54) * var_16));
    #pragma endscop
}
