/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((94 ? 49127 : 4294967293)))) ? 9936345918880599638 : (-2147483647 - 1)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (max(var_16, (((-((-((7894624795094979795 >> (49118 - 49082))))))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 = (max(var_17, (((-((-var_10 ? var_8 : var_13)))))));
            var_18 = 16510;
            var_19 = ((((48999 ? 16399 : var_4))));
        }
        var_20 = (max(var_20, (((((max(((var_7 ? 48974 : 2960480174507606998)), 76))) && 9)))));
        var_21 = (((min(var_13, (!1365442145))) != var_3));

        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] = 16408;
            arr_9 [i_0] = (((16390 <= 14261) ? ((17080 | (-339398596 < 339398580))) : 228));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_22 = (min(var_22, 1365442122));
            var_23 = (max(var_23, ((((((!11798666450839262973) && -763238594)) && ((((!18446744073709551591) ? ((var_8 ? 8733112365416118576 : var_12)) : (!var_10)))))))));
            arr_13 [i_0] [i_0] = (((-var_3 ? 14259 : 1)));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_16 [i_0] [i_4] = ((11 | (-339398593 || -563037172)));
            arr_17 [i_0] [i_4] [i_0] = ((-((-563037179 ? (1 * 1) : -17069))));
            arr_18 [i_0] [6] [i_0] = (((!-339398605) || ((((!-17090) ? -22034 : (268431360 && -339398615))))));
            var_24 = ((((17071 * (244 == -1))) >> (((~-4237590997) - 4237590990))));
        }
    }
    #pragma endscop
}
