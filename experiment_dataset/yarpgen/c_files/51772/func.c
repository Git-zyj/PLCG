/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51772
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((unsigned long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)61284))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_17 += ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)55043)), (3425331115U)))), (arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (arr_2 [i_0 + 1] [i_0 + 1]))));
        var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((14407784571361420289ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) == (((/* implicit */int) arr_0 [i_0 + 1]))))) : (((((/* implicit */_Bool) 2585496836U)) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0])))));
        arr_4 [i_0] [11LL] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 6802172354369357536LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (1728589481358226074ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) << (((((((/* implicit */int) var_3)) + (148))) - (22))))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((arr_6 [i_1]) + (1247654601)))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14)))));
        var_19 = (((((+(arr_1 [i_1] [i_1]))) + (2147483647))) >> (((((/* implicit */int) (short)19038)) - (19015))));
        arr_10 [i_1] [i_1] = var_7;
    }
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        arr_15 [i_2] [i_2 + 1] = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) (short)-19046)) ? (arr_14 [i_2]) : (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) -1307748979)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_14 [i_2])))))));
        var_20 = ((/* implicit */signed char) ((((unsigned int) arr_13 [i_2 - 1] [(signed char)14])) << (((((((/* implicit */_Bool) 13422257565686587873ULL)) ? (4038959502348131327ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19052))))) - (4038959502348131314ULL)))));
        arr_16 [i_2] = ((/* implicit */int) max((((3425331115U) << (((4038959502348131333ULL) - (4038959502348131325ULL))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_0 [i_2])) >> (((arr_1 [i_2 - 2] [i_2 - 2]) + (1788020167)))))))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) (short)13562)))) * (((arr_1 [2LL] [i_2 + 1]) / (arr_1 [i_2 + 1] [i_2 + 1]))))))));
    }
    var_22 = ((/* implicit */long long int) var_14);
}
