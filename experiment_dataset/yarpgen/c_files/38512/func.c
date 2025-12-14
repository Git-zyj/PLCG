/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38512
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
    var_11 = ((/* implicit */unsigned int) ((unsigned char) 16215513796238280104ULL));
    var_12 = ((/* implicit */unsigned short) ((min((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_13 = (+(var_6));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((arr_0 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2])) / (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 2]))))))))));
                var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])), ((~(((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_5 [17LL] [i_1] [i_1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((4294967288U) <= (3U)));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) 2650506691U))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_17 = (-(arr_7 [(unsigned char)14] [i_1] [i_0] [i_4]));
                            var_18 = ((unsigned int) arr_11 [i_3 + 1] [i_0] [i_2 - 2] [i_0] [i_0]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_15 [i_0 + 1] [i_1] [i_2] [2] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)8] [(unsigned char)8] [i_1] [i_5])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_6 [i_0] [i_2] [i_0])))) <= (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [(signed char)1])) : (var_6))))))));
                        }
                    }
                }
            }
        } 
    } 
}
