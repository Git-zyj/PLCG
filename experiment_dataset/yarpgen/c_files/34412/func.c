/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34412
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
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0]);
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_5))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1 - 2] [i_1] = ((/* implicit */signed char) ((var_14) * (((/* implicit */int) arr_4 [i_1 - 1]))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1]))));
        arr_6 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_5)))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (((/* implicit */_Bool) (short)-12648))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) min((((/* implicit */int) var_13)), (-24)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1] [i_4]))) - (var_0)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_2] [i_4] [i_2] [(short)4]))) : (((((/* implicit */unsigned long long int) var_1)) + (arr_19 [i_2] [i_2] [(short)1])))))) ? (((/* implicit */long long int) ((var_14) + (((/* implicit */int) arr_12 [i_2 + 1] [(signed char)13] [(signed char)13]))))) : (min((((/* implicit */long long int) ((unsigned short) var_4))), (((var_12) ? (var_5) : (((/* implicit */long long int) 18)))))))))));
                        arr_20 [i_2] [i_2] [1] = ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2]);
                    }
                } 
            } 
        } 
        arr_21 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((max((45), (24))) << (min((24), (16)))))));
        var_18 = ((/* implicit */unsigned char) arr_16 [i_2]);
    }
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -199809240))));
}
