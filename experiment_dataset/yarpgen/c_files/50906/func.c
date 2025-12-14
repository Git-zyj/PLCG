/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50906
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
    var_15 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((signed char) 1888754078673371301LL)))) && (((/* implicit */_Bool) arr_2 [i_1] [i_0]))));
                var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_2 [i_0] [i_1])))), (((/* implicit */int) max(((signed char)108), (arr_2 [i_0] [i_1]))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) var_6);
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_4)))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_12 [i_5] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) min((arr_4 [i_3] [i_3] [i_3] [i_0]), (min((arr_5 [i_4 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned short) (signed char)126))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? ((-(((/* implicit */int) (signed char)-109)))) : ((~(((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((var_21), (max((((var_2) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) arr_4 [i_0] [i_3] [i_3] [i_0])))), (((/* implicit */int) ((signed char) (signed char)104)))))));
                }
                var_22 ^= ((/* implicit */short) (+(((/* implicit */int) (signed char)108))));
            }
        } 
    } 
}
