/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205493
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
        var_16 = ((/* implicit */short) max((var_16), (var_10)));
        var_17 = (short)(-32767 - 1);
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((unsigned char)56), ((unsigned char)200)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (4471377895363593288ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)39)), (-1))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) var_4)))));
        var_20 *= ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (max((130023424), (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        arr_9 [i_2 - 1] [i_2 + 2] = ((/* implicit */long long int) (-(var_12)));
        arr_10 [i_2 - 1] = ((/* implicit */unsigned short) min(((-((~(((/* implicit */int) (signed char)43)))))), (((/* implicit */int) var_8))));
        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_8 [i_2 + 1])) - (4471377895363593288ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [(_Bool)1])))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((short) ((unsigned long long int) arr_13 [i_3]))))));
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_3]))));
        arr_14 [(unsigned char)0] = ((/* implicit */unsigned short) ((unsigned char) ((arr_12 [i_3]) % (((/* implicit */int) arr_11 [(unsigned short)21])))));
    }
    var_24 = ((/* implicit */unsigned short) var_11);
    var_25 = ((/* implicit */signed char) (-((~((~(-130023425)))))));
}
