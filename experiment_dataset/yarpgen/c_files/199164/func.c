/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199164
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_0)) < (((/* implicit */int) ((-1LL) == (-1LL)))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) var_15);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6)))))) ? (((/* implicit */int) var_14)) : (max((arr_5 [i_1] [i_3] [i_4 + 1] [i_4 - 1]), (((/* implicit */int) arr_12 [i_0] [i_4 + 1] [i_3 - 1] [i_3] [i_4 - 1]))))));
                                var_18 = ((/* implicit */short) 4294967295U);
                                arr_15 [i_0] [i_1] [i_2] [i_2 - 1] [i_0] [i_4] = ((/* implicit */short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) != (((((/* implicit */_Bool) -2LL)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_3 + 3] [i_4])))))))));
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((var_2) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_12 [i_0] [i_4] [i_2 - 1] [i_3] [i_4 - 1])))), (((/* implicit */int) arr_12 [i_1] [i_3 - 1] [i_3 + 3] [i_3] [i_4])))))));
                                arr_16 [i_0] [i_0] [i_2 + 1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) max(((_Bool)1), (arr_7 [i_0] [i_1] [i_2 - 1] [i_3]))))))) ? ((-((((_Bool)1) ? (-7499708379180404622LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1] [i_3 + 3])))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((var_2), ((_Bool)1))))));
                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65525))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned int) arr_19 [i_5]);
        var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)30)) << (((((/* implicit */int) var_10)) - (100))))));
    }
}
