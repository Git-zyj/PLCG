/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231091
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (-(min((-725282778580522303LL), (((((/* implicit */long long int) ((/* implicit */int) var_14))) - (arr_3 [i_0] [i_0])))))));
        var_20 ^= ((((/* implicit */int) (!(arr_1 [i_0])))) - (((((/* implicit */_Bool) -725282778580522303LL)) ? (((/* implicit */int) (unsigned short)48905)) : (var_9))));
        var_21 = ((/* implicit */unsigned char) max((574235109U), (((/* implicit */unsigned int) (unsigned char)76))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) (_Bool)1);
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-(((unsigned long long int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) * (min((var_2), (((var_2) / (((/* implicit */unsigned long long int) -1618633449211490743LL)))))))))));
                                var_25 = min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (var_9))), (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_26 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) 1178151389911592873LL))))), (((int) (_Bool)1))));
                                var_27 -= ((/* implicit */unsigned int) ((_Bool) ((((arr_3 [13U] [i_3 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))))) != (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(unsigned short)6] [0] [4ULL] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_28 = ((((/* implicit */int) (short)-18470)) != (((/* implicit */int) (_Bool)1)));
}
