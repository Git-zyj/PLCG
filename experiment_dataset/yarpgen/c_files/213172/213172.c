/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(((((((-2005870413 ? 14707 : -14708))) ? (max(1, -5083476608546368026)) : (min(1819878888455539606, -14684))))), (max((323546502 * 10549059073865214099), ((max(1819878888455539606, 1913548575))))))))));
    var_17 = (max(var_17, (max((((!((max(14693, 3372736432792084525)))))), (max(((0 ? 8317 : (-32767 - 1))), ((323546502 ? -2 : -14693))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_18 -= (min((min(((4294967294 ? -5252182485794656225 : 4)), 1)), ((((((1 ? 0 : 217))) ? (((-32767 - 1) ? -7660 : -13)) : 0)))));
                var_19 = (min(var_19, ((min(((58 + ((149 ? 32767 : 161)))), (((max(458107416, (-32767 - 1))))))))));
                arr_5 [i_0] = ((((min(((12 ? -7641 : 32429)), (0 | 1))) + 2147483647)) << ((((((~((max(1, 135))))) + 143)) - 7)));
                arr_6 [i_0] [i_0] = 3836859874;
            }
        }
    }
    #pragma endscop
}
