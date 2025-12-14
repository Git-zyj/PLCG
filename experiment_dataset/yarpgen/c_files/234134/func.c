/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234134
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)22)))) || (((/* implicit */_Bool) ((int) var_15)))))), (var_10))))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)22))))))))))));
    var_19 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (arr_4 [i_0] [i_1 - 2])));
                                arr_14 [i_0] [3ULL] [i_1] [i_0] [(signed char)0] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [(short)6] [i_3 - 1] [i_4] [i_3]))))));
                                var_21 ^= ((/* implicit */_Bool) ((short) ((-5557427242656374384LL) == (((/* implicit */long long int) 908781U)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 + 1] [i_1])))));
                }
            } 
        } 
    } 
}
