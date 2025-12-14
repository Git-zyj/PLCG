/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231125
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
    var_11 = ((/* implicit */int) var_9);
    var_12 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_6)) ? (1971555889218376753ULL) : (1971555889218376733ULL))) + (((/* implicit */unsigned long long int) ((2517463162U) >> (((1174743888) - (1174743862)))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned int) var_0)), (var_4))) : (((/* implicit */unsigned int) (~(-110513972)))))))));
    var_13 = ((/* implicit */signed char) (~((-((-(((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [0U] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2] [i_2]);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_5)))))))) > ((+(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))))));
                        arr_10 [i_2] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3] [i_1 - 1])), (-88562618))) - (1216258015)));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) -88562618);
                        var_14 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        arr_14 [i_0] [10LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1971555889218376744ULL)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (1971555889218376758ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90)))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)112)) && ((!(((/* implicit */_Bool) arr_13 [i_0] [i_1 - 3] [i_2] [i_4 + 1]))))));
                    }
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned long long int) (+(88562626)));
}
