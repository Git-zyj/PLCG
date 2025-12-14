/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((-9223372036854775807 - 1), (((1 * (max(3275654684, -1734055790)))))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_21 += (arr_4 [i_0 - 4] [i_0 - 4]);
            var_22 = ((7921996380845183287 ? -1019312641 : (((-5543345409407834964 / 242) / (17617743310569653046 / 1019312611)))));
            var_23 -= 127;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_24 = (arr_4 [i_2] [i_0]);
            var_25 += (max(((13267381508948468588 ? 2 : 7877112611255728921)), -32752));
            arr_8 [i_0] [i_2] [i_0] = ((-46 ? 19184 : -1));
            var_26 = (max(14871, 86));
        }
        var_27 = (min(10569631462453822701, (arr_7 [i_0] [i_0 - 3])));
        var_28 = ((7507184359975596103 ? 0 : 125));
        var_29 = (((65509 ? 1869076767 : 10569631462453822695)));
        var_30 = (((arr_0 [i_0]) ^ -18914));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_31 = (2091536626 | 18446744073709551615);
        arr_13 [i_3] |= -19185;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_32 = 37110;
        var_33 = (((((((max(1, (arr_4 [i_4] [i_4])))) ? 1 : ((1 ? 4194303 : 1))))) | 1048575));
        var_34 = (min(var_34, ((max((65535 - 4293918721), 14889)))));
    }
    #pragma endscop
}
