/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 17583596109824;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_12 = 0;
                        arr_11 [i_0] [i_1 - 2] = (-44 + (arr_7 [i_1] [i_0] [i_1 - 2] [i_1 - 1]));
                        var_13 = (min(var_13, (((((((arr_9 [i_0 - 3] [i_0 - 3] [i_1]) ? (arr_0 [i_1 - 2]) : -7273485217768241647))) ? 1073479680 : (arr_7 [i_3] [i_3] [i_3] [i_0]))))));
                        var_14 = (((((var_8 ? 53 : (arr_8 [i_0] [i_0] [i_2] [i_3])))) ? (arr_1 [i_1 - 2] [i_3]) : (~2941815247)));
                    }
                }
            }
        }
        arr_12 [i_0] = (((arr_5 [i_0]) ? (arr_5 [i_0]) : var_8));
        arr_13 [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_15 ^= (arr_7 [i_0] [2] [i_0 - 2] [i_0 - 1]);
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_16 &= ((~(max(((max(1353152055, 16515072))), (arr_5 [i_4])))));
        var_17 ^= var_7;
        arr_17 [i_4] = (arr_8 [i_4] [i_4] [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_18 = (((arr_19 [i_5] [i_5]) > ((1941694069 ? (46979 || 0) : 2597923281))));
        var_19 = (min(var_19, 4294967295));
        var_20 = (min(var_20, (((((max(-61, 233739256))) ? (arr_18 [i_5]) : (max(var_2, (17519554777335177170 / -1438748251))))))));
    }
    var_21 = (((((!1941694056) ? (~var_5) : (1 >> var_2))) == (+-4061228039)));
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_34 [i_8] [i_7] [i_7] [i_9] [i_9] = max(2941815247, 1697044017);
                                arr_35 [i_8] [i_6] [i_8] &= var_1;
                                var_22 = ((-1 ? ((min(233739268, 233))) : ((2597923281 ? (arr_29 [i_7 + 2] [i_7 + 3] [i_7 - 1] [i_7]) : (arr_29 [i_7 + 3] [i_7 - 1] [i_7 - 1] [i_7])))));
                                var_23 = ((!((min(233739268, (~5106029019115457847))))));
                            }
                        }
                    }
                    var_24 = (((((48 * ((min((arr_32 [i_6] [i_7]), (arr_26 [i_6] [i_7] [i_7] [i_8]))))))) ? (!-116) : (min((((arr_24 [i_7] [i_7]) ? 233 : 3193265540685759216)), 5106029019115457847))));
                }
            }
        }
    }
    #pragma endscop
}
