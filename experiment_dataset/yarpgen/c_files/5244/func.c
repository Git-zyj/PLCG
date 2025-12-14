/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5244
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 5)) ? (((/* implicit */unsigned int) ((int) (short)28938))) : (1895331073U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) (~(((min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_3 [0LL]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_0 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (1312788140))), (((/* implicit */int) (unsigned short)53717))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((1559430719) != (((/* implicit */int) (unsigned short)55738)))))));
                    var_13 = ((/* implicit */short) ((unsigned short) arr_3 [i_0 - 1]));
                    var_14 -= ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_15 = ((signed char) min((((/* implicit */int) ((unsigned short) (signed char)-26))), (((((/* implicit */int) var_3)) | (676974591)))));
    var_16 = ((/* implicit */long long int) max((-1), (((/* implicit */int) (unsigned short)11818))));
}
