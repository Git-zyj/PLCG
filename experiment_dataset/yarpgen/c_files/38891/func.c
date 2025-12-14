/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38891
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */_Bool) 769621370U);
                arr_5 [i_0] [1] = ((/* implicit */signed char) var_12);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]));
                            arr_12 [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) arr_3 [(short)6])), (((((/* implicit */_Bool) max((arr_0 [15]), (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)0] [18LL]))))) : (((int) 0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 &= ((/* implicit */signed char) var_0);
    var_20 = ((/* implicit */short) max(((!(((var_7) && (((/* implicit */_Bool) 0)))))), ((_Bool)1)));
}
