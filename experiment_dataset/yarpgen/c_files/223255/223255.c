/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((32263 + (-59 | 55)))) == var_2));
    var_13 = ((((max((-32767 - 1), 58))) ? (min(1, (((-32757 + 2147483647) >> (-2898294928400331988 + 2898294928400332013))))) : (1 ^ -487427892)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_14 = (((max(4046517454988563772, 4194303)) % 1));
                                var_15 = (arr_10 [10] [10] [4] [i_3]);
                                arr_14 [i_3] [i_2] = -48;
                                var_16 = var_3;
                            }
                        }
                    }
                    var_17 = 1;
                    var_18 = 2069779848;
                    var_19 = 2069779848;
                }
            }
        }
    }
    #pragma endscop
}
