/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(-var_12, (min(51, 4294967295)))), var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = min((arr_4 [i_0] [i_0] [i_1] [i_2]), (min((arr_4 [i_0] [i_0] [i_1] [i_2]), var_1)));
                    var_18 = ((((max(var_4, (arr_4 [i_0] [i_1] [i_2] [i_2])))) ? (((((arr_1 [i_2]) == -56)))) : (min(6440406918284804591, 255))));
                    var_19 ^= (arr_0 [i_0]);
                    var_20 = (arr_5 [19] [i_1] [19]);
                    arr_7 [i_0] [i_1] = ((6493765027879733026 ? (((-((max(var_2, (arr_2 [i_0]))))))) : 4294967294));
                }
            }
        }
    }
    var_21 = var_8;
    var_22 &= (((((max(var_10, 1173465858)) % ((288230376084602880 >> (var_5 - 77)))))));
    var_23 += (min(((8375 == ((var_0 ? var_4 : var_3)))), (!9223372036854775807)));
    #pragma endscop
}
