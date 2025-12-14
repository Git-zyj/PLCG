/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212932
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
    var_11 *= ((/* implicit */short) ((((var_5) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_2 [i_1 + 2] [i_1 + 2] [i_1 - 3]))) <= (((/* implicit */int) max(((unsigned short)17089), (((/* implicit */unsigned short) var_0)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) (unsigned short)17089);
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_9 [i_2 + 1] [i_3])), (arr_2 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) (unsigned short)35458))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)17094)) : (((/* implicit */int) (unsigned short)48459))))))) : (min((arr_2 [i_0] [i_1] [(unsigned short)10]), (((/* implicit */long long int) max(((unsigned short)17102), (((/* implicit */unsigned short) (unsigned char)113)))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((((/* implicit */int) arr_5 [i_1] [i_0] [i_0])) < (((/* implicit */int) var_8)))))))));
            }
        } 
    } 
}
