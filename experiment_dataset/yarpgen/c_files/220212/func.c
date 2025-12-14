/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220212
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
    var_19 = ((/* implicit */_Bool) var_7);
    var_20 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
                                arr_15 [3LL] [i_1] [i_3] [9U] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (((arr_10 [i_2 + 3] [i_2] [i_2 - 2]) << (((arr_10 [i_2 + 3] [i_2 + 3] [i_2 + 3]) - (2040923229))))) : (arr_10 [i_2 - 3] [i_2 + 2] [i_2 - 2])));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((int) arr_2 [i_2 + 3])) << (((/* implicit */int) ((_Bool) var_18)))));
                    arr_16 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (unsigned char)207);
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 4] [i_2])) ? (arr_11 [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 4] [i_2 - 3]) : (arr_11 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 - 4] [i_2 + 1]))) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) -1616139588)) ^ (((unsigned int) var_13)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                arr_25 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 724012181)) > (-3913524719947189341LL))))) > (((long long int) arr_22 [i_5]))));
                arr_26 [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_21 [i_5] [i_6] [i_5]))) ? (((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31434))) : (((((/* implicit */unsigned int) var_13)) ^ (3100439996U))))) : ((-(arr_19 [i_6])))));
                var_24 = ((/* implicit */long long int) ((int) (+(1689409359))));
            }
        } 
    } 
}
