/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_9;
    var_15 = (max(53, -3480));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_16 = 205;
            var_17 = (max(((max(-8, 216))), (min(654402612, 242))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_18 = (max(var_18, ((min((min(3942621696, -2088030847)), ((min(40, 28))))))));
            var_19 = (min(((min(17, 1))), (max(1, (min(9223372036854775793, 5999204774502791134))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_20 = 37;
                        var_21 = -9223372036854775794;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_22 = max(369550513115226147, 39);
            var_23 ^= 654402612;
            var_24 = 3350827923679292129;
            var_25 = (max((max(1, 16765140606529592957)), (max(3578789608640985051, 103))));
        }
        var_26 *= (min(((max(215, -9617))), 4156840023));
        var_27 = 15534593026493475789;
    }
    #pragma endscop
}
