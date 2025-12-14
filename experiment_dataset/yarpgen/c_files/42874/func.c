/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42874
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
    var_10 ^= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_8)))) + (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((((var_5) ? (arr_0 [(unsigned short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [3])))))))) == (((/* implicit */unsigned int) var_9))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) arr_4 [(short)14] [17U] [(unsigned short)7]);
                                var_13 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 2] [i_4 - 3] [i_1 + 1]))) * (arr_3 [i_2 + 3] [i_4 + 1])))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_7 [21ULL] [5ULL])) == (min((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [19LL] [(_Bool)1] [(_Bool)1] [(signed char)22] [(_Bool)1]))))), (arr_2 [(signed char)1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((_Bool) var_5))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_4))))))) == (var_2)));
}
