/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!92);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 = 1;
        var_21 *= (!((((64050 ? -374921008 : -9223372036854775807)) < 1)));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_22 += 0;
                        var_23 ^= (((max(812645372, -2796998410304385048)) * (215 - 1)));
                        var_24 = ((125 ? (((!(!62)))) : (1 < 992)));
                        arr_11 [i_1 + 1] [i_1] [i_1] [i_1 + 3] [i_1] [i_3] = max((-2147483647 - 1), (((((2031694176585798465 ? 255 : 41336))) ? (~16) : (-635406826 & 7810))));
                    }
                    arr_12 [i_3] [21] [i_3] = (-((2920801060 ? (!140903268) : -680172099)));
                    var_25 &= (min(262143, 1));
                    arr_13 [i_3] = ((-14974449564765146324 - ((((!0) ? (!1434539586) : 304957697)))));
                    arr_14 [i_3] = 0;
                }
            }
        }
        var_26 = ((-128 < ((65535 ? (-2147483647 - 1) : 7274802159299554172))));
    }
    #pragma endscop
}
