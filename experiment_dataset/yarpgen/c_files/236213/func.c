/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236213
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_4 - 2] [i_2 - 4]))) * (((arr_1 [i_1 - 4]) ? (1845990147) : (((/* implicit */int) var_2))))));
                                arr_14 [i_0] [i_1] [(signed char)0] [i_3] [i_3] [i_1] [i_4 + 1] = arr_8 [i_0] [i_1];
                                var_13 = ((/* implicit */unsigned int) var_10);
                                arr_15 [i_0] [i_1 + 1] [i_0] [i_3] [i_1 + 1] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))))), (((unsigned long long int) (signed char)13))));
                                var_14 *= ((/* implicit */short) 849203671U);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_7 [i_1 - 2] [i_1 - 2])))) ? (((((/* implicit */_Bool) (unsigned char)108)) ? (arr_7 [i_1 - 4] [i_1 - 1]) : (arr_7 [i_1 - 2] [i_1 - 4]))) : (arr_7 [i_1 + 1] [i_1 - 3])));
                var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7))) : (((/* implicit */unsigned int) (~(-1957688529)))))));
                var_16 = ((/* implicit */unsigned short) 1845990168);
            }
        } 
    } 
    var_17 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55745))) / (-2027763665162396514LL)));
}
