/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197522
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (var_13))))) + (((((/* implicit */_Bool) 6LL)) ? (1777763764191396909LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (unsigned short)127);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 4]))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_3))));
                                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((8282857504737364883LL), (arr_8 [i_2] [i_3]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))))))));
                            }
                        } 
                    } 
                } 
                var_18 -= ((/* implicit */_Bool) 11545281798700331645ULL);
                var_19 = ((/* implicit */short) var_13);
            }
        } 
    } 
}
