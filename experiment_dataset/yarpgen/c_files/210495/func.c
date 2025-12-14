/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210495
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [(unsigned short)5] [i_1] = ((/* implicit */_Bool) 21U);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [3])) : (((/* implicit */int) (unsigned char)31)))))) >> (((((max((((/* implicit */int) (unsigned char)31)), (2143289344))) + (((/* implicit */int) (unsigned char)225)))) - (2143289546)))));
                                arr_17 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_2 - 2]) / (arr_6 [i_2 - 3])))) ? (((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (2305843009213693952ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_2 - 3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (((+(((((/* implicit */int) (unsigned char)31)) & (((/* implicit */int) var_13)))))) % (var_11)));
}
