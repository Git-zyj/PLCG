/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214722
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((unsigned long long int) ((int) var_1))))))));
    var_20 = ((/* implicit */short) ((unsigned long long int) (+((+(9222246136947933184ULL))))));
    var_21 = ((/* implicit */unsigned char) 2493899348053638855LL);
    var_22 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((short) ((_Bool) var_11))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_24 += ((/* implicit */int) arr_5 [i_0] [i_0 + 2] [i_0 + 2] [i_0]);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)10932)) ? (((unsigned long long int) arr_8 [i_0] [7LL] [i_0] [i_3])) : (var_13)));
                        }
                    } 
                } 
            }
        } 
    } 
}
