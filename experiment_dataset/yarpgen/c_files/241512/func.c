/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241512
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
    var_15 *= ((/* implicit */unsigned int) -918029221664957224LL);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_16 = ((unsigned int) (~((-(0U)))));
        arr_3 [i_0 + 1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 918029221664957209LL))) ? ((~(arr_5 [i_1] [i_1]))) : (((arr_5 [i_1] [i_1]) / (((/* implicit */long long int) var_9))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) var_2)) : (max((max((arr_4 [12ULL] [i_1]), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) ((_Bool) arr_0 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_19 &= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_4 [i_2] [i_2])));
        arr_10 [i_2] = ((/* implicit */unsigned int) arr_5 [i_2] [i_2]);
        arr_11 [i_2] = arr_5 [i_2] [i_2];
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (_Bool)1)), (max((-7715163224003480333LL), (((/* implicit */long long int) arr_0 [i_2]))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned int) (+(((((/* implicit */_Bool) arr_5 [i_2] [11LL])) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) var_2))))))))));
    }
    var_21 = ((/* implicit */signed char) ((unsigned long long int) min(((-(var_1))), (((/* implicit */long long int) var_4)))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((signed char) ((unsigned int) (+(arr_1 [i_3])))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [1U])) ? (min((((unsigned int) -16777216)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3])))))) == (arr_0 [i_3])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */long long int) 287829403U)) : (arr_9 [i_4])))));
        arr_18 [i_4] [i_4] |= ((/* implicit */short) (((+((+(18446744073709551591ULL))))) | (((/* implicit */unsigned long long int) (~(((long long int) 4294967295U)))))));
        var_24 -= arr_14 [i_4] [i_4];
    }
}
