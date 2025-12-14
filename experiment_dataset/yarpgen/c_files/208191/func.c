/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208191
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
    var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)235)) / (((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned int) min((-1333125264), ((-2147483647 - 1))))) : (0U)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2 + 3] = ((/* implicit */int) (unsigned char)4);
                            var_16 = ((/* implicit */unsigned short) -1498301000);
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -298704017))));
            }
        } 
    } 
}
