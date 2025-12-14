/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208464
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
    var_11 = ((/* implicit */unsigned short) ((int) (signed char)-67));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((short) min((((/* implicit */int) (signed char)-64)), (var_8))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_6))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)63)), (min((13478174438145716128ULL), (((/* implicit */unsigned long long int) arr_4 [i_2 - 2] [i_3 - 3]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */long long int) (!(((((/* implicit */int) arr_5 [i_1] [12] [i_0] [i_4 + 1])) > (arr_12 [i_0] [i_1] [(short)4] [i_3] [i_4])))));
                            var_16 = ((/* implicit */unsigned long long int) var_1);
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) var_1);
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 255)) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (short)5774)))))));
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_19 *= arr_3 [12U];
                            var_20 = arr_13 [i_2] [i_2];
                            var_21 = ((/* implicit */int) (_Bool)1);
                            arr_18 [i_0] [i_1] [i_0] [i_3 + 1] [i_6] = (+((-(((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_6])))));
                        }
                        arr_19 [i_0] [i_3 - 3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((signed char) -25238381306563246LL))) ? (((((/* implicit */_Bool) arr_5 [10LL] [i_1] [i_0] [i_3])) ? (((/* implicit */int) arr_7 [i_1])) : (arr_16 [i_0] [i_0] [(_Bool)1] [i_2 + 1] [i_0] [(signed char)10]))) : (arr_16 [i_2 + 1] [i_0] [i_2] [i_2 + 1] [i_2] [i_2 - 2])))));
                    }
                }
            } 
        } 
    } 
}
