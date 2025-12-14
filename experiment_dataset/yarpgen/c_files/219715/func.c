/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219715
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2934111854U))))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) var_12))))));
    var_20 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    arr_10 [i_2] [4ULL] [4ULL] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_3 [i_2 + 2] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    arr_11 [i_0] [i_1] [i_1 + 3] [i_2] = ((/* implicit */_Bool) 1360855441U);
                }
                /* LoopSeq 1 */
                for (short i_3 = 4; i_3 < 13; i_3 += 4) 
                {
                    arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 633251187U)))))))) / (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42493))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_4 [12ULL] [i_1]))) - (arr_7 [i_0] [i_0] [i_0])))))));
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1360855465U))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) (((_Bool)0) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42493)))))) + (((((/* implicit */_Bool) 2934111848U)) ? (var_3) : (((/* implicit */unsigned long long int) 2934111848U)))))))))));
                }
                var_23 = ((/* implicit */unsigned char) ((signed char) ((_Bool) (~(((/* implicit */int) (signed char)-98))))));
            }
        } 
    } 
}
