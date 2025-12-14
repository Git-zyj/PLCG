/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223556
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
    var_12 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    var_13 = ((/* implicit */unsigned long long int) 4164882629U);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_14 = (-((~(((/* implicit */int) (unsigned char)227)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) (-(775178647455489006LL)));
                        arr_11 [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)28);
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 5449327420270278882ULL))));
                        var_17 = ((/* implicit */unsigned long long int) (-(9U)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_15 [(unsigned short)4] = ((/* implicit */int) (unsigned short)44691);
                        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)28))));
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)3))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_20 += ((/* implicit */unsigned int) (short)-29296);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_21 [i_0] [(unsigned char)11] [i_2] [i_5] [i_0] [i_6] = ((/* implicit */long long int) (signed char)0);
                            var_21 ^= ((/* implicit */unsigned char) (unsigned short)13);
                            arr_22 [i_0 - 1] [i_0] = ((/* implicit */long long int) (short)-9637);
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_7] [i_0] [i_0 + 2] [i_0 + 3] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)154))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned short)20838))));
                        arr_27 [i_0] [(unsigned char)15] [i_7] = (-(((/* implicit */int) (unsigned char)28)));
                    }
                    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_31 [i_0 + 2] [i_1] [i_2] = ((/* implicit */unsigned char) 0U);
                        arr_32 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) (_Bool)1);
                        var_23 = ((/* implicit */long long int) (unsigned short)29184);
                    }
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)-1)))))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (unsigned char)245))));
                }
            } 
        } 
    }
}
