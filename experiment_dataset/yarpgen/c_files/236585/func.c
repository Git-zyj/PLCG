/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236585
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
    var_18 ^= ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) (unsigned short)51887)))) ? (((/* implicit */unsigned long long int) max((2734510885U), (1560456411U)))) : (max((var_0), (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (((long long int) 1083118788)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 ^= ((1253427404404676268ULL) <= (((/* implicit */unsigned long long int) 2734510894U)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) arr_8 [i_3]);
                                var_21 ^= ((/* implicit */_Bool) arr_8 [i_3 - 1]);
                                var_22 = ((/* implicit */signed char) 2996980822U);
                                arr_15 [i_4] [(unsigned short)6] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((((/* implicit */int) var_17)) <= (((/* implicit */int) arr_6 [i_3 - 2] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2734510888U)) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_1])) : (((/* implicit */int) arr_6 [i_3 - 2] [i_1]))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_3 - 1] [(unsigned char)6])), (var_0))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = (signed char)71;
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)71))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))) : (var_0)))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (signed char)72)))))) : (((/* implicit */int) ((-2965320181953940916LL) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_4))))) == (((1026307018128526571ULL) & (((/* implicit */unsigned long long int) 1560456411U))))))) ^ ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)4])) : (((/* implicit */int) (_Bool)1)))))))))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_16))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1560456407U)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1])) : (0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) arr_7 [2LL])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))))) : (var_6)));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((var_14), (((/* implicit */short) var_12))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_15), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_2))) : (2965320181953940916LL)));
}
