/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46573
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_10 += ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_1]));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) > (((/* implicit */int) var_1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) var_4))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                }
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_12 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_1] [i_3])), (arr_12 [i_0] [(signed char)13] [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_1])))) : ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_3])))));
                    arr_13 [i_0] [(unsigned char)8] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_4 [i_1])) % (var_7))) == (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-26)), (((((/* implicit */int) var_6)) / (((/* implicit */int) var_4)))))))));
                    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (short)7347)))))), (((unsigned int) arr_9 [i_0] [i_1] [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned char) var_7);
                                arr_20 [i_0] [i_1] [i_1] [i_3] [5LL] [i_0] = ((/* implicit */unsigned char) arr_8 [i_4] [i_0] [i_0] [i_0]);
                                arr_21 [i_0] [i_1] [i_5 + 1] [i_0] [i_0] = ((/* implicit */short) arr_15 [i_0]);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58181)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-7344)))))));
                            }
                        } 
                    } 
                    arr_22 [(unsigned short)13] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_3]);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((var_16), (var_4)));
    var_17 = ((/* implicit */signed char) var_5);
    var_18 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_5)) : ((+(var_8))))));
    var_19 = ((/* implicit */signed char) var_1);
}
