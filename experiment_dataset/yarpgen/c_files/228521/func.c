/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228521
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
    var_13 = ((/* implicit */unsigned char) ((short) var_5));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned char)18] [(unsigned char)18] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(arr_6 [i_0] [(unsigned short)12] [i_2]))), (((/* implicit */int) arr_5 [i_2] [i_1] [i_1] [18ULL]))))) ? (((((/* implicit */int) ((_Bool) (signed char)-45))) >> ((((+(((/* implicit */int) arr_1 [i_0])))) + (48))))) : (min(((~(((/* implicit */int) (unsigned short)55860)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)60979)) == (((/* implicit */int) (short)14667)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 += ((/* implicit */short) ((((/* implicit */int) (short)-14657)) ^ ((-(((/* implicit */int) (unsigned char)131))))));
                                var_15 = ((/* implicit */signed char) (short)-14666);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
