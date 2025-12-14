/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20007
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (var_7)))))));
        var_22 = ((/* implicit */unsigned short) var_8);
    }
    for (int i_1 = 3; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((min((var_11), (((/* implicit */long long int) -1422908248)))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14))))));
        arr_5 [i_1] = ((/* implicit */long long int) ((((var_7) >> (((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) + (8))))) != ((-(var_12)))));
        arr_6 [i_1] = ((/* implicit */signed char) var_11);
        var_24 -= ((/* implicit */short) var_8);
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) (-(((((((/* implicit */int) var_5)) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) + (var_0))) - (2779828194229176602ULL)))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_1))));
        var_27 = ((/* implicit */short) var_19);
    }
    var_28 = ((/* implicit */unsigned short) var_0);
    var_29 = ((/* implicit */signed char) var_12);
}
