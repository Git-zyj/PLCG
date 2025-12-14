/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19277
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
    var_14 = ((/* implicit */unsigned short) var_11);
    var_15 = (short)-27971;
    var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((short) (unsigned char)253))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)32709))))));
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32827))))), (((int) (unsigned char)181)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (2179987141U)))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)185))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1793538411))))) % (((/* implicit */int) arr_6 [i_0] [8LL] [i_1])))))));
                arr_7 [21ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) 268435455)))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_20 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2 + 3])) >= (((/* implicit */int) (signed char)0))))), (max((var_4), (((/* implicit */unsigned long long int) arr_4 [i_2 + 3])))));
                            arr_15 [i_3] [i_1] [i_2 + 1] [(short)23] = ((/* implicit */int) (unsigned char)64);
                        }
                    } 
                } 
            }
        } 
    } 
}
