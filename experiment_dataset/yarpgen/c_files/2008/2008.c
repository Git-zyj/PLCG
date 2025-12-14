/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 59197));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 + 1] [i_0] = (max(-4985440338541080374, 59193));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = 12534;
                                arr_13 [6] [8] [6] [i_3] [6] [i_0] [i_3] = ((((((var_1 / var_9) ? ((2040348917 ? var_2 : -1225059008)) : (6311 / 12382)))) ? (((var_4 <= var_10) ? (arr_8 [i_0 - 3] [i_0 - 1] [i_1 + 1] [i_1] [i_1 - 1]) : (var_8 & var_0))) : (((((12383 <= var_9) && (arr_4 [i_0 - 2] [i_1] [i_1 - 1])))))));
                                var_12 = (((((var_2 ? (arr_3 [i_0]) : 65535))) ? ((16036181824234109505 ? (arr_11 [14] [i_1] [i_1] [i_1 + 2] [i_4] [i_1] [i_0 + 1]) : 9223372036854775807)) : ((-2382994029706481897 ? var_1 : -5592371665417217250))));
                                var_13 = (((11445911365185054657 ? 2147483647 : -2236846752202550967)) + (((!-7316421738206834242) ? (((arr_2 [i_0]) ? (arr_5 [14] [16] [12] [i_3]) : 9223372036854775802)) : (((arr_11 [13] [13] [i_1 + 2] [14] [i_1] [13] [i_1 - 1]) ? 1024496011 : (arr_2 [i_3]))))));
                            }
                        }
                    }
                    var_14 = (((((var_2 / var_4) ? ((3959 ? 30887 : -165075846571336459)) : 1193)) >= (min(((8339045437612058981 ? var_7 : (arr_7 [i_2] [i_2] [i_0 - 2] [i_1] [i_1] [i_0 - 2]))), ((((arr_4 [i_0] [15] [13]) ? var_10 : var_5)))))));
                    arr_14 [i_0] [i_0] = ((min((arr_7 [1] [i_0 - 3] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]), (arr_7 [i_0] [i_0 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1]))) + (((8386318264005478853 ? 511 : var_1))));
                }
            }
        }
    }
    #pragma endscop
}
