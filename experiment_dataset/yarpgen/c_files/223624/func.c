/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223624
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)21), ((unsigned char)76)))) ? (max(((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (-2492424886703003384LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31)) * (((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 4294967295U)) ? (var_7) : (arr_4 [i_1] [i_0] [i_0]))))))));
                var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)16443))));
                arr_6 [i_1] = min((((/* implicit */long long int) (unsigned char)42)), (((((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_0]) << (((/* implicit */int) arr_1 [i_0] [i_1]))))) % ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (short)2163))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (+(var_10)));
}
