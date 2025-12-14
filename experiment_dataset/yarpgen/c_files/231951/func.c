/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231951
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
    var_19 = ((/* implicit */int) (+(min(((+(5840508683388006248ULL))), (((/* implicit */unsigned long long int) min((var_14), (5055351337650339797LL))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 2] [i_0 + 2])))));
        var_20 = ((/* implicit */int) 18014398509481983LL);
        arr_5 [i_0 - 1] [i_0] = 4;
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(var_18))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        arr_8 [i_1] [i_1] = (+(var_12));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [2LL])) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 4)) && (((/* implicit */_Bool) var_1))))) << (((min((arr_0 [15ULL] [i_1]), (3833701249693040620LL))) + (5362951154253909074LL)))))) : ((+(5197299955271375678LL)))));
        arr_10 [i_1] [i_1] = (-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) -4)) : (arr_1 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */int) ((arr_13 [3LL] [7ULL]) < (((/* implicit */long long int) ((int) ((5610381692007217732ULL) << (((-3371932369088422439LL) + (3371932369088422484LL)))))))));
        var_24 ^= ((/* implicit */int) min((max((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) -1))))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) var_0)) : (18302257018995438578ULL))))), (((/* implicit */unsigned long long int) ((arr_2 [i_2]) << (((((arr_3 [4ULL]) + (825318774))) - (31))))))));
        var_25 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_11 [i_2])) && (((/* implicit */_Bool) (+(var_0))))))));
        var_26 = (+(min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        arr_17 [1ULL] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3833701249693040631LL))));
        var_27 = min(((-(var_9))), (((unsigned long long int) ((((/* implicit */_Bool) -1918192374)) ? (((/* implicit */unsigned long long int) arr_7 [i_3])) : (8804803054023367346ULL)))));
    }
    var_28 = ((/* implicit */int) var_2);
}
