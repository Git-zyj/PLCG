/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225265
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
    var_14 = ((/* implicit */long long int) (unsigned short)65527);
    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-15506)) : (((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (15048955703157402344ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_2] [(short)13] [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 8191)) ? (2147483637) : (((/* implicit */int) arr_2 [i_1] [i_2] [i_4])))) << (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_4] [i_0] [i_0])), (var_1)))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [(short)14] [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                                arr_13 [13ULL] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_7);
                                var_16 &= ((unsigned long long int) (-(arr_7 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                arr_14 [(_Bool)1] = ((int) var_0);
                arr_15 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((signed char) (-(((/* implicit */int) ((_Bool) arr_11 [i_1] [i_0] [(unsigned short)7] [(unsigned char)11] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) arr_17 [i_5] [i_5]);
        arr_18 [i_5] = ((/* implicit */_Bool) arr_17 [i_5] [i_5]);
        arr_19 [i_5] [i_5] = -372214457;
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((2147483637), (var_13)))) ? (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */unsigned long long int) 1072693248U)) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_6])))))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) arr_17 [i_6] [i_6]))), (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-15488)))))));
    }
}
