/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227857
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_2))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [2LL] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((var_2) - (((((/* implicit */_Bool) var_3)) ? (2989141682807297256LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))));
            var_13 = ((/* implicit */short) ((arr_0 [i_0]) % (arr_0 [i_0])));
            var_14 = arr_0 [i_0];
            var_15 = ((/* implicit */unsigned short) (unsigned char)58);
            var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))))))));
        }
        arr_7 [i_0] [(unsigned short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((((/* implicit */long long int) 4592647U)) == (33554431LL)))));
        arr_8 [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_5 [(_Bool)1] [(_Bool)0]))));
        arr_12 [16LL] &= ((/* implicit */unsigned char) var_4);
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_6);
        var_19 ^= ((/* implicit */long long int) arr_11 [(_Bool)1] [i_3]);
    }
}
