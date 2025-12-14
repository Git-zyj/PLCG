/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (17648405262100004698 || (0 * 192));
    var_11 = (1 | 76);
    var_12 = ((((((-127 - 1) ^ 1)) * ((min(2398, 237))))) == (2369 || 1));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 = (185 ^ 24);
        arr_3 [i_0] = (7 && -3784886631524129237);
        arr_4 [i_0] = (min((min((max(240, 3784886631524129258)), 27195)), ((max(-112, (-23249 & 2147483647))))));
        var_14 = (((63 <= 113) / ((((max(63, 1))) | -105))));
        arr_5 [i_0] = max((((3784886631524129236 ^ 60) && ((max(11, 1))))), (1964268523 < -1964268506));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = -54;
        var_15 = ((-10 / (max(-1964268513, 80))));
        arr_9 [i_1] [i_1] = 24723;
    }
    #pragma endscop
}
