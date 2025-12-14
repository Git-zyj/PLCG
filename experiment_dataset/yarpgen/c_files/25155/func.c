/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25155
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)60978)) > (-1715345488)))))) : (((/* implicit */int) var_10))));
    var_20 |= ((/* implicit */_Bool) var_9);
    var_21 -= ((/* implicit */unsigned long long int) ((((var_15) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)249))))))) ? (min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (4) : (((/* implicit */int) var_16))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) 24U)) ? (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) -1579209349))))) : (((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)255)), (var_12)))) + (3685270920088171156LL)))))));
                                var_23 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_8 [i_4 + 1]))))))) < (((/* implicit */int) max((arr_6 [i_0] [i_1 + 2] [i_2 + 3]), (arr_12 [i_1 + 1] [i_2 + 2] [i_4 + 2]))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] = ((/* implicit */_Bool) min((((((((/* implicit */unsigned int) -1880424116)) - (4294967271U))) + (24U))), (((/* implicit */unsigned int) arr_8 [i_0]))));
                    var_24 ^= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) * (67104768ULL))), (((/* implicit */unsigned long long int) 24U))));
                    arr_14 [i_0] = ((/* implicit */unsigned char) var_16);
                }
            } 
        } 
    } 
}
