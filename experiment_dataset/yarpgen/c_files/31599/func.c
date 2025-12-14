/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31599
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_11)))) ? (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_2))))) : ((~(var_9)))));
                            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))), (((/* implicit */long long int) ((((((/* implicit */int) var_0)) / (((/* implicit */int) var_8)))) * (((int) var_6))))))))));
                            arr_13 [i_2 - 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_11)))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */short) ((((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) / (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 5397833246264022747ULL)) ? (6428397699597200646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_14 &= ((/* implicit */long long int) ((((/* implicit */int) max((var_8), (var_10)))) - (((/* implicit */int) var_2))));
    var_15 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_5)))) ? (min((var_3), (((/* implicit */unsigned int) var_6)))) : (((((/* implicit */_Bool) 732326817U)) ? (3562640497U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_17 [i_4] [10LL] = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
        var_16 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_6))))));
        arr_18 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (var_5) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_6)))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_5), (var_5))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))))))) : (max((var_1), (((/* implicit */unsigned int) var_7))))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))) == (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (var_8))))) & (min((var_3), (((/* implicit */unsigned int) var_6)))))))));
    }
}
