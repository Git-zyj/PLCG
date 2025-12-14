/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227036
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (11069633448008855003ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15566))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) 847654599))))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27451))) == (7377110625700696613ULL)))) : (((/* implicit */int) var_14))));
                var_21 += ((/* implicit */int) var_5);
                var_22 = ((/* implicit */unsigned char) max((arr_5 [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_5 [i_0 - 2] [i_1] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_5] [i_3] [i_3 + 1] [i_2] = ((/* implicit */short) 1257565198U);
                                var_23 |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 + 1] [i_3 + 3])) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_2 - 1] [i_3 + 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 2] [i_3 + 1]))))));
                                var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) 2180805936U)) ? (((var_11) ? (var_12) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_3 + 2] [i_2 + 2]))) - (arr_7 [(unsigned char)12])))))), (((/* implicit */unsigned long long int) arr_14 [i_3] [11ULL] [13U] [(unsigned char)10] [15]))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_14 [i_5] [i_3 - 1] [i_4] [(short)14] [i_6]))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) (+(var_0)));
                }
            } 
        } 
    } 
}
