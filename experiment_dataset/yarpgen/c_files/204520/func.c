/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204520
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
    var_14 = ((/* implicit */_Bool) 10723079218502566466ULL);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (10723079218502566466ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3546752037U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))) : (var_8)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)148))) : (var_4))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 - 1] [i_0]);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((unsigned short)15531), ((unsigned short)65387)))), (min((var_4), (var_4)))));
        var_16 = ((/* implicit */short) var_11);
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (max((max((((((/* implicit */_Bool) 10723079218502566466ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))))), (((/* implicit */unsigned int) 1235816242)))), (((/* implicit */unsigned int) ((((536870911) >= (((/* implicit */int) (unsigned short)50963)))) ? (((/* implicit */int) max((arr_4 [i_2]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (unsigned char)255)))))))));
        var_18 |= ((/* implicit */_Bool) max((((long long int) arr_5 [i_2] [0LL])), (((/* implicit */long long int) ((unsigned int) min(((unsigned short)40351), (arr_5 [(_Bool)1] [(_Bool)1])))))));
    }
}
