/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203914
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32753)) - (min((arr_1 [i_0 + 1]), (((/* implicit */int) ((((/* implicit */int) var_17)) == (var_12))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((-1361069790) - (arr_1 [i_0])));
        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 862957086U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) : (862957095U)));
        arr_3 [i_0] = ((/* implicit */unsigned char) 3432010208U);
        var_21 -= ((/* implicit */unsigned short) max((((((/* implicit */int) var_18)) ^ (((/* implicit */int) (short)9962)))), ((~(((/* implicit */int) arr_0 [i_0 + 1] [4U]))))));
    }
    var_22 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) && (((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) var_6)))))))));
    /* LoopNest 3 */
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 4; i_3 < 11; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_4 [i_1] [i_2])) - (((/* implicit */int) arr_8 [(short)4])))) : (((-1075953318) + (((/* implicit */int) arr_7 [i_3])))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1048576)) ? (3331648411823594235LL) : (((/* implicit */long long int) 1048575))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_25 |= ((/* implicit */int) arr_9 [i_4 + 1] [i_4] [i_4] [i_3 + 2]);
                                var_26 |= ((/* implicit */unsigned short) -1181669055);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
