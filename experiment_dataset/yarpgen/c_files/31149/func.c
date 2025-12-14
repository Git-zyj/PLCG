/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31149
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
    var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63719)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)14))))) + (min((2329566533867891132ULL), (((/* implicit */unsigned long long int) var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_9 [i_0 - 1] [i_0] [i_1] [i_2] [i_2] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) & (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_2]))))) || (((/* implicit */_Bool) min(((unsigned char)88), ((unsigned char)14))))));
                        var_19 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)241)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((long long int) arr_3 [i_0] [i_1] [i_2])) << (((1239349760) - (1239349759))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) var_8)) ^ (-1181006767))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)55018)) / (((/* implicit */int) (unsigned char)5))));
                        }
                        var_23 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_13 [6LL] [i_1] [i_1] [(signed char)14] [i_2] [(unsigned short)2])) : (((/* implicit */int) (signed char)127)))) * (((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) (unsigned short)18267))))));
                        var_24 = ((/* implicit */unsigned long long int) ((arr_12 [i_0 - 1] [(unsigned char)9] [(_Bool)1] [i_0] [i_0 - 1]) | (((/* implicit */int) (short)-1))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_25 &= ((/* implicit */unsigned char) 699654630U);
                        arr_17 [i_0] [i_0] [4ULL] [(_Bool)1] = ((/* implicit */unsigned char) ((min((-4232174367249523834LL), (-4165853501742122152LL))) | (((/* implicit */long long int) min((((((/* implicit */unsigned int) -718964615)) | (699654623U))), (((/* implicit */unsigned int) -1181006791)))))));
                    }
                    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-114)) | (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_0] [(unsigned char)8] [(short)1] [13U] [(_Bool)1] [i_0]))))) : (((((/* implicit */_Bool) (short)27066)) ? (4270633583U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240)))))))) || (((/* implicit */_Bool) (+((~(((/* implicit */int) (short)3968)))))))));
                }
            } 
        } 
    } 
}
