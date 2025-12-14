/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221208
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max(((short)13905), (((/* implicit */short) (signed char)125))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((min((((/* implicit */unsigned short) var_9)), (arr_0 [i_0 - 1]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_1 [i_0]))))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+((-(4161757103587652618LL)))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_7 [6LL] [6LL] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)19)), (min((141797263U), (((/* implicit */unsigned int) (short)13905))))));
        arr_8 [i_1] = min(((short)13920), (((/* implicit */short) (_Bool)1)));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (max((var_2), (((/* implicit */long long int) 1509944866))))));
        var_15 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9077332916947648739LL))))), ((+(var_12)))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            arr_15 [i_3] [i_2] [i_2] = ((/* implicit */long long int) min((min((2213163529U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1519707286U)))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned char i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (max((arr_24 [i_6 + 3] [10ULL] [i_6] [i_4 + 1] [i_3]), (arr_24 [i_6 - 3] [i_6] [i_6] [i_4 + 1] [i_3])))));
                            arr_26 [(signed char)4] [3ULL] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(min((arr_6 [i_4 - 1]), (((/* implicit */unsigned long long int) var_2))))));
                            arr_27 [i_2] [i_2] [(signed char)6] [i_2] [i_2] [i_2] [3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-12661)))))));
                            arr_28 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (~((~((+(((/* implicit */int) (short)-28149))))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-115)))))));
            arr_29 [i_2] [i_3] = max((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (max((0U), (((/* implicit */unsigned int) arr_12 [i_2] [i_3] [i_2])))));
        }
        var_18 ^= ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)-23461))))));
    }
    var_19 = min((max(((~(15010933141844551685ULL))), (((/* implicit */unsigned long long int) max((1468300562), (2147483647)))))), (((/* implicit */unsigned long long int) min((max((var_1), (((/* implicit */unsigned int) var_11)))), ((~(var_1)))))));
}
