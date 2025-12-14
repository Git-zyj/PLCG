/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21077
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? (((arr_0 [(_Bool)1] [i_0]) * (arr_0 [i_0] [i_0]))) : ((+(arr_0 [i_0] [i_0])))));
        var_12 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_13 *= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (26323)))));
    }
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_9))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))), (((((((/* implicit */int) var_2)) & (((/* implicit */int) var_3)))) - (((((/* implicit */int) var_6)) - (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */short) (-(((/* implicit */int) min((arr_5 [i_2 - 1]), (((/* implicit */short) arr_2 [i_2 + 1])))))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2] [i_2 + 2] [i_3]))))))))));
                            arr_14 [i_1] [i_2] [9U] [i_1] [9U] [9U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_4]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [5LL])), (arr_7 [i_1] [i_1]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_1]), (arr_2 [i_4 + 2]))))) ^ (((arr_0 [(_Bool)1] [i_4]) & (arr_0 [(short)5] [i_3])))))));
                            arr_15 [i_1] = ((/* implicit */unsigned int) arr_7 [i_4] [i_3]);
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_1] [i_2 + 2] [(unsigned char)8] [i_4])) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned short)65284))))))))));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */_Bool) arr_6 [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (((-(var_1))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))), (var_9)));
}
