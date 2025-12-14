/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239380
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
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-(var_4)));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_3 [(unsigned char)17] [i_2] [(unsigned char)13]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_16 = ((arr_4 [i_3 + 1]) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (4294967295U) : (((/* implicit */unsigned int) 1017176485))))));
                        var_17 = ((/* implicit */int) arr_2 [i_3 - 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_2] [i_5] = ((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_2] [8LL] [i_5]);
                                arr_18 [i_5] [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_9 [i_1] [i_4 + 1] [i_2])))));
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((((/* implicit */int) arr_7 [16] [i_1] [16] [16])) + (2147483647))) >> (((arr_14 [(unsigned char)8] [(unsigned char)8] [i_2] [i_2] [i_2]) - (4717222956352449464LL)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 1] [(_Bool)1] [i_4 - 1])) - (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((((/* implicit */_Bool) var_3)) ? (arr_15 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 2] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 - 2] [i_2])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1017176485))))) == (max((((/* implicit */int) var_8)), (-1017176485)))));
                }
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_12 [i_0] [i_0])))))));
                var_21 += ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (529907736U)));
            }
        } 
    } 
}
