/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202775
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_10 &= (+(((/* implicit */int) ((-1079470870) <= (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) / (((/* implicit */int) (short)2138))))))));
                arr_11 [i_0] [19] [i_2] [i_1] = ((/* implicit */unsigned long long int) (((~(((long long int) arr_1 [i_1])))) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [(unsigned char)15] [(unsigned char)15])))));
                arr_12 [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+((~((+(((/* implicit */int) var_0))))))));
            }
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_11 = ((/* implicit */unsigned short) arr_15 [i_3] [i_3]);
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -1079470870);
            }
            var_12 = ((/* implicit */_Bool) arr_6 [i_1] [2LL] [i_1]);
        }
        arr_17 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))));
    }
    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)1))))))));
}
