/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53310
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)156))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 11574670065698263125ULL)) ? (((/* implicit */int) (unsigned short)61785)) : (((/* implicit */int) (unsigned char)119))))) ? ((-(((/* implicit */int) (unsigned char)109)))) : (((/* implicit */int) (unsigned char)128)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned int) arr_5 [i_3]);
                                arr_14 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_8 [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
