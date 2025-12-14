/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235777
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
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) > (min((18346846546400774391ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned long long int) var_17)), (var_0)))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)50163)) << (((((/* implicit */int) (unsigned short)48557)) - (48547)))))))) ? ((~((~(var_18))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)0), ((unsigned char)0))))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_21 = ((min((max((arr_9 [i_2] [i_0] [i_3] [i_0] [i_3] [i_0]), (((/* implicit */unsigned int) arr_5 [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) (unsigned char)230))))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((arr_8 [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_1] [i_1] [i_1] [i_2] [i_4 + 1])) ? (((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_4] [i_4] [i_4 - 2] [i_2] [i_4 + 2])) : (7893526816737939524ULL))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (unsigned char)1))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */unsigned int) min(((short)26171), ((short)26151)))), (((262143U) * (4294705153U))))))));
                        arr_18 [i_5] [i_1] [(unsigned char)16] [i_5] = ((/* implicit */unsigned int) (((-(arr_2 [i_1 + 1]))) > (((arr_2 [i_1 - 1]) << (((arr_2 [i_1 + 1]) - (98226109U)))))));
                    }
                    var_27 = ((/* implicit */signed char) 9223372036854775790LL);
                    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_0])), (70665143U)))))))));
                }
            } 
        } 
    } 
}
