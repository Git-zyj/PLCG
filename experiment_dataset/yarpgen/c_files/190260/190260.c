/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min((((max(var_9, 18422524374937561056)) - (4076312221227176795 & 4076312221227176795))), ((((var_10 == var_10) >> (((121 + var_9) - 19798)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 ^= 149;

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_20 = (((((var_6 ? var_1 : 17592186044160))) ? ((var_14 ? 514001744 : 17592186044141)) : (var_17 >= 107)));
                        var_21 = (max(var_21, (((((min(var_1, 8176))) ? 17592186044164 : ((((((1 ? var_1 : 3780965551))) ? (min(514001745, 9223372036854775807)) : (((var_10 ? var_6 : 1)))))))))));
                    }
                    var_22 = ((6993 % (max(((var_9 ? var_2 : var_10)), ((min(var_4, 514001744)))))));
                }
            }
        }
    }
    var_23 = (max((((-1 | 0) ? (((var_8 ? var_14 : 3780965552))) : (~5127540005251110814))), ((((((var_0 ? 2029341512 : var_2))) ? ((var_1 ? var_17 : var_9)) : var_15)))));
    var_24 = (min(var_24, ((min(var_12, ((((max(var_1, 32757))) ? (max(31, var_11)) : var_6)))))));
    #pragma endscop
}
