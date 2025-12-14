/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min(-94, 41404))) != var_2))) ^ (~23)));
    var_19 = var_8;
    var_20 ^= var_14;
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = ((~(max(var_2, var_13))));
                                var_23 += (min((~1605496303), var_14));
                                arr_13 [i_0] [i_1] [i_4] [i_2] [i_3] [i_3] [i_4] = (((((((max(var_7, var_1))) ? ((-1 ? 117 : var_8)) : ((min(122, 41404)))))) == (max(((((arr_5 [i_4] [i_3] [i_2] [21]) ? 1 : (arr_9 [i_0] [i_2] [i_2] [i_3])))), ((-1604515520 ? 64 : -4964552263836325965))))));
                            }
                        }
                    }
                    var_24 = var_17;
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_25 -= ((((((var_3 - (arr_15 [9] [0]))))) ? (max((arr_11 [i_5] [i_1] [0] [22] [17]), (~var_9))) : ((max(1605496301, -30)))));
                    var_26 = ((((min((arr_15 [3] [i_1]), (min(var_3, (arr_3 [12])))))) ? ((max(4294967280, 167))) : (min(var_4, -17107127927955798505))));
                }
                arr_16 [i_0] = ((((!((min(var_11, (arr_9 [i_0] [i_0] [i_1] [14]))))))));
            }
        }
    }
    #pragma endscop
}
