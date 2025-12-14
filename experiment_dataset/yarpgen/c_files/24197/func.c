/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24197
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 268435455U)) ? (((/* implicit */long long int) 268435456U)) : (6454546430926570903LL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_4])))));
                                var_12 = ((/* implicit */unsigned int) (+(((long long int) arr_0 [i_0]))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (arr_7 [i_0] [i_0])))) && (((/* implicit */_Bool) ((arr_4 [i_3] [i_3] [i_3]) ? ((((_Bool)1) ? (arr_3 [i_0] [i_2] [i_3]) : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)1)), (arr_7 [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (arr_7 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2])) ? (-379890984) : (arr_8 [i_0] [i_1] [i_2] [i_0] [i_2])))) : (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2])))) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 6918813201554510373LL)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_7);
}
