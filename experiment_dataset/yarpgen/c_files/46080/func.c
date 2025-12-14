/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46080
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
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) var_15);
                            arr_13 [i_0] [i_1] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) -1);
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (!(((arr_11 [i_0] [i_0] [i_1] [i_1]) >= (arr_11 [i_0] [i_1] [i_0] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))));
        arr_17 [i_4] = ((/* implicit */signed char) var_2);
        var_22 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)211)))) % (((/* implicit */int) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4])) > (((/* implicit */int) arr_4 [0LL] [i_4])))))))));
    }
}
