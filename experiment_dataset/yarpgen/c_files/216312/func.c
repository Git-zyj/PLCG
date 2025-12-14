/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216312
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((max(((signed char)-98), (max(((signed char)-98), ((signed char)117))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_10) - (var_4)))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) arr_2 [i_0]))))) >= (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
        var_19 = ((/* implicit */signed char) ((3567418621731413092LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-98)))));
        arr_6 [i_1] = ((/* implicit */signed char) (-((-(var_4)))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1])))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) ((short) (+(((/* implicit */int) arr_0 [i_2 - 3] [i_4]))))))));
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 - 3])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) <= (0ULL)))) >> (((/* implicit */int) arr_2 [i_2]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 3; i_6 < 10; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_8))));
                            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(var_2)));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */_Bool) -1525210321801826840LL)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (signed char)-52)))) + ((-(((/* implicit */int) arr_1 [i_2]))))))), ((+(var_14))))))));
                        arr_20 [i_2] [i_4] [i_2 - 3] [i_2] &= ((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) max((((/* implicit */long long int) arr_16 [i_2 + 2] [i_3] [i_4] [i_5] [i_5])), (var_2))))), (((short) ((((/* implicit */_Bool) var_16)) ? (2281045143555152431LL) : (((/* implicit */long long int) var_8)))))));
                    }
                }
            } 
        } 
    } 
    var_27 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))));
    var_28 |= ((/* implicit */signed char) var_8);
}
