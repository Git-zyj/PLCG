/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194979
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (short)-7))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) + (349929497743140947LL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((long long int) 17844571960231102961ULL))));
                                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)125)), ((unsigned short)23289))))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [1LL] [4U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_9 [(unsigned short)9] [i_0] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_9 [(unsigned char)1] [i_0] [i_2]))) : (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) arr_13 [i_2] [i_2] [(unsigned short)4] [i_2] [i_0])) : (((/* implicit */int) ((unsigned char) arr_1 [i_0] [(signed char)9]))))))));
                                arr_16 [i_1] [i_0] = ((unsigned short) var_5);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) (+(((unsigned int) arr_12 [i_0 + 1] [10ULL] [i_0] [i_0 - 1] [i_0]))));
                    var_19 = ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -349929497743140948LL)) ? (var_4) : (((/* implicit */long long int) 396803190U)))))))) <= (arr_6 [i_0] [i_0 - 1] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */int) (~(var_10)));
    var_22 += ((/* implicit */long long int) var_5);
}
