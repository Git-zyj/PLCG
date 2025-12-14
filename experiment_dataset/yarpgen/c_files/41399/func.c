/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41399
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
    var_16 = ((/* implicit */int) (short)-25653);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 &= (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 - 2]))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) 2199022206976ULL))));
                                arr_13 [i_0] [(_Bool)1] [8] [i_0] [i_0] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_1] [(_Bool)1]);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [8ULL] [i_0] [i_0])) : (2199022206976ULL))))) ? (((max((var_5), ((_Bool)1))) ? (min((-1731336987), (-719839348))) : ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (-1) : (-1))) > (((/* implicit */int) ((2199022206988ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76)))))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_2] [i_0] [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? ((-(2))) : ((-(((/* implicit */int) var_12))))))) ? ((-((+(arr_11 [i_2] [i_0] [i_1 + 1] [(_Bool)1] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)153)) ? (-3) : (((/* implicit */int) (signed char)-19))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)31744)))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17667)) ? (-14) : (((/* implicit */int) (signed char)89))))) ? (((/* implicit */int) (unsigned char)255)) : (((-14) % (-1)))))));
}
