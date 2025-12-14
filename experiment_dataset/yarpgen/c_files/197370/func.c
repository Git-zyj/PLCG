/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197370
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
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_16);
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) (short)7273)) < (((/* implicit */int) ((_Bool) 2ULL))))))));
        arr_5 [i_0] = ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]));
        arr_6 [i_0 + 2] = ((/* implicit */unsigned long long int) ((18446744073709551607ULL) > (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_1])) ^ (((/* implicit */int) var_15))))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 10694930646941121158ULL)) ? (4194303U) : (4055840936U))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(arr_1 [i_1])));
        arr_10 [i_1] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) | (arr_2 [i_1] [i_1])))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) | (-1820402725)))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_2]))) ? ((-(63U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_12 [i_2 + 1]))))))))));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_11 [i_2] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))))) ? ((-((-(((/* implicit */int) arr_12 [i_2])))))) : ((-((-(((/* implicit */int) arr_0 [i_2] [i_2]))))))));
    }
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((var_13), (((/* implicit */unsigned char) (_Bool)1)))))) && (((/* implicit */_Bool) var_17))));
}
