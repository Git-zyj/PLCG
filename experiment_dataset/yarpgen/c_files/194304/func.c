/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194304
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_4), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) arr_1 [i_0])))), (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) -6447262581259732934LL)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) arr_1 [(short)8]);
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) == (((((/* implicit */_Bool) arr_12 [i_4] [i_3 - 3] [i_3 - 2] [i_2 + 2] [i_2] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)95))))));
                        arr_13 [i_1] [i_2] [i_3] [(signed char)11] = ((/* implicit */signed char) (-(-338044404898854514LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 14; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)40))))));
                    var_14 = ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)113)))) % ((+(((/* implicit */int) arr_5 [i_1]))))));
                    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_6]))) : (0U)));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */long long int) var_8);
}
