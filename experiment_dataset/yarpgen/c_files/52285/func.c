/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52285
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] &= ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_11 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((unsigned char) var_4))))) == (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_1] [i_1])), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)49)) & (((/* implicit */int) (signed char)111))))) ? (((/* implicit */int) max(((signed char)-111), ((signed char)116)))) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) max(((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (3866284347U))) >> (((((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (arr_7 [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (12935447424393166706ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_9)))))))));
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_4 [i_2 - 1]))) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((arr_7 [i_2 + 1] [i_2 + 1]) == (((/* implicit */unsigned long long int) arr_4 [i_2])))), (((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) var_1))))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-1294996791), (((/* implicit */int) arr_8 [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2])) ? (((/* implicit */int) ((signed char) arr_8 [i_2]))) : (((/* implicit */int) (signed char)102)))) : (((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1)))) : (((/* implicit */int) arr_8 [i_2 + 1]))))));
        arr_10 [i_2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) || (((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1])))));
    }
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_7)), (min((var_0), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) (short)27867)))))))));
    var_17 = ((/* implicit */unsigned int) ((-5645819624259306092LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-7023)))));
    var_18 = ((/* implicit */_Bool) (((((+(((/* implicit */int) (signed char)49)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) <= (4148525431U)))))) + (var_9)));
}
