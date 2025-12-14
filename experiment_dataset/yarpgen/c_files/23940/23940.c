/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-4914712445019043515 | (((0 << (3478208649 - 3478208647))))));
    var_20 = (816758646 + 7196348949189127561);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] = ((((((var_17 && 0) != (4294967281 != var_12))))) & ((21 >> (((524287 / -8) + 65566)))));
                                var_21 ^= (((((((((3623646192 || (arr_4 [i_2] [i_0])))) != (-639738250402871378 && 3478208671))))) < (4294967295 / 67108863)));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = (((((((arr_6 [i_0] [i_1]) && (arr_1 [i_0]))) && (var_0 <= var_14))) || ((((var_10 ^ (arr_5 [i_0]))) < (0 % 6693965826003404)))));
            }
        }
    }
    #pragma endscop
}
