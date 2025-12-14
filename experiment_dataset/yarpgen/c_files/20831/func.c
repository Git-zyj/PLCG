/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20831
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) < (arr_0 [i_0])))) == (((/* implicit */int) arr_1 [i_0] [i_0]))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) - (6609)))));
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((short) var_9)))));
        var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */_Bool) (short)32767)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2202))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15022)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_5 [i_1] [i_1]))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (470062943929466875ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1]))))))))));
        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((short) arr_3 [i_1]))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned short)29649))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_14 &= ((/* implicit */_Bool) var_3);
    }
    var_15 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((max((var_4), (((/* implicit */unsigned long long int) (signed char)17)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767)))))))))));
    var_16 -= (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61049)) && (((/* implicit */_Bool) var_3))))));
}
