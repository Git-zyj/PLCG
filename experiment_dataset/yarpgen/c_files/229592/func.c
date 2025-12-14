/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229592
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 = ((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1])) > (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [(signed char)9] [i_3 + 1] [i_3 - 1]))) & (1608241865U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)12] [i_1] [i_1]))));
                                arr_16 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)1355)))))), ((+(1608241845U)))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [i_2] = max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10833))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) 0U)) : (var_3))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_9)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))))), (((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (19U) : (arr_7 [(unsigned char)17] [9ULL] [i_2])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) 975033848367996260LL);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_3))));
    var_19 = ((/* implicit */unsigned short) 867536623965232997ULL);
}
