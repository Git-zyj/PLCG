/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53305
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
    var_16 &= ((/* implicit */unsigned long long int) max((-5685146117820945535LL), (((/* implicit */long long int) var_12))));
    var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (5685146117820945535LL)))), ((~(-5685146117820945535LL))))), (((/* implicit */long long int) var_12))));
    var_18 = ((/* implicit */signed char) ((unsigned long long int) (!((!(((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) * (((/* implicit */int) var_5)))) >= ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_19 = (!((!(var_4))));
                        var_20 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_11)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_21 -= ((/* implicit */unsigned int) arr_9 [i_4]);
            var_22 = ((/* implicit */int) max((var_22), ((-(((/* implicit */int) arr_6 [i_0] [i_4]))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                arr_17 [i_5] [i_4] [2U] = ((/* implicit */short) arr_13 [i_5 + 1] [i_4] [(unsigned short)2]);
                arr_18 [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_5 - 1] [i_5] [(unsigned char)8])) << (((((/* implicit */int) arr_15 [i_5] [i_5 - 1] [i_5] [i_5])) - (42324)))));
            }
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) * (var_15)));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) var_3);
    }
}
