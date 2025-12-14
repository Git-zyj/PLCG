/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38255
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1024)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) & (max((((/* implicit */unsigned long long int) var_8)), (var_15)))))))));
    var_20 = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8))))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (min((((/* implicit */unsigned short) var_0)), (var_18))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_0] = (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2]))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2 - 1] [i_3])) ? (((/* implicit */long long int) arr_9 [i_0] [i_1 - 1] [i_1] [i_2] [i_3])) : (var_4))))));
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_1] [(_Bool)1] [i_1] [i_1 - 1])) - (((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1]))))));
                        }
                    } 
                } 
                arr_13 [i_1 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) var_4)))), (var_15)));
                arr_14 [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 2]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_1 - 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_22 &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_0 + 2])), (var_16))))))));
                            var_23 = max((arr_3 [i_5]), (max(((unsigned char)11), (((unsigned char) arr_5 [i_1])))));
                            var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_0 + 2] [i_0 + 2] [3U] [i_5 - 2])), (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [19LL] [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((-1LL), (((/* implicit */long long int) ((unsigned short) 10239283009552583913ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
