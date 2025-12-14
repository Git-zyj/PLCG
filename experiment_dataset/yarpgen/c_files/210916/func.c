/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210916
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
    var_10 = ((/* implicit */unsigned char) var_0);
    var_11 -= ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((((((((/* implicit */int) (signed char)-120)) + (2147483647))) << (((((/* implicit */int) (unsigned char)253)) - (253))))) & (((/* implicit */int) arr_6 [0U])))))))));
                                var_13 = ((/* implicit */unsigned char) arr_9 [i_0] [i_2] [i_3]);
                                var_14 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)2] [i_0] [(unsigned short)2] [i_0]))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)113)) << (((((/* implicit */int) arr_4 [i_2] [i_3] [i_2])) + (24957)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_0] |= ((/* implicit */short) 1405943229602646492ULL);
            }
        } 
    } 
}
