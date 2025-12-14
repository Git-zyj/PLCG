/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204580
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
    var_15 &= ((/* implicit */unsigned long long int) (+(var_12)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min(((_Bool)1), (arr_5 [i_0] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 - 1]))) & (((2341819631U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96)))))) ? ((-(6969660418354302150ULL))) : (((/* implicit */unsigned long long int) ((arr_11 [i_4] [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_0] [i_3])) : (((/* implicit */int) (short)31448)))))))));
                                var_18 ^= var_4;
                                var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)26798)))))), ((+(((((/* implicit */_Bool) 5062301855225058052LL)) ? (((/* implicit */unsigned long long int) var_1)) : (var_2)))))));
                                var_20 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_6 [i_1 - 1] [9ULL] [i_2 + 2] [9U])))) + ((-(((/* implicit */int) (unsigned char)185))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (_Bool)1);
}
