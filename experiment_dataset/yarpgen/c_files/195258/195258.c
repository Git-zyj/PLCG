/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(63, ((2147483647 ? (~2147483647) : ((7936 ? 2020317677 : 18446744073709551611))))));
    var_12 = ((!((((1 ? 95 : 65473))))));

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 6;i_3 += 1)
                {
                    {
                        var_13 = 3171832729017833165;
                        arr_10 [i_1] [i_1] |= (min(18446744073709551615, (((-(min(2274649618, (-2147483647 - 1))))))));
                    }
                }
            }
        }
        arr_11 [i_0] = max(((min((max(16646144, 30577)), ((65535 << (134217472 - 134217462)))))), (max((max(2020317677, 1)), (4639028173778709629 >= 238599837))));
        var_14 = 7;
    }
    #pragma endscop
}
