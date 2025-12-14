/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224406
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */short) min((((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [(short)0] [i_1])) : (arr_8 [(short)17] [i_2] [i_3] [(short)17]))) / (((/* implicit */unsigned long long int) (+(1005618034U)))))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)63)))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (3ULL)))))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1797959492U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_5 [18LL] [i_3] [18LL])))), (26730099356448975ULL)))));
                                var_18 = ((/* implicit */signed char) min(((unsigned short)15741), (((/* implicit */unsigned short) (signed char)-32))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_9 [(unsigned short)9] [i_1] [i_2]), ((signed char)102))))))) & (arr_4 [i_0])));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)-17)), (arr_0 [i_0]))))))) & (((((/* implicit */_Bool) 2112682374)) ? (-357206700) : (((/* implicit */int) (short)-1))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned int) (+((-(var_12))))));
}
