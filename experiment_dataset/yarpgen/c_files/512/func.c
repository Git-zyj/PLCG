/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/512
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) : (min((((/* implicit */unsigned long long int) 1631508970U)), (arr_3 [i_0]))))) >> ((((-(((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1 + 4]))))))) - (8834439616905848635LL)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                            var_13 -= ((/* implicit */unsigned short) min(((+(var_10))), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (386561565)));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
    var_16 ^= 2663458325U;
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned short)150), (var_4))))))) : (((((_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((var_6) ? (var_9) : (2663458325U)))))));
}
