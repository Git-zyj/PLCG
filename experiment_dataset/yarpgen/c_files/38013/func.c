/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38013
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
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) 12469522315637932104ULL)) ? ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) -18LL)) ? (255215547U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46656))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42299))))) : (4187064524U));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) max((var_9), (((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_2 + 1]))))) : (min((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_0]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned char)249))) ? (((((/* implicit */_Bool) 4039751748U)) ? (((/* implicit */int) var_6)) : (var_9))) : ((~(((/* implicit */int) arr_0 [i_1]))))))))))));
                    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_8)) : (((max((arr_1 [i_1]), (((/* implicit */long long int) var_2)))) >> (((((var_14) % (arr_4 [i_0 - 2] [i_1] [i_2]))) - (1371042569U)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-103))))) * (((/* implicit */int) min((arr_9 [i_0] [i_1 - 2] [i_4]), (arr_9 [i_0 - 1] [i_1 - 1] [i_1 - 1]))))));
                                arr_12 [i_0] [i_0] [i_2 - 1] [i_3] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((int) arr_9 [i_0 + 1] [i_3] [i_4]))) >= (var_10))) ? (min(((~(var_1))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-36))))))) : (((((/* implicit */_Bool) -15146849)) ? (4039751748U) : ((+(2892123718U)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((arr_8 [i_0] [i_0 - 2] [i_0 - 1]) == (((/* implicit */unsigned long long int) 4039751748U))))), (min((((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) ? (var_5) : (var_5))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_6)), (arr_10 [i_0] [i_0] [i_1])))))))))));
                }
            }
        } 
    } 
    var_20 = (-(((((/* implicit */int) (signed char)-88)) + (((/* implicit */int) ((unsigned short) (_Bool)1))))));
    var_21 &= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) & ((~(var_14)))))));
    var_22 = ((/* implicit */long long int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)0)))))))));
}
