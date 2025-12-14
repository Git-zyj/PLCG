/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27943
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_1] [i_1 - 3] [i_0]));
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((max((6512390711245225474LL), (((/* implicit */long long int) (_Bool)1)))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((arr_3 [i_0 - 3]) ? (var_10) : (3312167641U)))))) ? (max((((/* implicit */int) ((((/* implicit */unsigned long long int) 1730429948U)) <= (27ULL)))), (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_2)) : (arr_0 [(_Bool)1]))))) : (var_5))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) max((8125106790087895252LL), (-5166007109250739850LL)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(short)3] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_7 [i_0])))), (var_12)))), (((unsigned char) ((unsigned short) arr_4 [i_0 - 4] [i_0] [i_0])))));
                            var_16 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */long long int) var_3))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)150)), (2564537363U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned short) var_4));
}
