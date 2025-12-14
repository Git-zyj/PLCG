/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220964
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_12);
        var_17 = ((/* implicit */unsigned long long int) var_3);
        arr_4 [i_0] = ((/* implicit */signed char) 464838987455427674LL);
        var_18 = ((/* implicit */short) ((long long int) -464838987455427704LL));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
            var_20 = ((-8787276228616225691LL) >= (8787276228616225690LL));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */_Bool) 9223372036854775788LL);
                            arr_15 [i_2] [i_2] [i_2] [i_1] [i_3] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))) ? (arr_1 [i_4 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)14336))) - (1621225335796312746LL))))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (3970496664191904861LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2471))) : (((((/* implicit */_Bool) 3236507145U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14703))) : (-464838987455427708LL)))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 ^= ((/* implicit */_Bool) var_16);
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(3236507151U)));
            var_24 = ((/* implicit */short) (_Bool)1);
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_5] [i_5] [i_0 + 2] [i_0 + 2] [i_0 + 4] [(signed char)20]);
        }
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_25 ^= ((/* implicit */signed char) arr_14 [i_6] [i_6] [i_6] [i_6] [i_0]);
            var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 + 2]))));
        }
    }
    var_27 = (_Bool)0;
    var_28 = ((/* implicit */signed char) (unsigned char)28);
}
