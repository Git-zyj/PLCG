/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27484
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
    var_19 = ((/* implicit */short) var_8);
    var_20 &= ((/* implicit */signed char) ((((/* implicit */int) (short)-31889)) == (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 = arr_1 [i_0];
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_10 [i_4] [16ULL] [i_1]))))));
                                arr_13 [i_1 + 1] [12LL] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_4])) ? (((/* implicit */int) (short)-31889)) : (((/* implicit */int) ((unsigned short) arr_6 [i_2] [0U] [(signed char)5])))))) ? (((/* implicit */int) arr_3 [i_2] [i_3])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)35)) < (((/* implicit */int) arr_3 [i_3] [i_1])))))));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (arr_2 [i_4] [i_2 - 1] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
