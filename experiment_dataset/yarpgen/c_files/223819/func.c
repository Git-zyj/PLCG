/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223819
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
    var_20 += ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (12652876814886309277ULL))) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
    var_21 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_13)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned int) ((max(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) 13483157271707296988ULL)))))) ? (max((((13295912182270003795ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_11)))) : (((((((/* implicit */unsigned long long int) -3)) / (var_17))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (max((58720256U), (((/* implicit */unsigned int) (unsigned short)49152))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((var_12) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) var_7))))))) : (var_5)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_20 [i_2] [i_5] [i_2] [i_1] [i_5] [(unsigned short)8] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) 4U)))));
                                var_24 ^= ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
