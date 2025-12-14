/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222970
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
    var_10 &= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] &= ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [i_1] [i_0])), (arr_10 [i_0] [i_1 - 2] [i_2] [i_3]))))) & (var_3))), (((/* implicit */long long int) 4294967295U))));
                            var_11 = ((/* implicit */unsigned short) (signed char)-64);
                        }
                    } 
                } 
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0] [i_0])) % (((/* implicit */int) (signed char)113)))), (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0])), (arr_10 [i_0] [i_0] [i_0] [3LL]))))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((_Bool) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-11)) >= (((/* implicit */int) (unsigned char)170)))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((signed char) (+(var_6))));
    var_15 = var_5;
}
