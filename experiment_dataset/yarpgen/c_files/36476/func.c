/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36476
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
    var_18 = ((/* implicit */unsigned char) var_4);
    var_19 = ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) / (arr_1 [i_0])));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) -8819706435067403239LL))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned short)39240)) : (((/* implicit */int) (unsigned short)26295))));
            }
        }
        arr_10 [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)20605)))) * (((((/* implicit */int) arr_8 [i_0] [i_0 - 3])) | (((int) var_17))))));
    }
}
