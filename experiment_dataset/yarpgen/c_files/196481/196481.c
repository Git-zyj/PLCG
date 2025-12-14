/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((-3145970376823297144 / var_2) + -var_6))) ? 17473439411739183258 : var_9));
    var_14 &= ((-((((var_8 <= var_8) && (((var_12 ? -9670 : 9696))))))));
    var_15 = 9669;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_16 ^= ((((((((arr_0 [i_1]) ? (arr_5 [i_0] [i_1 + 3] [i_1]) : (arr_1 [i_0 + 2] [i_0 + 2])))) || ((var_12 || (arr_5 [i_0] [i_1] [i_1]))))) ? (arr_4 [i_0] [i_1] [i_1]) : (-127 - 1)));
                arr_7 [i_0] &= (max((min((-127 - 1), var_7)), var_5));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 += (arr_10 [0] [0]);
                            arr_12 [i_2] [i_1] [i_2 + 1] [i_3] [i_2] [i_2 + 1] = var_8;
                            var_18 ^= (((-127 - 1) && 0));
                            arr_13 [10] [2] |= (((30648 ? 65535 : (((var_8 || (arr_2 [i_3])))))));
                            arr_14 [i_0] [i_2] [i_2] [i_3] = (max((((((var_1 ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_8 [i_0] [i_1] [i_2] [i_3])))) ? (arr_5 [i_2 + 1] [i_1 - 2] [i_0 + 3]) : ((15 ? -39 : (-127 - 1))))), ((min(-9648, (arr_3 [i_0 - 2]))))));
                        }
                    }
                }
                var_19 = ((((~(-127 - 1))) * 7));
            }
        }
    }
    #pragma endscop
}
