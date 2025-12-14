/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-2133567775745026887 + 9223372036854775807) >> (2133567775745026887 - 2133567775745026887)));
    var_17 += (((6762574590502968292 >= -6762574590502968289) || (((4398974795180937135 >> ((((var_15 >> (var_8 + 3263183556452891899))) - 2542)))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = (min(var_18, ((max((max(-8961830213192510045, (arr_1 [i_0 + 1]))), ((min(1, 2190841302))))))));
        var_19 = (((((+(((arr_2 [2]) ? var_12 : (arr_0 [i_0])))))) ? (((arr_0 [i_0 + 1]) ? 2190841308 : (-2133567775745026888 ^ var_1))) : (((126 >> (((((arr_0 [i_0]) ^ (arr_2 [i_0 + 1]))) + 8292)))))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 - 1] [i_1] = (!2190841287);
        arr_6 [i_1] = (arr_3 [i_1] [i_1]);
        arr_7 [13] [i_1] = ((-var_1 << (arr_3 [i_1 + 2] [i_1])));
        var_20 ^= -4787865477706267962;
        var_21 |= ((var_15 ? (((((min((arr_3 [i_1 - 2] [11]), var_6))) ? ((((arr_3 [i_1] [i_1]) >= (arr_4 [i_1])))) : (((-6762574590502968303 || (arr_3 [12] [12]))))))) : (min(var_11, 1))));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_22 = -var_2;
        var_23 = (var_3 * var_12);
    }
    #pragma endscop
}
