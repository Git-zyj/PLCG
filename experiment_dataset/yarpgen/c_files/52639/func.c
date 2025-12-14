/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52639
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
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_1)))) ? ((~(274877775872ULL))) : (min((12253974595397103438ULL), (6192769478312448177ULL))))) << (((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [(unsigned short)6] [i_2] [i_3] [i_4 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)64)) | (((/* implicit */int) var_9))))) : (-978511131837545833LL))) - (80LL)))));
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(arr_10 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] [i_4])))) >= (max((1221725454U), (((/* implicit */unsigned int) (signed char)38))))));
                            var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_13)))))), (((min((6192769478312448174ULL), (((/* implicit */unsigned long long int) var_10)))) + (((/* implicit */unsigned long long int) ((long long int) var_9)))))));
                            var_19 = ((unsigned int) (signed char)-1);
                            arr_13 [i_3] [i_2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-115)) && (((/* implicit */_Bool) (signed char)-115))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [16LL] [i_5] = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])));
                            var_20 = ((/* implicit */int) 2251799545249792LL);
                            var_21 = ((/* implicit */unsigned int) ((unsigned char) (short)32767));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_9)))))))));
                        }
                        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((((((/* implicit */int) (short)-20022)) + (2147483647))) >> (((((/* implicit */int) var_1)) + (126)))))))));
                    }
                    for (long long int i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        var_24 *= ((/* implicit */short) 12253974595397103438ULL);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1922158235U)) ? (1450698082) : (((/* implicit */int) (signed char)-39))));
                        var_26 = ((/* implicit */unsigned long long int) (short)20013);
                    }
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        var_27 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)12))));
                        var_28 &= ((/* implicit */long long int) (unsigned char)209);
                        var_29 = ((/* implicit */int) (+(arr_1 [i_7 - 2])));
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_30 &= ((/* implicit */signed char) (~((((~(var_13))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
                        arr_25 [i_0] [i_0] [i_2] [9ULL] = ((/* implicit */_Bool) 6192769478312448177ULL);
                        var_31 = ((/* implicit */long long int) (-(((((unsigned long long int) (signed char)38)) << ((+(((/* implicit */int) var_4))))))));
                        var_32 = ((/* implicit */long long int) max(((((((~(((/* implicit */int) var_0)))) + (2147483647))) >> (((arr_6 [i_0] [i_0] [i_8]) - (10682813224123577683ULL))))), (((/* implicit */int) ((signed char) min((var_14), (12253974595397103441ULL)))))));
                    }
                    var_33 = ((/* implicit */short) (-(((var_6) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44)))))));
                    var_34 = ((/* implicit */int) ((unsigned char) ((long long int) arr_10 [i_1 - 3] [i_1] [i_1] [i_1] [i_1] [i_1 - 3])));
                }
            } 
        } 
    } 
    var_35 *= ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-39)) && (((/* implicit */_Bool) (signed char)-38))))), (var_0))));
}
