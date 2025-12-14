/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 *= ((((((arr_3 [i_1]) ^ (arr_3 [i_0])))) ? (((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : ((((-864616079992746811 + 9223372036854775807) >> var_5))))) : (((((-864616079992746814 ? 0 : 254)) >> (((((arr_3 [i_1]) ? (arr_4 [i_0]) : (arr_2 [i_0]))) - 5584)))))));
                var_20 += (arr_3 [i_0]);
                arr_5 [i_0] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 = (((((!(((252 >> (124 - 107))))))) - (((-1843372844 == ((((arr_10 [1] [i_1] [20] [i_1] [6]) ? 32578 : (arr_3 [i_2])))))))));
                            var_22 = ((1 << (-864616079992746815 - 2498825403)));
                            arr_11 [i_0] [3] [3] [3] = ((~((-13637 ? (((arr_2 [i_0]) ^ 12118915600249248139)) : 58796))));
                        }
                    }
                }
            }
        }
    }
    var_23 = -var_1;
    #pragma endscop
}
