/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214618
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
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) != (arr_3 [i_0 + 3] [i_0 + 1] [i_0 + 1]))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) (unsigned char)153);
                    var_22 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_16)) != (((/* implicit */int) (_Bool)1)))));
                    var_23 = (((+(((/* implicit */int) var_15)))) - (((/* implicit */int) ((short) min((((/* implicit */unsigned int) (signed char)-34)), (281069095U))))));
                    var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_2 - 1]))))), (((0) + (((/* implicit */int) (_Bool)1))))));
                    var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 1] [i_0 - 3])) ? (1355289524) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */int) max(((unsigned char)95), (var_7))))));
                }
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_26 = (signed char)-34;
                    var_27 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_28 -= ((_Bool) ((unsigned char) arr_11 [i_0] [i_1] [i_3] [i_4 - 1]));
                                arr_14 [i_0] [i_1] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_5]);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((arr_11 [i_0] [i_1] [i_3] [i_3]) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_3])))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_6] [i_6 - 1])) / (((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 1])))) >> (((((((/* implicit */_Bool) arr_17 [i_6 - 1])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_6 - 1])))) + (39)))));
        var_31 = ((/* implicit */short) (unsigned char)81);
    }
    var_32 |= ((/* implicit */signed char) max(((unsigned short)60344), (((/* implicit */unsigned short) (signed char)-47))));
}
