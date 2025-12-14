/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38152
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_16 = ((/* implicit */int) ((long long int) arr_3 [i_1] [i_2]));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_4 [(unsigned char)7])) : (3276762662309897335ULL))))));
            }
            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 15169981411399654281ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (max((8599354310184709089ULL), (((/* implicit */unsigned long long int) (unsigned char)248))))));
            arr_7 [i_1] = arr_1 [8LL];
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)255)))))))));
        arr_8 [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [(unsigned char)16] [i_0]))))) || ((_Bool)0)))), (arr_4 [8ULL]));
        arr_9 [i_0] = ((/* implicit */long long int) (unsigned short)35280);
    }
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((/* implicit */long long int) var_13);
}
