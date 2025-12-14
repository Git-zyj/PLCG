/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((((((arr_2 [i_0]) ? (arr_4 [i_0]) : (arr_0 [i_0] [i_1])))) ? (arr_5 [i_0] [i_1] [i_0]) : (((arr_1 [i_0]) ? (arr_4 [i_1]) : (arr_2 [i_0]))))) == ((((1190122028 != (1073741823 % 18446744072635809809)))))))));
                var_11 -= (arr_1 [i_1]);
                arr_6 [i_0] [i_1] = ((((min((((arr_3 [i_1] [i_0] [i_0]) ? 58175 : 11)), var_2))) ? (max(((((arr_5 [i_1] [i_0] [i_0]) ? (arr_3 [i_1] [i_1] [i_1]) : -38))), (max(18446744072635809792, (arr_1 [i_0]))))) : (1073741817 <= 18446744072635809798)));
                arr_7 [i_1] = ((2201227468 == (-2147483647 - 1)));
            }
        }
    }
    var_12 = ((((var_3 == ((-9092494702262112730 ? 1073741805 : 1073741806))))));
    var_13 = (((156 ? 1 : 12115484963577484171)));
    var_14 = (var_0 ? ((((!((max(var_9, var_3))))))) : ((var_0 ? var_1 : -12)));
    #pragma endscop
}
