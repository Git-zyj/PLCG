/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50014
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
    var_10 |= ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 -= ((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) || (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_11 [i_0] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */int) (!((!(arr_12 [i_0]))))))));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (14979310806189464012ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))))) << (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0])), (3467433267520087604ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_14 += (+(((long long int) (~(((/* implicit */int) (_Bool)1))))));
}
