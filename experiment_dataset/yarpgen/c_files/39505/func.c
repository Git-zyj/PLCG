/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39505
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
    var_17 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) max(((unsigned char)83), (((/* implicit */unsigned char) (_Bool)1))))), (max((((/* implicit */long long int) var_4)), (-1LL)))))));
    var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))) <= (((unsigned long long int) var_13)))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((signed char) -8LL)))));
    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_7))) < (((/* implicit */int) var_16))));
            arr_6 [i_0] [6U] [8U] &= ((/* implicit */long long int) var_12);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] = ((/* implicit */_Bool) 3032687653710069060ULL);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) 1LL))));
                            var_25 = ((/* implicit */unsigned char) ((signed char) arr_16 [i_0 + 2]));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            arr_22 [i_0] [i_0] = var_8;
            var_26 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (signed char)(-127 - 1)))))));
        }
        arr_23 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_21 [i_0])), (max((((((/* implicit */int) arr_20 [i_0 - 2] [(unsigned short)19] [7LL])) / (((/* implicit */int) var_7)))), ((+(((/* implicit */int) var_0))))))));
    }
}
