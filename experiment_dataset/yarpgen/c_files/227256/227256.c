/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((1367929604 ? (!1) : (var_8 || 445987987))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((-(((445987965 >> var_3) ? (1 == 445988007) : ((3848979288 ? 445988008 : (arr_2 [i_1] [i_1]))))))))));
                    arr_8 [i_0] = (arr_1 [i_0]);
                    arr_9 [i_0] = ((((((1 ^ var_4) + 9223372036854775807)) << (((((~97674015155754473) + 97674015155754529)) - 54)))) ^ (((var_7 & (((arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0]) ? var_10 : var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
