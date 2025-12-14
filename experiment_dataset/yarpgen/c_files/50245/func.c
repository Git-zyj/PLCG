/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50245
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36293)) & (((/* implicit */int) (unsigned short)36293))))) > (min((-8727435378350452971LL), (((/* implicit */long long int) (signed char)-36))))));
                        var_20 = ((/* implicit */short) arr_10 [(short)1] [(short)1] [i_2] [i_3 - 2]);
                        arr_13 [i_1] [i_3] [i_3] [i_1] [i_1 + 4] = (+((+(arr_0 [i_3 - 1]))));
                        arr_14 [i_0] [i_0] [i_1 + 4] [i_3] [i_3 - 1] = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]));
                    }
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6343)) ? ((+(((var_11) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_0])) : (((/* implicit */int) (short)11145)))))) : (((/* implicit */int) (!(var_11))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned long long int) var_16));
    var_23 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) min((1472831865858863685ULL), (((/* implicit */unsigned long long int) var_6))))) ? (3ULL) : (((/* implicit */unsigned long long int) (+(0U))))))));
}
