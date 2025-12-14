/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205992
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
    var_20 = ((/* implicit */short) (signed char)127);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_18))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_1]) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [(unsigned char)3] [i_1] [i_1] |= ((/* implicit */unsigned char) ((signed char) var_14));
                            var_21 = max(((unsigned short)57183), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -5437356246839357585LL))))));
                            arr_13 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)21)), (max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)23170)))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) min(((short)8191), (((/* implicit */short) (signed char)99))))))))));
                                arr_16 [i_0] [i_1] [i_4] [i_3] [i_4 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)9928)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_3 - 1] [i_3 + 1]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
}
