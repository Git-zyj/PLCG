/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216890
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (+(((/* implicit */int) arr_6 [i_1] [i_2])))))));
                                arr_15 [i_4 + 2] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_3 + 2] [i_3] [i_1] [i_4] [i_4]);
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_7 [i_4 + 1] [(_Bool)1] [i_4] [10ULL]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))) : (2099679650U)))) ? (max((((/* implicit */long long int) 796140595)), (arr_22 [i_0 - 1] [i_0 - 1] [(_Bool)1] [8U] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_2 - 1] [i_5 - 1] [i_2 + 1])))));
                                var_13 &= ((/* implicit */_Bool) arr_13 [i_0] [i_0]);
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) 21ULL))));
                                arr_23 [i_1] = ((/* implicit */long long int) min((((unsigned char) (unsigned char)107)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)67))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 2099679660U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61574))) : (((((/* implicit */_Bool) 3441579948U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1354))) : (2292921560U)))))) ? (((/* implicit */long long int) ((int) (signed char)55))) : (5055123296043729431LL)));
    var_16 = max((((/* implicit */unsigned long long int) (!(var_8)))), (var_4));
}
