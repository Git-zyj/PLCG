/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192538
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned char) min((((1287222537) - (((/* implicit */int) (unsigned short)511)))), (arr_6 [0])));
                            var_16 = ((((/* implicit */_Bool) var_10)) ? ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) var_7)))))) : ((-(((/* implicit */int) (signed char)60)))));
                            var_17 += ((/* implicit */int) var_7);
                            var_18 += (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((((/* implicit */int) arr_13 [i_0] [(signed char)4] [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [(short)9])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)65012))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) > (arr_7 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((var_8) ? (var_4) : (((/* implicit */int) var_11))))))) || (var_13)));
}
