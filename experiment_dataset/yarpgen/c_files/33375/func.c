/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33375
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
    var_18 = ((/* implicit */long long int) max((((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_8)))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)57588)) : (((/* implicit */int) (unsigned char)215)))))), (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) 1623519424)) + (2825494834330401202ULL));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((int) var_10))) ^ (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_17)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49966)) * (((/* implicit */int) (signed char)-127))))) ? (((var_6) & (arr_6 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_6 [i_1] [(signed char)17])))));
        arr_7 [i_1] = var_12;
        var_20 ^= ((/* implicit */short) max((arr_2 [i_1]), (((/* implicit */signed char) ((((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) >> (((arr_6 [i_1] [i_1]) - (9126340269353263658ULL))))) > (((/* implicit */int) (unsigned short)53385)))))));
        arr_8 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [12])) ? (((((/* implicit */int) (unsigned short)32767)) - (((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) ((unsigned char) 8465910191943164229ULL))))) > (-1623519452)));
    }
    var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (unsigned short)53385)), (1623519425))) / (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_9)) + (((/* implicit */int) var_10))))))));
}
