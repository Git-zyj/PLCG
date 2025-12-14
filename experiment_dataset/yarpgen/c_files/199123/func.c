/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199123
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((arr_1 [i_2 - 4] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_2 - 2] [i_0])))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_17)) / (arr_1 [i_0] [i_0])));
                        var_23 = arr_8 [i_3] [i_2] [i_0] [i_0];
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2 - 2] [i_0 - 1]);
                        var_25 = ((/* implicit */int) min((var_25), (arr_12 [i_2] [i_2] [i_2])));
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_2 - 4] [i_2 - 1] [i_2 + 1] [i_2]))));
                    }
                    var_27 = ((/* implicit */long long int) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((36028797018963967ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0 + 1] [16LL] [i_0] [i_0 + 1]))))))))));
                    var_28 = var_8;
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_5])))) - (((/* implicit */int) var_12))))) - (max((arr_0 [i_2 - 3]), (arr_0 [i_2 - 3])))));
                        var_30 = ((/* implicit */unsigned char) ((arr_12 [i_2 - 4] [i_1] [i_0 - 1]) >= (arr_12 [i_2 - 1] [i_2 - 1] [i_0 + 1])));
                        var_31 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_2 - 2] [i_0 - 1] [i_0 - 1]))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((1728768789) << (((arr_3 [i_0 + 1] [i_1] [i_0 + 1]) - (6574412383241307197ULL)))))))) ? (((/* implicit */int) (((-(var_2))) >= (((/* implicit */unsigned long long int) ((unsigned int) var_13)))))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 2] [i_0 - 1] [i_0 + 1])) == (((/* implicit */int) arr_13 [i_2 - 4] [i_2 - 3] [i_0 + 1] [i_0 - 1])))))));
                        var_33 = ((/* implicit */long long int) max((var_33), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_3)))))) * (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1] [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (67108863LL)))))));
                    }
                }
            } 
        } 
    } 
}
