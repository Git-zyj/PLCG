/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33809
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((741341760U) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (155)))))) ? (var_4) : ((+(((/* implicit */int) (unsigned short)63268)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [(unsigned short)0] [i_3] [i_3] [i_0] = ((/* implicit */long long int) 1084845857U);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_11 = (+(572154716U));
                            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)2267))));
                            arr_16 [i_3] [(signed char)13] [i_2] [(signed char)8] [i_4] = ((/* implicit */_Bool) ((unsigned char) 510730864));
                            var_13 = ((/* implicit */short) (-(((unsigned int) 17497852748027440142ULL))));
                            arr_17 [(unsigned short)13] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2270))) : (arr_8 [i_3 - 1])));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2267)) ? (arr_14 [i_0] [i_5] [i_5] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63258)) && (((/* implicit */_Bool) var_0))))))));
                            var_15 = ((/* implicit */long long int) var_1);
                        }
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                            arr_24 [i_0] [i_3] [16U] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_15 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]))) ? (((arr_20 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_0]) ? (((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) : (((/* implicit */int) (unsigned char)245)))) : (((((/* implicit */int) arr_13 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3])) - (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_3 + 1] [15LL]))))));
                            arr_25 [i_3] [(short)9] [i_2] = ((/* implicit */short) var_7);
                        }
                    }
                    arr_26 [(unsigned char)9] [(short)11] [(unsigned char)9] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)2271));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((int) var_2));
}
