/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3517
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
    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (~(var_15))))) ? (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10858748027296013140ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27392))))) && (((/* implicit */_Bool) min((((/* implicit */int) var_16)), (var_11))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3] [4ULL] = ((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_1] [i_1]);
                        var_19 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])))) && ((_Bool)1)));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */_Bool) 15775144945550213704ULL)) && (((/* implicit */_Bool) arr_8 [1LL] [i_1]))))) : (((/* implicit */int) (_Bool)1))));
                        var_21 += ((/* implicit */int) ((short) ((_Bool) arr_1 [(_Bool)1] [i_1])));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        arr_15 [(signed char)7] [i_1] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_17))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) 2524110613U)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((long long int) (signed char)-94));
                        var_24 = ((/* implicit */short) min((var_24), (arr_17 [i_0])));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 2])) && (((/* implicit */_Bool) 1254049461))))));
                        arr_18 [i_2] [i_1] [i_2] [i_5] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_6 [i_0] [i_2 + 4] [i_0])))))))));
                }
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(arr_0 [i_0]))))));
            }
        } 
    } 
}
