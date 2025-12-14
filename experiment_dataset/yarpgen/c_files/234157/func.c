/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234157
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
    var_16 ^= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-13268))))), (var_6))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((5196355885396593140LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) -2732601843542554821LL)))) || (((/* implicit */_Bool) arr_2 [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)0)) | (134217727))) % (((/* implicit */int) (signed char)-4)))))));
        var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */long long int) ((int) (unsigned short)65535));
        arr_10 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)-5)), (((((/* implicit */long long int) ((int) (signed char)16))) | (5196355885396593153LL)))));
        var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (signed char)-5)), (arr_5 [i_1]))) % (((arr_5 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        arr_11 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)4))) / (-5196355885396593141LL))))));
    }
    var_21 = var_12;
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_4))));
}
