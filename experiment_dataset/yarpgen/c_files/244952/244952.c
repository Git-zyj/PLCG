/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_6, var_3));
    var_11 = (((((max((!118), var_0)))) <= (((-5970461379339018343 != -2) ? var_3 : 26))));
    var_12 = ((((((((14 ? 236 : 4068))) ? (((4 ? 1901943711 : 227))) : (min(4271623852810364866, 36))))) - (((((268435455 ? 127 : 13141970585624873742))) ? ((1 ? 11814482192887849266 : 254)) : (((50061 ? 1095457150 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (min(((((min(236, 9))) ? ((1095457165 ? 145 : -5970461379339018343)) : (!50876))), ((((((56 ? 0 : 18075))) ? (4 && -5970461379339018358) : (!208))))));
                            var_14 = ((227 ? -140 : ((((((0 ? 14636 : 3349186356))) && (((4294967292 ? 8681205181753819292 : 98))))))));
                        }
                    }
                }
                var_15 = (min(var_15, ((-(3762244891027711960 / 237)))));
                var_16 ^= 12;
            }
        }
    }
    #pragma endscop
}
