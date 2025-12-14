/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51437
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
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0 + 2] [i_1 - 3] [(_Bool)1] = ((/* implicit */long long int) (unsigned short)51112);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_1 - 2] [(unsigned short)3] [i_4])) ? (((/* implicit */int) ((unsigned char) arr_11 [(unsigned char)15] [(unsigned short)22] [i_2] [17ULL]))) : ((~(((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [(signed char)22] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [14ULL] [i_3] [i_4]))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (((long long int) var_4))))));
                                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_9 [i_0 - 2] [i_1 - 3] [i_2] [i_3]))) ? (((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (arr_3 [i_0 - 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_4])) : (((/* implicit */int) arr_9 [i_0 - 2] [i_1 - 1] [(unsigned short)5] [i_0 - 2])))) != (((/* implicit */int) var_5))))))));
                                arr_13 [(_Bool)1] [i_1 - 2] [1LL] [i_3] [i_4] [i_3] = (~((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14424))))))));
                                var_12 = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    var_13 = (+(((/* implicit */int) arr_9 [(short)7] [i_1 - 2] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)14433)))))))) >= (((long long int) var_2))));
    var_15 = ((/* implicit */signed char) var_8);
    var_16 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */int) var_2)) - (((/* implicit */int) var_3)))) + ((-(((/* implicit */int) var_9)))))));
}
