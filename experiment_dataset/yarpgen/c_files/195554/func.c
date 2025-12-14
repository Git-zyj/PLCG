/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195554
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_6))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24089)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)0)))))))) ? (((/* implicit */int) var_0)) : (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)6))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)3)), (-1371892638)));
        var_16 = ((/* implicit */short) arr_0 [i_0 - 1]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))) : (var_13))) ^ (((/* implicit */long long int) ((int) (unsigned char)6))))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-27797)) | (((/* implicit */int) (_Bool)1))))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) var_4);
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (var_10)));
    var_18 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-32626))))) ? (((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5))) * (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((var_13) - (8212996822102159019LL))))))));
}
