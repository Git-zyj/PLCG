/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215471
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
    var_18 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((_Bool) (-(((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((unsigned char) min((3423635795U), (((/* implicit */unsigned int) (signed char)-85))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (-(-2287356700742705719LL))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)512)))));
                }
            } 
        } 
    } 
}
