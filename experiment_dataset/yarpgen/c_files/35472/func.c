/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35472
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_8)), (max((min((var_14), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)10942)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) >= (arr_1 [5LL]))))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) arr_0 [i_0])))) : (var_12)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            var_22 ^= ((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))), (arr_3 [i_0] [i_1])));
            arr_4 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28780)) * (((/* implicit */int) (short)-32749))))) ? (arr_2 [10ULL] [i_0]) : ((~(arr_0 [i_0])))));
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            arr_7 [i_0] [(unsigned char)4] = ((/* implicit */short) var_17);
            var_23 = (short)-32010;
            arr_8 [i_0] [(_Bool)1] [i_2] = ((/* implicit */short) arr_2 [(short)10] [i_0]);
        }
    }
}
