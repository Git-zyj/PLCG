/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236202
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 2] [(signed char)17]))) ^ (arr_3 [i_0 - 1] [i_0 + 1]))) : (min((((/* implicit */long long int) (_Bool)0)), (arr_3 [i_0 - 1] [i_0 + 1])))));
                    var_20 = ((/* implicit */long long int) arr_1 [i_0]);
                    arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_2] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) / (var_14));
                    var_21 = ((/* implicit */signed char) ((unsigned int) arr_5 [i_2] [i_1] [i_0] [i_0]));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (short i_5 = 2; i_5 < 23; i_5 += 2) 
            {
                {
                    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22567)) == (((/* implicit */int) (unsigned short)22567))));
                    arr_16 [i_3] [i_4] [i_5 - 1] = ((/* implicit */int) min((((((max((-6487626570664179098LL), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) << (((arr_15 [i_3] [i_5 - 1]) - (8034978917952721279LL))))), (((/* implicit */long long int) ((var_9) << (((((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_5 - 2])) + (19754))))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_23 = ((((/* implicit */long long int) (~(var_10)))) / (((((/* implicit */_Bool) ((6487626570664179098LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-9389)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_19 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5])), (var_13)))) : (min((((/* implicit */long long int) 1882997434)), (9223372036854775802LL))))));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) (short)-3355)), (6487626570664179102LL))) < (((/* implicit */long long int) ((((/* implicit */int) ((short) 3109694368U))) >> (((/* implicit */int) min(((_Bool)0), (var_12))))))))))));
                            }
                        } 
                    } 
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) arr_19 [i_4 + 3] [i_5 - 1] [i_5 - 2] [i_5])), (arr_9 [i_4] [i_4 - 1])))));
                }
            } 
        } 
    } 
    var_25 = var_15;
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_12)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned char) var_7)))))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) var_0))))))));
}
