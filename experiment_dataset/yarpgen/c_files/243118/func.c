/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243118
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
    var_14 = ((/* implicit */long long int) (unsigned short)28987);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 *= ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)94)))))) : (max((((/* implicit */long long int) (_Bool)0)), (var_12))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = var_3;
                                var_18 = ((/* implicit */unsigned char) -2147483641);
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_19 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)9)), (2080181940)));
                    arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((arr_4 [i_0]) & (((/* implicit */int) var_0))))));
                }
                arr_21 [i_1] [i_1] = (~(((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) < (((/* implicit */int) (unsigned char)83))))) >> (((((/* implicit */int) ((signed char) (unsigned short)28987))) - (56))))));
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((var_2), (((/* implicit */unsigned short) (signed char)61)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((unsigned short) var_7)))))));
}
