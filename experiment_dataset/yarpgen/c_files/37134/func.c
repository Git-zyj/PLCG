/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37134
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
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-25825))));
    var_18 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((min((1742395885285161284ULL), (((/* implicit */unsigned long long int) (signed char)116)))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)191))))) ? (3927000051373071424ULL) : (4968645301581533122ULL)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_1] [(unsigned short)19] = var_4;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4] [(_Bool)1])) ? (arr_8 [i_1] [i_2] [i_2] [(short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28594))))))));
                            var_21 = ((/* implicit */short) ((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1])))));
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 447379313U))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) 1533345030U);
                            var_23 *= (!(((/* implicit */_Bool) (short)-28591)));
                            var_24 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (1533345050U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)16895))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) (unsigned short)6869)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                            arr_20 [i_0] [i_3] [i_3 + 1] [i_3 + 1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_3 + 1] [i_5 - 1]))))));
                        }
                        var_25 = ((/* implicit */unsigned short) (~(max((arr_11 [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2]), (arr_11 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 3])))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((((/* implicit */_Bool) ((unsigned long long int) ((var_4) <= (((/* implicit */long long int) var_5)))))) ? (((/* implicit */unsigned int) var_7)) : ((+(((var_1) << (((var_6) - (10806000076056020235ULL))))))));
}
