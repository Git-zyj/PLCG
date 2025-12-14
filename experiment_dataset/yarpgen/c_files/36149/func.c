/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36149
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
    var_14 *= ((/* implicit */unsigned long long int) max((((var_3) == (var_11))), (((((/* implicit */int) (short)-13361)) < (((/* implicit */int) (short)13365))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) (short)-13361);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */int) min((((((/* implicit */_Bool) ((long long int) arr_11 [i_0] [7LL] [7LL] [i_3]))) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13361))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0 - 1] [i_2]), (((/* implicit */short) arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0 + 1])))))))), (((/* implicit */unsigned int) ((arr_6 [i_1]) && (arr_6 [i_4]))))));
                                arr_16 [(unsigned short)6] [(_Bool)1] [i_0] [i_3] [i_4] [(unsigned short)6] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_14 [i_0 - 2] [i_0])) - (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0])) << (((((/* implicit */int) arr_8 [i_0 - 3] [i_0])) - (48))))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) ((min((((arr_13 [i_0] [i_0] [i_1] [i_5 + 1] [i_5] [i_6] [i_7 - 1]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) 1865279488)))) / (max((((long long int) (unsigned char)108)), (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [11] [i_0])))));
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_10)), (arr_15 [i_0] [i_0] [(short)10] [i_5 - 1] [1ULL] [i_6] [i_7]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [i_5 + 1] [i_6]))));
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) max((var_7), (((/* implicit */long long int) -827465972))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_1);
}
