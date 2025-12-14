/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20806
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)197)), (var_5)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11473))) / (var_0)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) >= (max((var_0), (((/* implicit */unsigned long long int) 1500530696U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        var_12 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) 2147483647)), (1500530699U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        var_13 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-81))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 3]))) : (arr_7 [i_1 + 2]))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) (-(arr_10 [(short)6])));
        arr_13 [i_2 - 1] [i_2 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) : ((((_Bool)1) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28238)))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_2 - 1])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 - 1])))))) : (var_2))))));
        arr_14 [i_2] = (~((((_Bool)1) ? (1253858486851041741ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)11)))))));
    }
}
