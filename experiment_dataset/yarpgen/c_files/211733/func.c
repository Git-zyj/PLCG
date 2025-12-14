/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211733
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
    var_16 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_3)) ? (42647184) : (((/* implicit */int) (unsigned char)181))))))), (var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) (unsigned char)75);
                arr_7 [i_1] [i_0] = ((/* implicit */int) (signed char)37);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61197))) == (arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1] [(unsigned short)10] [i_5 - 1]))));
                                var_19 *= ((/* implicit */signed char) arr_13 [i_5 + 1] [i_5] [i_5] [i_5 - 1]);
                            }
                        } 
                    } 
                } 
                var_20 = max((((/* implicit */int) ((short) arr_19 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3]))), (arr_16 [i_2]));
            }
        } 
    } 
}
