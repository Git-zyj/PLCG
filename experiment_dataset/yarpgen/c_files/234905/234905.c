/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 ^= (65535 && 52);
                    arr_8 [i_0 - 1] [i_0 - 1] = (((((8796093022207 ? 194 : -5388414883138747778))) ? ((var_5 ? 56093 : (arr_4 [i_1 + 1] [i_0 + 1]))) : ((26830 ? 65535 : 70))));
                }
            }
        }
    }
    var_14 = ((569486153 ? 1209358163 : 56093));
    var_15 = ((1 ? (((5515 ? ((3178822459 << (52333 - 52330))) : (((1 ? 2983 : 96)))))) : 8472648472758283689));
    var_16 &= var_12;
    #pragma endscop
}
