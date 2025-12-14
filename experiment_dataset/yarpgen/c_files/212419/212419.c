/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_12 = 1;
                    var_13 = ((var_1 >> (3455454434035852274 - 3455454434035852270)));
                    var_14 = (((arr_7 [i_2 - 2] [i_2 + 1]) - 55106));
                    var_15 ^= (arr_5 [6] [6]);
                }
                var_16 = ((!(((((min(55106, (arr_0 [i_0])))) >> (55679 - 55673))))));
            }
        }
    }
    var_17 = (min(255, (((9872 << (var_8 - 63630))))));
    var_18 = (((-var_9 + 2147483647) >> (((!((max(var_10, 9877))))))));
    #pragma endscop
}
