/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44270
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_15 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_2 + 1] [7U] [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1] [i_1] [7ULL]))))), (max((((unsigned int) var_8)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (1889044923))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */int) var_12);
                        var_18 = (+(max((((arr_12 [i_1]) % (((/* implicit */long long int) -1283437149)))), (((/* implicit */long long int) ((6839778117969290884ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94)))))))));
                        var_19 = ((unsigned short) (-(((/* implicit */int) var_0))));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (max((var_4), (((/* implicit */long long int) var_3)))))), (var_6)));
                        var_21 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)2658))));
                        var_22 = max((min((arr_15 [i_2 + 1] [i_2] [i_2 - 1]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) var_12)));
                    }
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        var_23 *= ((/* implicit */unsigned int) arr_3 [i_5] [i_5] [i_5]);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(var_1))) + (((/* implicit */unsigned int) var_10))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    }
                }
            } 
        } 
    } 
}
