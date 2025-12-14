/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197424
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)19055)) ? (((/* implicit */int) (signed char)102)) : (-304104815)));
                            var_20 = ((((/* implicit */unsigned long long int) (+(arr_2 [i_0 - 2])))) - (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13067))) : (6006847678963545574ULL))));
                            arr_12 [i_0 - 1] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (+(min((arr_6 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_11 [11ULL]))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (short)31016))));
    var_23 = ((/* implicit */_Bool) min((var_23), (var_0)));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) ((((/* implicit */_Bool) (short)8653)) && ((!(((/* implicit */_Bool) var_4))))))) << (((/* implicit */int) var_6))))));
        arr_16 [i_4] = ((/* implicit */unsigned long long int) (short)-31019);
    }
}
