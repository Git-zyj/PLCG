/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53813
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_15 -= ((/* implicit */_Bool) arr_8 [i_0] [(signed char)2] [i_0] [i_0]);
                        var_16 += ((/* implicit */unsigned short) (signed char)24);
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned short) (signed char)27);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32760)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) var_9))));
                        var_18 = ((/* implicit */signed char) var_11);
                        arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [8U] [i_1] [i_2] [i_4])) : (((/* implicit */int) var_12))));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (arr_3 [i_0] [i_1])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) ((_Bool) arr_7 [i_5]));
                        arr_21 [i_0] [i_5] [i_6 - 2] [i_7 - 1] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) (unsigned short)32767)));
                        var_21 = ((/* implicit */signed char) arr_20 [i_6 + 1] [i_6 - 1] [i_7 - 1]);
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)32768))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) var_7);
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_18 [i_7] [i_5] [i_6 - 2] [i_7]))));
                            var_25 += ((/* implicit */unsigned char) var_10);
                            var_26 = ((/* implicit */signed char) arr_22 [(signed char)6] [i_8] [i_6] [i_7]);
                        }
                    }
                } 
            } 
            var_27 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_5 [(signed char)6] [i_0] [i_0])) : (arr_18 [i_0] [(unsigned short)6] [i_5] [i_0])));
        }
    }
    var_28 = ((/* implicit */unsigned int) ((unsigned short) var_13));
}
