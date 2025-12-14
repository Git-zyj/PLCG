/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33368
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
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_7)))))), (((/* implicit */int) var_2))));
        var_17 = ((/* implicit */long long int) (signed char)-1);
    }
    for (unsigned int i_1 = 2; i_1 < 7; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48902)) ^ (((/* implicit */int) var_3))))), (((long long int) var_8))))) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */int) max(((unsigned char)51), (((/* implicit */unsigned char) (_Bool)1))))) / (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_1 [i_1]))))))));
        arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) arr_1 [i_1]))), (((unsigned int) (_Bool)1)))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (signed char)0);
        arr_8 [i_2] = ((/* implicit */_Bool) ((((arr_6 [i_2] [i_2 + 1]) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))) >> (((((/* implicit */int) ((unsigned char) var_5))) - (187)))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */signed char) max((((_Bool) (_Bool)1)), ((_Bool)0)))), ((signed char)-1)));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) -4LL);
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((min((2735407127376135274LL), (((/* implicit */long long int) (signed char)0)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_5 - 1] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_12 [i_5 - 1])))))))));
                            var_21 = ((/* implicit */unsigned int) var_3);
                            var_22 ^= ((/* implicit */_Bool) min((3909997778U), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
                var_23 *= ((/* implicit */signed char) ((_Bool) ((unsigned int) (signed char)64)));
                arr_22 [i_4] = ((long long int) var_4);
            }
        } 
    } 
}
