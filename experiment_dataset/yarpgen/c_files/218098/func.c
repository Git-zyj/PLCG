/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218098
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
    var_18 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        var_19 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (18267735145921117970ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_20 = ((/* implicit */unsigned int) ((-711302397) >= (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) (-(arr_3 [i_2] [i_4 - 1] [i_4])));
                        var_22 = ((/* implicit */long long int) var_0);
                        arr_15 [12ULL] [12ULL] [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) && ((!(((/* implicit */_Bool) arr_0 [(short)5] [i_1]))))));
                        var_23 = ((/* implicit */long long int) var_11);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_4)) - (14)))));
                    }
                    var_25 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))) : (arr_7 [i_0] [(short)15] [(unsigned short)8] [(unsigned short)20])));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) (short)-3478);
    var_27 = ((/* implicit */long long int) var_1);
}
