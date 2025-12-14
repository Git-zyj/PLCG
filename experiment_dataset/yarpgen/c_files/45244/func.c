/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45244
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
    var_13 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4294967288U)))) ? (((/* implicit */int) (short)-27537)) : (((/* implicit */int) (short)27555))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((var_0), (min((((/* implicit */int) (signed char)116)), (arr_5 [i_0] [0ULL] [(signed char)4]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                        var_16 = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                        var_17 = ((/* implicit */int) ((((617818816) <= (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_3] [i_2] [i_0]))))) : ((-(537732388U)))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)27536)))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            var_19 -= ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)65535)))) > ((+(((/* implicit */int) (unsigned char)81))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned short) arr_10 [i_2 - 1] [2U])))));
                            arr_15 [i_2] [i_1] [i_2] [i_4] [i_5] = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-88))))) << ((-(4294967268U))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_3))));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            arr_18 [(unsigned char)3] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_2] [i_2]))));
                            var_22 = ((/* implicit */short) (+(3799024676U)));
                            var_23 = ((/* implicit */_Bool) var_2);
                        }
                        for (short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            arr_21 [i_7] [i_7] [i_7] [i_7] [i_2] = ((unsigned long long int) ((1914706131) & (((/* implicit */int) (unsigned short)8873))));
                            arr_22 [i_0] [i_2] = ((((/* implicit */_Bool) (short)27536)) ? (4294967254U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                            var_24 &= (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_0] [i_7])));
                        }
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_12 [i_2] [6] [9ULL] [i_2 + 1] [i_2 - 1]))));
                    }
                    var_26 = ((/* implicit */int) max((var_26), (min(((-(((/* implicit */int) (unsigned short)5116)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_2 - 1] [(short)2] [i_2 - 1])) : (((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1012552840)), (47U)))) ? ((((~(61U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
}
