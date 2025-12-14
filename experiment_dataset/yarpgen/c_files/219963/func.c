/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219963
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (short)16022)) - (((/* implicit */int) (_Bool)0))));
                    arr_11 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [1] [i_0])) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_10), (((/* implicit */signed char) var_1))))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])))) : ((+(((/* implicit */int) var_9)))))))));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6917529027641081856ULL)) ? (((/* implicit */unsigned long long int) 134217216U)) : (11529215046068469776ULL))))));
                }
                var_14 = ((/* implicit */long long int) (+((((+(6917529027641081856ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_13 [i_0] [(signed char)7] [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((var_4) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10988)) ? (((/* implicit */unsigned int) 594693222)) : (2113098585U)))) ? (((/* implicit */int) min(((signed char)76), (var_5)))) : (((/* implicit */int) var_2)))))));
}
