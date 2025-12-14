/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (max(var_14, (((((((arr_2 [i_0]) ? ((-31474 ? 22242 : (arr_2 [i_0]))) : -10973))) ? (!10994) : ((6838214915384522448 ? 75 : -504829100)))))));
        arr_3 [i_0] = (((arr_2 [i_0]) != ((10964 ? 255 : -10975))));
    }
    var_15 *= (((10972 <= -10970) >= ((min(-10954, ((max(0, 127))))))));
    #pragma endscop
}
