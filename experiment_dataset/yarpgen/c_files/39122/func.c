/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39122
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)21442)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : ((+(15969624978491552196ULL)))))) ? (((/* implicit */unsigned long long int) var_7)) : (var_4));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) 6823963565940361441LL))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_2 [i_1 - 1])) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 1] [i_3 + 3] [i_1 - 2]))))));
                                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (unsigned short)59879)) : (((/* implicit */int) (unsigned short)5656)))))))) && (((/* implicit */_Bool) (+(arr_4 [i_1 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned char) var_7);
}
