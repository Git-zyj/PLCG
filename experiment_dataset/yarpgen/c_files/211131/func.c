/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211131
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7)))) : (((var_12) - (((/* implicit */int) var_9))))))), ((((+(var_14))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_21 *= ((/* implicit */_Bool) arr_1 [i_0] [17LL]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned int) var_17)))));
        var_23 = ((/* implicit */unsigned long long int) (unsigned char)54);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) 582370983720987329ULL))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (((17864373089988564286ULL) ^ (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)33)) ^ (var_18))))))));
        var_26 = ((/* implicit */_Bool) ((unsigned char) 17864373089988564285ULL));
        var_27 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (!((_Bool)1))))), (var_12)));
        var_28 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) / (((arr_0 [i_1]) ^ (((((/* implicit */_Bool) 1896414506)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4948134938899890537LL))))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)180))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                var_30 = ((/* implicit */int) 1725817251U);
                var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(33554432)))), (var_19)));
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)17364)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2]))) / (arr_0 [i_2 + 1])))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_33 += ((/* implicit */long long int) arr_13 [i_4]);
                            arr_17 [i_2] [i_3] [i_2] [i_5] [i_3] [i_5] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((arr_9 [i_4] [i_3] [i_2]) ^ (((/* implicit */int) arr_14 [i_2])))) : (((/* implicit */int) (_Bool)1)))))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (-(((unsigned long long int) arr_1 [i_2 - 2] [i_2 - 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
