/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47078
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_4)))))), (var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    var_12 -= ((/* implicit */int) arr_7 [7] [i_1] [i_0]);
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31023))))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [10ULL] [i_1]))))));
                    arr_9 [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_1 + 4] [(short)0]))) : (arr_2 [i_2 + 4] [(short)0] [i_2])))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((int) var_2));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41033)) ? (-9223372036854775805LL) : (-9223372036854775793LL)));
                }
                arr_12 [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned short)65535))))), (arr_4 [i_0] [i_1] [i_0])));
                arr_13 [i_0] [i_0] &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 4] [i_0 + 1] [10] [i_0])) || (((((/* implicit */int) (short)2048)) < (((/* implicit */int) arr_3 [i_1])))))))));
                arr_14 [i_0] [i_0] [5ULL] = ((/* implicit */short) 9223372036854775805LL);
                arr_15 [i_0] = ((/* implicit */short) ((((long long int) (unsigned short)65515)) - (((/* implicit */long long int) (((~(((/* implicit */int) arr_0 [i_0] [i_1])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) <= (((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_1 + 3]))))))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */long long int) var_7);
}
