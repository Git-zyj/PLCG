/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = (max((((-127 - 1) ^ ((~(-32767 - 1))))), ((((!0) || (-3696 || 15416989403175885570))))));
        arr_4 [i_0 - 1] [i_0] = (((-15416989403175885557 ? ((2640844325 ? 32761 : 3029754670533666060) : (((1 ? 1654122970 : -443805195573757674)))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_12 = (max(var_12, ((max((((1654122973 ? (2640844325 > -32745) : -90))), 1654122978)))));
        var_13 = (((((1654122970 ? 255 : 108))) + 15416989403175885570));
    }
    #pragma endscop
}
