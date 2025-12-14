/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((8589934591 ? var_11 : var_7)) ^ var_1)) & (((((min(var_6, 1919226589415285073))) ? 16527517484294266542 : (min(826406439, var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((((arr_3 [1] [1] [1]) ^ (((arr_4 [i_0]) ^ var_1)))) ^ (((+((((arr_4 [i_0]) >= 3434631639377314847))))))));
                var_16 = (arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_0] &= 16527517484294266553;
                            arr_11 [i_0] [i_0] = ((!(arr_0 [i_0])));
                            var_17 -= ((3434631639377314847 ? ((((!(arr_3 [i_0] [i_0] [i_0]))))) : (max(2316292459653396307, (arr_4 [i_1])))));
                            arr_12 [i_0] [i_0] [8] [i_0] = (((((((max((arr_9 [i_0] [i_1] [i_0] [0] [5]), -1))) ? var_10 : ((((var_2 >= (arr_5 [i_0] [i_0] [i_2] [i_2])))))))) || ((var_4 == (arr_4 [i_1])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_24 [i_4] [i_4] = var_11;
                            arr_25 [i_4] [i_4] [0] [i_4 + 1] [6] [i_4] = arr_19 [i_4] [i_5];
                            var_18 = ((((min((arr_15 [i_6]), var_4))) || -306242626));
                        }
                    }
                }
                arr_26 [i_4] [i_4 - 2] = ((!((min((-2147483647 - 1), 15587047633212634972)))));
                var_19 = (((0 ? 0 : (min((arr_13 [i_4 + 1] [i_5]), (arr_18 [i_4 - 1] [i_5]))))) << ((((-914102981 ? 306242625 : 4838397311297458062)) - 306242616)));
            }
        }
    }
    var_20 = var_0;
    var_21 = (((((var_5 ? (0 & -1) : var_12))) == (1362852932 / var_5)));
    #pragma endscop
}
