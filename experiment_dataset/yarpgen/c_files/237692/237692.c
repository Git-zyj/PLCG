/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((-((96671910 ? -3064218639311278642 : var_3))))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_11 = (((((248 ? var_4 : var_1))) ? 199 : ((var_3 ? 3945693540 : 0))));
            var_12 = (var_8 * var_7);
        }
        var_13 = var_5;

        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            var_14 = ((((max((~var_3), ((1 ? var_2 : var_1))))) ? (max(var_6, ((75 ? var_2 : var_2)))) : 1));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        {
                            var_15 = max((((~((var_9 ? 0 : var_5))))), (~-9223372036854775800));
                            var_16 = (min(var_16, ((((((-86 ? var_8 : var_9))) ? (((8803038361679113296 ? var_1 : var_1))) : -1986853784463853038)))));
                            var_17 = (max(var_17, var_9));
                        }
                    }
                }
                var_18 = (min((((78 ? -10 : var_0))), ((1986853784463853023 ? (((1 ? var_8 : -1))) : (min(1, -1))))));
            }
        }
    }
    var_19 = (max(var_19, (((((((!var_7) ? (min(6, 0)) : var_3))) ? (((((min(var_6, var_4))) + ((var_5 ? var_9 : var_8))))) : (min(280375465082880, ((var_5 ? -65 : 10880942886081901709)))))))));
    #pragma endscop
}
