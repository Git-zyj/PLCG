/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49018
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((1568661888) - (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_2)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) var_4)) - (-6831313041695218483LL))), (((/* implicit */long long int) arr_2 [(unsigned char)10]))))) ? (1568661888) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_0)))))));
                    arr_10 [i_0] = (((~(((/* implicit */int) var_10)))) ^ ((~(((/* implicit */int) (short)26684)))));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_5 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)0))))) & ((-(2936015440U)))))) : (((long long int) min((((/* implicit */long long int) 1066065210)), (-6831313041695218483LL))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        arr_15 [i_3] = var_6;
        arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1568661888)) / (277423415991535210LL)))) ? (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_3] [i_3])))))))) : (max((((/* implicit */int) ((signed char) (unsigned char)47))), (((((/* implicit */_Bool) 8388608U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))))));
    }
}
