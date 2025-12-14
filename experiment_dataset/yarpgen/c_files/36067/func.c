/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36067
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
    var_16 = ((/* implicit */signed char) (+(var_15)));
    var_17 -= ((/* implicit */long long int) ((var_15) >= (((/* implicit */long long int) var_3))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) | (-7574481024981536740LL)))));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */short) ((int) (short)22267));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_18 *= ((/* implicit */short) var_13);
                        var_19 &= ((/* implicit */_Bool) var_4);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 |= ((/* implicit */int) ((signed char) (-(((/* implicit */int) var_7)))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_16 [i_2] [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (!((_Bool)1))))));
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2] [8] [i_2])) && (((/* implicit */_Bool) var_5))));
                        }
                        for (short i_6 = 3; i_6 < 9; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)15010)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) & (((/* implicit */int) ((_Bool) var_10)))));
                            arr_20 [i_0] [i_1] [i_1] [1LL] [i_6] [i_6] = ((/* implicit */short) var_8);
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_9);
                        var_23 ^= ((unsigned long long int) arr_17 [(_Bool)0] [8ULL] [i_0]);
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_4] [i_2 - 1] [i_0] = (-(((/* implicit */int) var_9)));
                            arr_26 [i_2] [i_0] [i_7] = (!(((/* implicit */_Bool) var_15)));
                            var_24 = ((/* implicit */short) ((arr_12 [i_0] [8] [10ULL] [i_4] [i_0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((-1823137534) / (((/* implicit */int) var_5))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_0 + 2] [i_2 - 1] [i_8 + 1] [i_8 + 1])) != (((/* implicit */int) var_1)))))));
                            arr_30 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */int) ((unsigned long long int) var_9));
                            var_27 = ((/* implicit */_Bool) (unsigned short)65513);
                        }
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            arr_34 [i_0] [i_0] [i_2 - 1] [(unsigned char)1] [i_9] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_8)))));
                            var_28 = ((/* implicit */unsigned char) var_1);
                        }
                    }
                    for (unsigned short i_10 = 2; i_10 < 9; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) && ((!(((/* implicit */_Bool) var_1)))))))));
                        var_30 = ((signed char) ((((/* implicit */_Bool) 16642998272ULL)) ? (8350661028664276816LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10)))));
                    }
                }
            } 
        } 
    } 
}
