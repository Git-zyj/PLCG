/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191465
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */int) (signed char)-48);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_19 = ((((/* implicit */int) (short)0)) | (((((/* implicit */int) (signed char)-48)) + (((/* implicit */int) (short)-19459)))));
            arr_8 [i_1] = ((/* implicit */short) min((((((((/* implicit */int) (short)2047)) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))) + (((/* implicit */int) (short)-13116)))), (min((((/* implicit */int) ((unsigned short) arr_7 [i_1]))), (((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) (unsigned short)9935))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_2 + 1]))));
            var_21 -= ((/* implicit */unsigned short) (+(((int) arr_11 [i_0] [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-13292)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_12 [i_0] [i_2])))) * (((0) >> (((1366130589U) - (1366130580U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_20 [i_5] [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_2] [i_3] [i_4] [i_5])) % (((/* implicit */int) (short)1))))) ? ((+(((/* implicit */int) (short)13116)))) : (var_0));
                            var_23 = (+(((/* implicit */int) arr_18 [i_2])));
                        }
                    } 
                } 
            }
            for (int i_6 = 2; i_6 < 19; i_6 += 2) 
            {
                arr_23 [i_0] [i_6] &= ((/* implicit */int) var_10);
                var_24 = ((/* implicit */_Bool) (short)4474);
                arr_24 [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) ((unsigned int) arr_16 [i_2 + 1] [i_2 + 2] [i_6 + 1]));
            }
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (unsigned int i_8 = 4; i_8 < 17; i_8 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) arr_17 [i_8] [i_7] [i_7] [i_7] [i_2] [i_0]);
                        arr_32 [i_8] = ((/* implicit */unsigned int) (short)9);
                    }
                } 
            } 
        }
    }
    var_26 = ((/* implicit */short) var_18);
    var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
}
