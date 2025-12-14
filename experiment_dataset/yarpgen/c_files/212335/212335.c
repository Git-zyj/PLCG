/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min(var_11, (((!((max(((-1221939449 ? 11862511207992595558 : 1)), ((min(-1839811250779235102, (-9223372036854775807 - 1))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 *= (max((((max(-1708235067, -1)) + (min(10, 0)))), (!1708235074)));
                                var_13 = (!-1192035318);
                                var_14 ^= ((((24321 > (9269301798993895294 < -1221939449))) ? (max(-11, 41215)) : -381011338589060971));
                                arr_12 [i_0] [i_3] [0] [i_2 + 1] [i_1] [i_0] [i_0] = 41214;
                                arr_13 [i_0] [i_0] [12] [i_0] [i_0] [i_0] [i_0] = ((!((max(1708235066, 163000463)))));
                            }
                        }
                    }
                    var_15 = (((17 ? 65520 : 5578616459021200998)));
                }
            }
        }
    }
    var_16 = (!var_8);
    #pragma endscop
}
