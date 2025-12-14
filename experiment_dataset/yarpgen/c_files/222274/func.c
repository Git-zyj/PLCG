/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222274
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)4]))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_1 + 1]), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8840313619649858519ULL)) ? ((-(((/* implicit */int) (short)-32160)))) : (((/* implicit */int) (unsigned char)186))))) : (((unsigned int) arr_4 [i_1 + 1] [i_1]))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 6; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 = min((((/* implicit */unsigned long long int) ((_Bool) var_0))), (((((9606430454059693097ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? ((+(arr_8 [i_1] [(short)7]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7214088225209392304ULL)) ? ((+(var_8))) : (9606430454059693097ULL)))) ? ((~(arr_12 [i_1 - 4] [i_1 + 1] [6LL] [i_1 - 4] [i_1] [i_1 - 3]))) : ((+(((/* implicit */int) (unsigned short)59359))))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) var_10)))))));
                                var_16 = ((/* implicit */short) min((((/* implicit */int) var_10)), ((+(((/* implicit */int) arr_15 [i_2 + 3] [i_2 + 2] [i_2 + 4] [i_2 + 4] [i_2 + 2]))))));
                                var_17 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3] [8] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
}
