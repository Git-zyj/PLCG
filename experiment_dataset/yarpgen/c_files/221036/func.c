/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221036
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) || (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((arr_1 [i_0]) ^ (arr_1 [i_0]))), ((~(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_4 [i_1 - 1] [i_1 - 1]) - (arr_4 [i_1 - 1] [i_1 + 1])));
        arr_7 [i_1] [i_1] = (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (7436830826047585507ULL));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(arr_4 [i_1 + 1] [i_1 + 1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)0)), (0U)));
        arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((int) arr_9 [i_2] [i_2]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15938))) : ((~(arr_11 [i_2])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_17 [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */int) (unsigned char)7)), ((+(((/* implicit */int) arr_8 [14ULL]))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_8 [(unsigned char)0]))));
    }
    var_16 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11))))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((max((11009913247661966108ULL), (((/* implicit */unsigned long long int) 3960886784U)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
}
