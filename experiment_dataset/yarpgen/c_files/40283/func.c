/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40283
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) ((2967341394371651932ULL) - (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)106))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (2967341394371651930ULL)))))));
                    arr_9 [i_0] [i_0] [4ULL] = ((-1986831530) / (-889886456));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            {
                arr_16 [i_3] = ((/* implicit */short) (unsigned short)43772);
                arr_17 [i_3] [(_Bool)1] = (unsigned short)58639;
                var_18 += ((/* implicit */unsigned char) (((-(2967341394371651943ULL))) < (max((((/* implicit */unsigned long long int) (_Bool)0)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (6900934656166900002ULL)))))));
            }
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) (unsigned char)13)));
    var_20 = ((/* implicit */_Bool) (unsigned short)39453);
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)13))));
}
