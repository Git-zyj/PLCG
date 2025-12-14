/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35610
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
    var_15 = ((/* implicit */short) (-(1591041573U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */short) var_1);
                var_17 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)-73)) - (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])))), (((/* implicit */int) min((arr_3 [i_0 + 2] [i_0 - 2]), (((/* implicit */unsigned char) arr_1 [i_0 + 2])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((((/* implicit */int) (_Bool)1)) >> (((var_8) - (4158809184U)))))));
                    var_18 = ((/* implicit */signed char) (+(10U)));
                }
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    var_19 = ((_Bool) arr_10 [i_3 + 1] [i_0 - 1]);
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7948728555213524502LL)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned char)14])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_10 [16ULL] [3LL]))));
                        var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2]))));
                        arr_15 [i_0 + 1] [i_1] [i_0 + 1] [5LL] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-27))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_22 = arr_2 [i_0];
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((short) arr_14 [i_0] [i_0 - 1] [i_4])))));
                            var_24 -= ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                        }
                    }
                    arr_18 [i_0] [i_0 - 2] [i_1] [i_3] = ((/* implicit */unsigned int) var_12);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (~(var_12)));
    var_26 = ((/* implicit */unsigned long long int) var_10);
}
