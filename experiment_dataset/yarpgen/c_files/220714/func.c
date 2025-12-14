/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220714
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
    var_12 += ((/* implicit */short) (!((!(((((/* implicit */_Bool) 9223372036854775794LL)) && (((/* implicit */_Bool) -3884061329048073464LL))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 += ((/* implicit */long long int) ((int) (unsigned short)32767));
                            var_14 ^= ((/* implicit */long long int) (short)0);
                            var_15 -= (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) (unsigned short)49920)), (var_8))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */long long int) ((arr_6 [i_1] [(signed char)2] [i_0] [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) : (min((((/* implicit */long long int) (unsigned short)31270)), (673212689284302604LL)))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)34269)))), (((long long int) (signed char)(-127 - 1))))) + (9223372036854775807LL))) << (((/* implicit */int) var_11))));
    var_18 += ((/* implicit */unsigned short) ((unsigned char) var_2));
}
