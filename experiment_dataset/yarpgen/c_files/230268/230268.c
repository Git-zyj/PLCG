/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(-var_5, -var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [2] [8] [i_0] = (min(1, (max((-5287231356068719083 / 1), ((((arr_5 [i_0] [i_0]) && (arr_4 [i_0] [i_1 - 1] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 *= (((arr_4 [i_0] [i_1] [i_1]) << (((((((206 ? 187277009 : 254))) ? ((min(-16041, 1))) : (arr_9 [i_0] [i_1] [i_2 - 1] [i_3]))) + 16059))));
                            var_18 *= ((min(3840, 8374)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 += (min(-5346903082988650183, 3880152359298075691));
                            arr_18 [0] [0] [i_1] [i_4] [i_5] = (2768495589 & ((1715413417608451232 ? ((-750419743083799963 ? (arr_13 [i_0] [i_0] [i_0]) : 4611686018427387872)) : (((248 ? 234899519 : -2827))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] &= (1 == -16384);
                var_20 = (((43172067 ? 492581209243648 : 510)));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_21 += ((((min((2269938575009438317 * 0), (arr_31 [1] [i_8] [1] [i_6 + 3])))) && 1));
                            var_22 = (min(137430564864, 1));
                        }
                    }
                }
                arr_32 [i_6] [i_6] = (((((1 ? (!1) : (!9223372036787666944)))) ? (min((min(4056528829347518738, 1)), ((max(32, 0))))) : (arr_30 [i_7])));
            }
        }
    }
    #pragma endscop
}
