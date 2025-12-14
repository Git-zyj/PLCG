/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229017
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), (3109587032U)))));
    var_11 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1185380284U))))), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) & (arr_1 [i_0]));
    }
    for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1]))))))));
        var_14 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1]))))))) ? ((~(2771217274701812359LL))) : (((/* implicit */long long int) ((int) min((arr_4 [i_1 - 1]), (((/* implicit */signed char) (_Bool)0)))))));
        var_15 += ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)114))));
        arr_6 [i_1] = min(((+(((long long int) (unsigned char)21)))), (((/* implicit */long long int) 1)));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-113)))))))), (max((((2488877597U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))), (((/* implicit */unsigned int) ((signed char) arr_0 [i_2] [i_2])))))));
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_2] [i_2])), (arr_8 [i_2] [8LL])))) ? (min((min((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_1 [i_2]))), (((/* implicit */unsigned long long int) arr_4 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_2]))))));
    }
    var_17 = ((/* implicit */unsigned int) min((((int) max((var_5), (((/* implicit */unsigned long long int) 5048773020154898454LL))))), (((/* implicit */int) var_4))));
    var_18 = ((/* implicit */long long int) (signed char)55);
}
