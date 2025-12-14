/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192136
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
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
    var_14 = ((/* implicit */short) var_10);
    var_15 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)38941)) >= (((/* implicit */int) var_2))))), (max((var_8), (((/* implicit */signed char) var_11))))))) == (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (~(arr_0 [i_0])));
                    var_16 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)23336)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (arr_0 [i_2]))), ((-((+(arr_0 [i_0])))))));
                    var_17 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_2] = (short)-23337;
                                arr_15 [(short)12] = ((/* implicit */long long int) ((unsigned char) arr_4 [(unsigned short)17]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
