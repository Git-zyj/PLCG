/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225438
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
    var_16 ^= ((/* implicit */unsigned char) ((signed char) 16224471U));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_3]);
                                var_17 = ((/* implicit */unsigned short) ((3761846559U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50)))));
                                var_18 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned short)28271)))))))) : (((((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [(unsigned char)0] [i_0] [i_0])) % ((+(((/* implicit */int) var_0))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */unsigned char) (signed char)-99))))) ? (((/* implicit */int) (unsigned char)144)) : ((~(((/* implicit */int) (signed char)-99))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_13 [i_0] [(signed char)1] [i_0] [i_0] [(unsigned char)11]))))) ? (((unsigned int) arr_11 [i_0] [(unsigned char)2] [(unsigned char)2] [(unsigned short)3])) : ((~(arr_14 [(unsigned short)6] [i_1] [(unsigned short)6] [(unsigned short)1] [i_1]))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [(unsigned short)0] = ((/* implicit */unsigned short) arr_5 [i_0]);
                    var_20 += ((/* implicit */unsigned char) min((((/* implicit */int) arr_6 [i_1] [i_2])), ((+(((/* implicit */int) arr_10 [0U] [i_1] [0U] [0U]))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)82))))) ? (min((3552469450U), (((/* implicit */unsigned int) (unsigned short)28258)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) (signed char)41)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [11U] [(unsigned short)4] [i_0] [i_2])) : (((/* implicit */int) (signed char)6))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)28317))))));
                }
            } 
        } 
    } 
    var_22 = 2753571210U;
}
