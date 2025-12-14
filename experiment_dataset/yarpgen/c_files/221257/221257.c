/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [13] = (((!1) % (arr_0 [i_0])));
        arr_3 [11] [13] = ((9223372036854775781 << (((~-9223372036854775775) - 9223372036854775774))));
        var_12 *= (min(8121499186302394049, 134215680));
    }
    var_13 += (+-8121499186302394049);
    #pragma endscop
}
