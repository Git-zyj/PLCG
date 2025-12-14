/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27689
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
    var_15 = ((((/* implicit */_Bool) ((unsigned long long int) 2679868107U))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))));
    var_16 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned short) var_3))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)-6508)) < (((/* implicit */int) (short)-32760)))))))) > (((long long int) (signed char)-12))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        arr_7 [i_1 - 2] = arr_6 [i_1 + 1];
        var_18 = ((unsigned long long int) arr_1 [i_1 - 2]);
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 3])) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) var_8))));
        var_20 = ((/* implicit */unsigned int) (signed char)3);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(-1349056481509219484LL)));
        arr_12 [i_2] = ((/* implicit */long long int) ((arr_0 [i_2 + 2]) - (arr_0 [i_2 + 3])));
    }
}
