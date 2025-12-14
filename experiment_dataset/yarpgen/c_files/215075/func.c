/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215075
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 648399283))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            arr_5 [i_1 - 1] [(unsigned char)5] [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_2 [i_0 + 1]))));
            var_15 -= ((/* implicit */unsigned int) var_0);
            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((((/* implicit */_Bool) 684892600U)) ? (648399279) : (2147483647)))));
        }
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) arr_2 [i_0 + 1]));
            arr_9 [i_2] [(short)8] [(short)8] = (~(arr_1 [i_0 - 2]));
            var_17 = ((/* implicit */unsigned short) arr_0 [i_2]);
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 7; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((var_4) / (((/* implicit */long long int) arr_10 [i_3] [i_4] [i_5]))));
                        arr_18 [i_0] [i_4] [(unsigned char)2] [i_0] = (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_17 [i_0] [i_3] [i_3] [i_4] [i_0] [(_Bool)1]))));
                        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((2147483631) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) (short)15772)))));
                        var_20 = ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0] [i_0 - 2] [i_4])) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0])));
                        var_21 = ((/* implicit */unsigned char) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                    }
                } 
            } 
            arr_19 [i_0] [i_0 + 2] [(short)3] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) 2941572433349849932LL)));
            arr_20 [i_0 + 2] [i_0 + 2] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)53))));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            arr_25 [i_6] = ((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_0 + 2] [i_6]);
            var_22 = ((/* implicit */unsigned char) arr_0 [(unsigned short)3]);
        }
    }
    var_23 = ((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_2)));
    var_24 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15772))) ^ (((unsigned long long int) var_13)))) != (((/* implicit */unsigned long long int) 2147772388U))));
}
