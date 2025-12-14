/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4066
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
    var_13 |= ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) (-(var_5)))), (((var_6) ? (var_10) : (((/* implicit */long long int) 0U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [22ULL] [i_3] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(_Bool)1] [i_3]))));
                            var_14 = ((/* implicit */unsigned short) arr_3 [i_2]);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [6] [i_1 + 2])) < (((/* implicit */int) ((unsigned short) var_11)))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_15 = ((/* implicit */short) arr_4 [i_1] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14U)) && (((/* implicit */_Bool) arr_5 [i_1 + 2])))))) + (var_3)));
                        var_17 ^= ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_0 [i_4])))));
                        var_18 = ((/* implicit */unsigned short) (~((-(arr_5 [i_1 + 1])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_4] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) 1216704249618633732ULL)) ? (((/* implicit */int) (short)-23875)) : (((/* implicit */int) (unsigned short)9061))))));
                        var_19 *= ((/* implicit */long long int) (+(((/* implicit */int) ((min((var_8), (((/* implicit */long long int) var_5)))) == (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_0] [i_1] [i_4] [i_6]), (((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0] [i_0])))))))))));
                    }
                }
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0] [i_1] [i_1 - 1])))))))));
                arr_23 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [i_1] [i_1] [12LL] [i_1] [i_1] [(short)17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (arr_6 [2ULL] [i_1])))))) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (short)23888);
    var_21 = ((/* implicit */short) var_1);
}
