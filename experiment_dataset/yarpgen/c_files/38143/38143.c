/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 = (min(((-((1 * (arr_0 [1] [1]))))), (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_15 = (((arr_4 [i_0] [i_0] [i_0 - 1]) ? ((((((arr_6 [i_0] [11]) ^ 9034)) < (max(32758, 133693440))))) : (arr_4 [i_0] [i_0] [i_1])));
            arr_7 [i_0 + 3] = ((133693457 * (((!(~var_7))))));
            var_16 = ((((64513 ? 1 : 65)) < (arr_3 [i_0 + 3])));
            var_17 = (arr_2 [4]);
            arr_8 [21] [21] = ((~((-32762 ? (((arr_1 [i_1]) ? (arr_4 [i_1] [i_0] [21]) : -32762)) : (max(133955584, -137080537))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_13 [i_0 + 2] [i_2] = ((!(((7380 ? 0 : -370172906)))));
            arr_14 [i_0] [i_2] [i_2] = min(0, -133693445);
            var_18 = (!((((((0 ? 50081 : 51946))) ? ((-32752 ? 10452 : (arr_4 [i_2] [i_2] [i_2]))) : 0))));
        }
        var_19 = (max((max((max(0, var_1)), (!10309835516650195663))), ((((min((arr_4 [0] [i_0] [i_0 + 1]), (arr_3 [i_0])))) ? (max(var_4, 6561566810590015736)) : (arr_0 [i_0] [i_0])))));
    }
    var_20 = max((((!((max((-32767 - 1), 1)))))), ((var_13 ? var_5 : (var_3 <= 4456555502114081573))));
    #pragma endscop
}
