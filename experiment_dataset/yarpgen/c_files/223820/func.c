/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223820
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((7396845663660847730ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)247)))))))));
                    var_20 += ((/* implicit */int) var_15);
                    arr_9 [i_0] [i_0] [i_0] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) 11049898410048703875ULL)))))) : (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [11LL] [i_0] [i_0] [i_0] = max(((~(((/* implicit */int) arr_15 [i_2 - 3] [i_1] [i_2])))), (((/* implicit */int) arr_7 [i_0])));
                                arr_17 [i_0] [i_0] [i_0] [i_2 - 1] [(signed char)22] [i_3] [i_4 - 1] = ((unsigned char) ((long long int) max((((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2])), (var_13))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((11049898410048703895ULL) >> (((883440898) - (883440871))))))));
                }
            } 
        } 
    } 
}
