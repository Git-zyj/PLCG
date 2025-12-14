/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53429
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) min(((+(var_4))), ((-(var_2)))))) ? ((((!(((/* implicit */_Bool) 1788767309U)))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (1640903592U))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)9), ((unsigned char)243))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(_Bool)1] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) arr_1 [i_0] [i_0]));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_4))));
                            arr_10 [(signed char)6] [(signed char)6] [(signed char)6] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned long long int) var_4);
}
