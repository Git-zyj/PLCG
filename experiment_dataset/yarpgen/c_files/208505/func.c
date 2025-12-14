/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208505
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
    var_18 = min((((((((/* implicit */_Bool) 4576775493746020854LL)) ? (4576775493746020854LL) : (-4576775493746020864LL))) + (((/* implicit */long long int) ((/* implicit */int) var_16))))), (var_13));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_6))))), ((~(var_12))))) & (min(((~(8278729675695322591ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (arr_10 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_20 = ((/* implicit */int) ((min((((unsigned long long int) 4576775493746020854LL)), (((/* implicit */unsigned long long int) ((arr_9 [i_3] [i_3] [i_2] [i_1] [(_Bool)1] [i_0]) / (((/* implicit */int) arr_3 [i_1] [i_0]))))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_11 [i_0] [i_2]), ((short)7739)))), (min((((/* implicit */int) var_16)), (arr_6 [i_0] [i_1] [i_2] [i_3]))))))));
                        var_21 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
                        arr_12 [i_0] [i_0] = var_6;
                    }
                    var_22 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4576775493746020855LL)) && (((/* implicit */_Bool) ((((arr_8 [i_0]) + (var_13))) % (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_2])))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -4576775493746020855LL)) && (((/* implicit */_Bool) ((((arr_8 [i_0]) - (var_13))) % (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_2]))))))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned char) max((((((unsigned long long int) arr_4 [i_0] [i_0] [i_0])) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19968))))))))));
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        arr_16 [i_4] = var_16;
        arr_17 [i_4] = ((/* implicit */unsigned char) ((var_10) == (arr_14 [i_4 - 2] [i_4 - 1])));
        arr_18 [i_4] = ((/* implicit */unsigned int) var_0);
        arr_19 [2ULL] [i_4] |= ((/* implicit */int) ((arr_10 [i_4] [i_4] [i_4] [(unsigned char)4]) <= (((/* implicit */int) arr_5 [i_4]))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_13);
}
