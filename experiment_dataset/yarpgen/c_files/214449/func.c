/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214449
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
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) ((signed char) ((((var_1) + (9223372036854775807LL))) << (((var_5) - (206061887U))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_11 = (((~(((/* implicit */int) (_Bool)1)))) != ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) var_2))))))));
                            arr_11 [i_3] [18ULL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) arr_5 [i_1] [i_2] [i_3])) + (arr_4 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((2147483625) != (2147483647))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((((/* implicit */int) var_3)) << ((((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))));
    var_13 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))) && (((/* implicit */_Bool) var_5)))));
}
