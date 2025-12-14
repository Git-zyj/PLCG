/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1575987516;
    var_19 &= ((-16972 % (min((min(959056453, 2185)), (~10088)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((268427264 & (((((15242 ? 21761 : 55448))) ? (~1575987516) : (2718979787 | 16437546912263933164)))));
                arr_6 [i_0] [i_0] [i_0] = ((270215977642229760 && ((((21761 % 8168) << (18176528096067321855 - 18176528096067321848))))));
            }
        }
    }
    var_20 = (max(var_20, (min(16361714962119317605, (((-(min(9223372036854775807, 55469)))))))));
    var_21 = -731544055499787786;
    #pragma endscop
}
