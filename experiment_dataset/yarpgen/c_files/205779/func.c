/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205779
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
    var_13 = ((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_4))));
    var_14 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 625943065U)) || (((/* implicit */_Bool) 603650281U))))));
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)32766)));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */short) max((((1528948838899361506LL) | (((/* implicit */long long int) arr_3 [i_2 - 1] [i_0 - 2])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32769))) >= (arr_3 [i_2 - 1] [i_0 - 2]))))));
                    arr_9 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_2] [i_4] [i_0 - 4] [i_4] = ((/* implicit */short) (~((~(arr_13 [i_0])))));
                                var_16 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((536870912U), (((/* implicit */unsigned int) -296307376))))))))) ^ (min((var_12), (((/* implicit */long long int) 3423605506U)))));
                                arr_18 [i_2] [i_2 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((0ULL) << (((/* implicit */int) (_Bool)0))))) ? ((~(var_3))) : (arr_12 [i_0 + 1] [i_1] [i_2] [i_2] [i_2 - 2])))) ? (((((/* implicit */_Bool) max((var_11), ((short)26678)))) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_2 + 1] [i_4 - 1] [i_4 + 1] [i_2] [i_4 - 2])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_0 - 2] [i_3] [i_2 + 1] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3])) ? ((+(-518906363))) : (((((/* implicit */_Bool) var_4)) ? (0) : (((/* implicit */int) (signed char)-66))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
