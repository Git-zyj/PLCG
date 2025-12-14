/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225259
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) ^ (18U)))) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) (signed char)13))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-7)))))));
                    var_20 = var_15;
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) var_16)), (arr_0 [i_0 - 1])))) - (((/* implicit */int) min(((signed char)-5), (arr_0 [i_0 + 1]))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned int) ((max(((_Bool)0), ((!(((/* implicit */_Bool) (unsigned char)0)))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_14 [i_0] [i_1] [i_0] [i_1] = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) ((2438830091U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_24 = ((/* implicit */_Bool) (unsigned char)3);
}
