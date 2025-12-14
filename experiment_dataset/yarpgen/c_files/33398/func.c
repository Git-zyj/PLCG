/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33398
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
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) 65535LL)))), (((((/* implicit */int) (unsigned short)255)) > (-1457753104)))))) >> ((((+(((((/* implicit */_Bool) -2115752128)) ? (-5947224640570586996LL) : (-65526LL))))) + (5947224640570587012LL)))));
    var_18 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) -5947224640570587025LL)) ? (((/* implicit */long long int) 2047U)) : (max((((/* implicit */long long int) (_Bool)0)), (7285185909613469432LL))))) + (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_7)), (12U))))))));
    var_19 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_0 [i_1]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_21 = ((((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_2] [(signed char)8] [i_0])) ? (0U) : (4294967286U))) | (0U));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) arr_0 [i_1]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_9 [i_0] [i_3] [i_0] [i_0] [i_0])))));
                                var_23 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))));
                                var_24 = 2906033467U;
                            }
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4))))) ? (max((906158655U), (((/* implicit */unsigned int) (short)21655)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2730110722U))))))))) ? (((/* implicit */int) (unsigned short)9)) : (((((/* implicit */int) (unsigned short)15)) ^ ((-(((/* implicit */int) (signed char)87))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = var_6;
}
