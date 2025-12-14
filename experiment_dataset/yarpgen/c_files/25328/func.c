/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25328
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
    var_17 = ((/* implicit */unsigned short) (-(3635288405517186908LL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */long long int) max(((~(arr_1 [i_0]))), (((((/* implicit */_Bool) 3635288405517186917LL)) ? (arr_3 [(unsigned char)8] [i_2 - 1]) : (arr_3 [(unsigned char)9] [i_2 + 1])))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25395)))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3635288405517186909LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25386))) : (-3635288405517186908LL))))));
                        var_20 = ((/* implicit */signed char) 3909015465152159023LL);
                    }
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42388)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (0U)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
}
