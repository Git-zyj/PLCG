/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239059
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
    var_16 -= ((/* implicit */int) (unsigned char)154);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_1 [i_0]))) % (((/* implicit */int) (unsigned short)3456))));
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) 2146435072);
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_1 [i_3]))));
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2] [i_3])) && (((/* implicit */_Bool) arr_7 [9ULL] [i_1 + 1] [i_1] [i_3]))));
                        }
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((var_7) >> (((/* implicit */int) (_Bool)1))));
                            var_22 += ((/* implicit */unsigned char) (unsigned short)62080);
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))));
                            var_24 |= (~(((/* implicit */int) arr_15 [i_1 - 3] [i_0] [i_2] [i_1 - 3] [i_1 - 3])));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_6 [i_1] [i_1 - 2] [i_1])) - (60514)))));
                        }
                        arr_19 [i_1] [i_3] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)31549)) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 - 3])));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 3) 
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned long long int) arr_8 [i_1 + 1] [i_1 - 1]));
                            var_26 += ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1 + 3])) != (((/* implicit */int) arr_5 [i_0] [i_0]))));
                            arr_24 [1] [i_1] [i_1] [i_3] [i_6] [i_1] = ((/* implicit */unsigned int) arr_18 [(_Bool)1] [i_1] [i_1] [(_Bool)1]);
                        }
                        var_27 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 2] [i_2] [2U])) % (((/* implicit */int) arr_6 [i_1 + 3] [i_1] [i_2]))));
                        var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)182)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                    }
                } 
            } 
        } 
        arr_25 [(short)11] = ((/* implicit */unsigned int) ((long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
