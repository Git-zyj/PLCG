/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((((65524 ? 7484908964451493642 : 1))) ? ((1 ? 3 : 1)) : 1)), ((((1 ? -30618 : 3106039238))))));
    var_17 = (15282321880548083111 ? var_11 : -6850967603744241265);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((((0 ? 1727064001 : 65494))) ? ((-53 ? 9895690602576901151 : -1727063983)) : (max((!45043), (max(1509180084, 18238229690513540482))))));
                    var_18 = ((-((1 ? 20495 : 1192093789))));
                    arr_9 [i_0] &= (min((((111 ? 200 : -30618))), (max(4307511881149303635, 3689706910))));
                    var_19 = 1727064001;
                }
            }
        }
    }
    #pragma endscop
}
