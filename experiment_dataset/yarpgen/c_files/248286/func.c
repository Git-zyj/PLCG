/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248286
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
    var_13 = ((/* implicit */_Bool) ((long long int) var_0));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_14 *= ((/* implicit */_Bool) var_4);
        var_15 = var_4;
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) max((((/* implicit */long long int) max(((~(-52586905))), (((/* implicit */int) (signed char)-106))))), (((long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((max((arr_9 [i_1] [i_2] [i_3]), (arr_9 [i_3] [i_2] [i_3]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) | (((/* implicit */int) var_3))))))))));
                    var_18 ^= ((min((((/* implicit */unsigned int) arr_7 [i_2])), (var_12))) != (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_10 [i_3] [i_2] [(_Bool)1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    arr_11 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_1] [i_2] [i_3]))));
                    var_19 = ((/* implicit */unsigned int) ((signed char) arr_10 [i_3] [i_3] [i_3]));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_2])) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95)))))) ? (((var_0) >> (((((/* implicit */int) arr_5 [i_1])) - (80))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_3])), (arr_10 [i_3] [i_2] [i_1])))))))))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (short)0);
        var_22 *= ((/* implicit */signed char) var_3);
        var_23 = ((/* implicit */unsigned int) arr_12 [i_4]);
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            var_24 = ((/* implicit */long long int) min((((short) arr_12 [i_4])), (((short) arr_12 [i_4]))));
            var_25 = ((/* implicit */_Bool) arr_12 [i_4]);
        }
        var_26 = ((/* implicit */unsigned int) (short)-21);
    }
    var_27 -= ((((((/* implicit */int) max((((/* implicit */short) var_1)), ((short)25035)))) * (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_5)));
    var_28 ^= ((/* implicit */unsigned int) (-(min((((/* implicit */int) ((_Bool) var_0))), ((+(((/* implicit */int) var_1))))))));
}
