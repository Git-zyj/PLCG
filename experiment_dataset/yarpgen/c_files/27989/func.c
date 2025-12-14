/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27989
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0 + 1] [i_1 - 1]);
                    var_15 = var_3;
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)230))))) | (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)15))))))) || (((/* implicit */_Bool) var_3))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)188)) + (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) var_1))))) >= (min((((((/* implicit */_Bool) (short)4095)) ? (2885544502U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))), (arr_2 [i_0])))));
                        arr_13 [i_0 + 3] [i_1] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned char) 6685643093137469774ULL));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((unsigned char) arr_0 [i_3 - 2]))), (((unsigned short) (~(((/* implicit */int) (signed char)-121))))))))));
                        arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) var_5);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_19 [i_0] [i_1 - 2] [i_2] [i_4] |= ((((int) (unsigned char)102)) >= (((((/* implicit */int) var_14)) * (((/* implicit */int) var_9)))));
                        var_19 = ((/* implicit */int) (_Bool)1);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_5] [i_5] [i_5] [(short)4] = ((/* implicit */_Bool) min((((long long int) arr_15 [i_0 - 2] [i_1] [i_2] [i_1 - 1])), (((/* implicit */long long int) (unsigned char)228))));
                        var_20 *= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_1 - 2] [i_0 - 1] [i_0] [i_0] [i_0 + 2]))) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) 488213781U))))))));
                        arr_24 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 + 4] [i_0 + 3] [i_0 + 4]);
                        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27245)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) >= (min((((/* implicit */unsigned long long int) (unsigned char)30)), (4189118917971163893ULL))))) ? (((((/* implicit */_Bool) (~(4187230392371559998ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_6))) : ((+(4782618508404141641ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_9)))))));
                    }
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(var_3))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (_Bool)1))));
}
