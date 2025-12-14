/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216969
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) (signed char)108))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))) : (var_4)));
                arr_8 [(signed char)12] [i_1] = ((/* implicit */unsigned int) 1064769626);
                var_14 = ((/* implicit */int) var_2);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_22 [17LL] [i_6] [i_4] [i_5 - 2] [i_4] = ((/* implicit */unsigned int) ((long long int) ((arr_21 [i_2] [i_2] [i_4] [i_3 - 2] [i_2]) || (((/* implicit */_Bool) var_4)))));
                                arr_23 [i_4] [i_4] [i_4] [i_5 - 1] [i_4] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((int) (signed char)63));
}
