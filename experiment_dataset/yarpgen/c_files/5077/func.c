/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5077
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
    var_16 |= (~(var_8));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0]);
            var_18 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
            var_19 = ((/* implicit */_Bool) ((short) (-(-3160394887808810092LL))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_20 = ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])) || (var_9)));
                            arr_15 [i_0] [i_3] [i_1] [i_3] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1]))));
                            var_21 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_4] [i_2] [i_0] [(short)15])) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) : (6473224025716042792LL)));
                            var_22 ^= ((/* implicit */unsigned int) arr_14 [i_2]);
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_1] [i_0] &= ((/* implicit */signed char) ((_Bool) (unsigned char)45));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) var_3);
            var_24 = ((/* implicit */signed char) (unsigned short)15307);
        }
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) (short)3284)));
            var_26 = ((/* implicit */long long int) 1263355685U);
            var_27 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)24610));
            var_28 ^= ((/* implicit */unsigned int) ((long long int) (unsigned char)172));
        }
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0] [i_0])))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (unsigned char)50))));
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((short) var_5)), (((/* implicit */short) (_Bool)0)))))) : (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_11)))))))));
}
