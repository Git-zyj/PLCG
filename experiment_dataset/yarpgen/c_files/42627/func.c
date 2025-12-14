/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42627
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
    var_11 = var_4;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [1] [1] = ((/* implicit */short) min((min(((+(0ULL))), (((/* implicit */unsigned long long int) (unsigned short)49152)))), (((/* implicit */unsigned long long int) (unsigned short)65525))));
                arr_5 [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (8413075809150261724ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)0)), ((-2147483647 - 1)))))))) ? (-2147483632) : (((/* implicit */int) (signed char)4))));
                arr_6 [(unsigned short)2] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (1535748563U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    arr_9 [0ULL] [6] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (-(-9223372036854775800LL))));
                    arr_10 [14] [i_0] [(_Bool)1] [(short)2] = ((/* implicit */short) min(((unsigned char)50), (((/* implicit */unsigned char) (signed char)9))));
                }
            }
        } 
    } 
}
