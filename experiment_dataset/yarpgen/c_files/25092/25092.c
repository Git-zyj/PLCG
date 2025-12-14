/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((52 ? 1119935313 : -92));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_17 += (((!1) ? 65510 : ((1 ? -1119935324 : (~124)))));
                        var_18 += ((~((0 ? (93 != 1) : ((1119935313 ? 1 : 94))))));
                    }
                }
            }
        }
        var_19 = ((!((!(1 << 1)))));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_20 &= ((((255 ? 0 : -1))));
        var_21 = ((((123 >= (!0))) ? 1447650540 : (((((127 ? 253 : 134217727))) ? -2084075662 : 1))));
    }
    var_22 = (((-1959407326 ? (~81) : ((1958636209 ? 1 : 1)))));
    var_23 = (((~-89) ? (((((1 ? 2517619708 : 1958636209))) ? 8932072397236587596 : (!1813282059))) : -1500071130));
    #pragma endscop
}
