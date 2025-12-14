/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228717
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)4864)), (5801114951052473740LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (5801114951052473740LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60669)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60671))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) 2527016283U))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
                            {
                                var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 + 3]))) : (var_5)));
                                var_13 = ((/* implicit */short) (((+(arr_11 [i_0] [i_1 - 1] [i_1] [9] [i_4]))) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                                arr_16 [i_1] [i_3] [9ULL] [9ULL] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1 + 1]);
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_1] = ((/* implicit */unsigned short) var_3);
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) var_4);
                                arr_22 [i_1] = ((/* implicit */unsigned int) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_1] [i_1] [i_0]))) : (((8522057562315717787ULL) | (((/* implicit */unsigned long long int) -471993226297353344LL))))));
                                var_16 = (!(((/* implicit */_Bool) (-(var_7)))));
                            }
                            var_17 = ((/* implicit */long long int) var_5);
                            var_18 = ((/* implicit */_Bool) max((4778435719589142495LL), (((/* implicit */long long int) (unsigned char)0))));
                        }
                    } 
                } 
            }
        } 
    } 
}
