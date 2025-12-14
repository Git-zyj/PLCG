/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40974
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
    var_12 = var_8;
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_2 [i_0 - 1] [i_0 + 2])))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0 + 2])))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) var_1);
    }
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((signed char) (-(((/* implicit */int) arr_0 [i_1]))))));
        var_15 = ((/* implicit */int) 14181494030223444478ULL);
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_9 [i_2 + 3] [i_2])))) * (((arr_9 [i_2 + 1] [i_2 - 1]) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 3])) : (((/* implicit */int) var_0)))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min(((((_Bool)1) ? (4265250043486107122ULL) : (14181494030223444502ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_2]))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) arr_9 [i_2 + 3] [i_2 + 3]);
        arr_11 [i_2 - 1] [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15824999576744928565ULL)) ? (((((/* implicit */_Bool) arr_7 [i_2 - 1] [(unsigned char)0])) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 2])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned short) arr_8 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) (-(3612569889684021464LL)))) / (max((((/* implicit */unsigned long long int) arr_7 [i_2 + 2] [i_2 + 2])), (var_3)))))));
    }
    var_18 |= ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */_Bool) (short)15552)) ? (var_3) : (((/* implicit */unsigned long long int) var_10)))) << (((((2363184155U) << (((var_11) - (3746144423U))))) - (2204106716U))))));
    var_19 ^= ((/* implicit */unsigned char) (signed char)-62);
}
