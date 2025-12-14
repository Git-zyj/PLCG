/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33226
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0 - 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [11LL]))))))))) ^ (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 95962276))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 3]))))));
                                var_20 = (+(((/* implicit */int) (unsigned char)148)));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)126)))))) >= (((/* implicit */int) max((arr_8 [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2]), (arr_8 [i_0 - 2] [i_0] [i_0 + 2] [i_0 + 2]))))));
                                var_22 = ((/* implicit */signed char) (+((-(max((arr_3 [i_1]), (((/* implicit */unsigned long long int) -95962276))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)112))) == (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)12)), (var_7)))))))) * (((min((((/* implicit */unsigned long long int) (short)-8628)), (var_18))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0))))))))));
    var_24 = ((/* implicit */short) (-((-(((/* implicit */int) max((var_9), (var_9))))))));
}
