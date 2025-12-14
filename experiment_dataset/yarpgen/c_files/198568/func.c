/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198568
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
    var_16 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? ((~(1023ULL))) : (min((1011ULL), (1023ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_17 = ((/* implicit */signed char) var_9);
    var_18 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [(short)15] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_1 + 1] [i_2] [(_Bool)1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0])) % (((/* implicit */int) var_2))))) : (var_9)))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) arr_12 [(unsigned short)19] [i_3] [i_3] [12ULL] [i_1] [i_0] [i_0])))) < (((/* implicit */int) max(((_Bool)1), (arr_2 [i_0] [i_0]))))))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_3] [i_4]))))) ? (((long long int) var_13)) : (((/* implicit */long long int) min((var_6), (((/* implicit */int) arr_10 [i_4 + 1] [i_3] [i_1] [(signed char)0]))))))) - (20911LL)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) max(((_Bool)1), (arr_3 [i_0 + 1])))) >> (((/* implicit */int) ((short) arr_3 [i_0 - 2])))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((unsigned long long int) arr_7 [i_0 - 3] [i_0 + 2] [i_0 - 4] [(_Bool)1])) : (max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) (signed char)0)), (var_12)))))));
                }
            } 
        } 
    } 
}
