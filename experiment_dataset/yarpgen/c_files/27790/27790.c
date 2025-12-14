/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = ((((var_4 ? 0 : var_1))) ? (((((1 ? 1534475382 : 1757052210))) ? ((4294967274 ? -3882 : 712867974)) : (((0 ? -16 : -32766))))) : (((1945744105 == 8083) ? ((4 ? 4028468332 : 19903)) : ((1757052225 ? 3807352178 : 14)))));
    var_16 = (((((4 ^ 9) ^ (max(1135427747, 55082)))) <= ((32761 & (32767 * 3876155318)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max((min(768779134, (4294967289 + 55082))), ((0 ? 4294967274 : (((-10385 ? 43012 : (-32767 - 1))))))));
                arr_6 [i_0] [i_0] = 23214;
                var_18 = ((((((((65528 ? 65535 : -18204))) ? 5 : (17221 / 25491)))) ? ((max(40455, ((10394 ? 58142 : 12510))))) : ((3948699161 ? 14 : 2537915082))));
                var_19 = (((((-32767 - 1) ? 39441 : 4201041267))) ? (2537915091 % -13784) : 30254);
            }
        }
    }
    var_20 = (min(3071897469, 4294967295));
    #pragma endscop
}
