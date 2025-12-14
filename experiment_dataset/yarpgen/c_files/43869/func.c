/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43869
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0])))) % (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (short)-12164))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-12164)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)12163)))) : (((((/* implicit */_Bool) var_2)) ? (332052288) : (var_0))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (0)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)9266))));
                            var_11 = max((arr_1 [i_2]), (((/* implicit */signed char) ((((/* implicit */int) var_1)) == (min((((/* implicit */int) arr_2 [i_0])), (var_7)))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_8 [i_1]) | (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) (-(1002463763)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned char) (signed char)-5);
        arr_16 [i_4] [i_4] = ((/* implicit */int) (short)-9791);
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_19 [i_5] = ((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) || (((/* implicit */_Bool) arr_17 [i_5] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5]))))) : (((/* implicit */int) var_10)));
        arr_20 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (short)-12164)) : (((/* implicit */int) arr_17 [i_5] [i_5]))))) ? (((var_8) << (((((/* implicit */int) (short)17473)) - (17472))))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)6)))), ((-(((/* implicit */int) (short)-12164)))))))));
    }
}
