/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_14 = min(((((((2097151 ? 35175782154240 : 2097142))) || (((2100965097 << (-2097134 + 2097147))))))), ((-2580903457978594351 ? -1470849841 : -2580903457978594355)));
                var_15 = (min(var_15, (((((-2580903457978594355 ? 133 : -2097146)) / (((((1 ? 3 : -49))) ? ((max(23417, 25888))) : 1)))))));
            }
        }
    }
    var_16 = var_9;
    var_17 = (((((((4294967282 >> (var_5 - 7849333799464776887)))) ? 2097111 : (min(-1862698484, -960357830)))) >> var_3));
    #pragma endscop
}
