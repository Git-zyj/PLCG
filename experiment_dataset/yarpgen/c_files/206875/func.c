/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206875
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
    var_19 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)255))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) max((min((0U), (arr_4 [(_Bool)1] [i_0] [i_0 - 2]))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)26)), (max((var_0), (((/* implicit */short) var_1)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_10);
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) (unsigned char)255))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))) : (max((var_5), (var_2))))) >> (((long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
