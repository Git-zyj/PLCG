/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((min(-6481, var_1))) || ((((6 ? var_5 : 179)) == 27)));
                var_15 *= ((((((max(var_5, (arr_2 [i_0])))) || ((min(var_3, (arr_4 [i_0] [i_0] [11])))))) ? (((max(var_12, 30965)))) : (((12693 || (arr_2 [i_0]))))));
                var_16 *= ((-(arr_5 [i_0] [2])));
                arr_6 [i_1] [i_1] [i_1] = min(65530, 1);
            }
        }
    }
    var_17 |= (~var_5);
    var_18 = (((((((-6481 ? var_7 : 5118594101163809317))) ? var_7 : var_11))) ? (((34 % var_8) >> (var_3 - 63))) : ((((52 ? 35 : -1)) | 179)));
    #pragma endscop
}
