/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4486
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
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        arr_9 [i_0] [i_1 + 2] [i_1] [18ULL] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_3] [i_3] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 4] [i_2] [i_0 - 4] [i_3]))) : (var_18)));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)9881)) ? (((/* implicit */unsigned long long int) 519286252698707152LL)) : (3184653345466286769ULL)));
                            var_19 |= var_9;
                        }
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 2] [i_0 - 4] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2]))) >= (var_4)));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_17))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [(short)17] [i_1 + 3] [i_0] = ((/* implicit */int) var_16);
                        var_21 = ((/* implicit */short) min((var_21), (var_2)));
                    }
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) (signed char)-17))))) ? (((/* implicit */int) ((_Bool) -1856296591))) : ((~(((/* implicit */int) var_5)))))))));
                        arr_25 [(_Bool)1] [i_6] [(_Bool)1] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */unsigned long long int) ((arr_22 [i_0 + 3] [i_0 - 1] [i_1 - 3] [i_1 - 3]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_1 + 3] [7ULL]))))) : (min((var_17), (((/* implicit */unsigned long long int) arr_22 [i_0 + 3] [i_0 - 3] [i_1 + 2] [i_6]))))));
                        arr_26 [(_Bool)0] [i_6] [i_6] [i_0] &= ((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0 - 4] [i_1 - 3] [i_1 - 2])) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    var_23 = ((/* implicit */_Bool) ((short) max((((int) var_17)), (((/* implicit */int) min(((signed char)-7), ((signed char)-7)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_13);
}
