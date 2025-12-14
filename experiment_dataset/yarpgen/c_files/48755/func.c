/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48755
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
    var_13 = max(((-(((/* implicit */int) var_0)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
    var_14 &= ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (var_2)));
                    var_15 = ((/* implicit */long long int) 15ULL);
                    var_16 = var_12;
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (unsigned short)63554))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                arr_15 [10] = ((/* implicit */short) (-(arr_14 [i_3])));
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    arr_18 [i_3] [i_3] = ((((/* implicit */_Bool) (unsigned short)1967)) ? (1797396177U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1979))));
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) + (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_3] [1U] [i_3]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((((/* implicit */int) ((signed char) (signed char)66))) - (59)))))) : (((unsigned int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_3])))))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */int) var_11)), (arr_12 [i_6] [i_6]))), (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) (unsigned short)1982)) ? (((((/* implicit */_Bool) (unsigned short)56907)) ? (417629855681266879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12999)))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((short) var_5)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) arr_23 [i_3] [i_4] [i_6]);
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                        arr_25 [i_3] = ((/* implicit */long long int) ((short) arr_13 [i_3] [i_3] [i_3]));
                    }
                }
            }
        } 
    } 
}
