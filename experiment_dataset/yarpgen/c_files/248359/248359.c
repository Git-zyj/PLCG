/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((4110311024 ? 3888 : 64402857))) < ((-3889 ? 3353803031 : -5))));
                var_19 = ((((((((36318 ? (-9223372036854775807 - 1) : 36321))) ? (max(18920, 9)) : (min(1255301379, 22))))) ? ((4 ? (12 >> 1) : (((36328 ? 0 : 7))))) : ((((max(502778926, 16860706677826504642))) ? (min(2913530996, 8)) : (((min(36328, 0))))))));
                arr_6 [i_1] = ((((max((29207 / 246), (1854338881 / 18920)))) ? ((((max(21, -4783))) ? (min(8, 3)) : (((min(12, 16)))))) : ((~((1615420771 ? 1381436300 : 8))))));
                var_20 = (max(((((min(17760902, 17760902))) ? (max(2663715343, 502778908)) : ((min(15, (-2147483647 - 1)))))), (((246 >> (((((-2147483647 - 1) ? 24660 : 134217696)) - 24649)))))));
            }
        }
    }
    var_21 ^= (((((!(15 >= 124))))) >= ((46615 ? 58616 : 1729589806)));
    #pragma endscop
}
