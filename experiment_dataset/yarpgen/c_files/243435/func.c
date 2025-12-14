/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243435
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (short)3220)) != (-1)))), (((int) (-(((/* implicit */int) (short)32750)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [13ULL] [i_1 + 1]), (arr_4 [i_0] [i_1 + 1])))) ? (((arr_4 [i_1 + 1] [i_1 + 1]) + (arr_4 [10ULL] [i_1 + 1]))) : (arr_4 [i_1 + 1] [i_1 + 1])));
                arr_5 [(_Bool)1] &= ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */short) arr_0 [i_0] [(unsigned short)0])))))) : (((((/* implicit */_Bool) arr_1 [(short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) : (arr_1 [i_0]))))) ^ (max((max((((/* implicit */unsigned long long int) var_12)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) ((unsigned short) (short)20679))), ((+(((/* implicit */int) (_Bool)1))))))));
                arr_7 [(unsigned char)10] [i_0] [i_1] = ((/* implicit */short) (unsigned char)0);
            }
        } 
    } 
}
