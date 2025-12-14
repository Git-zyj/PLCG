/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192537
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = var_1;
                    arr_10 [i_0] [i_2] = ((/* implicit */int) arr_7 [i_0] [i_0]);
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (unsigned short)27168)), ((((_Bool)1) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned long long int) max((983040LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)0))))))))));
                    arr_12 [i_0] [2U] [i_0] [i_2] = min((((long long int) 9760870317692661328ULL)), (((((/* implicit */long long int) 1676628491)) & (arr_8 [i_1 - 1]))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_8)) : ((~(((((/* implicit */int) (_Bool)1)) << (((var_2) - (653254223))))))))))));
}
