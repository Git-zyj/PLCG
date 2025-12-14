/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32124
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21649)) ? (-6547073325773304741LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4037010884U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-2414357047009329903LL)));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -2414357047009329882LL))));
        arr_7 [i_1] = ((/* implicit */long long int) (((+(7370490708724778207ULL))) >= (((/* implicit */unsigned long long int) max((arr_2 [i_1 + 1]), (((/* implicit */long long int) arr_0 [i_1 - 1])))))));
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 + 1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) -2414357047009329903LL)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (var_13))) : ((+(((/* implicit */int) (short)28790))))))) : (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (((var_5) << (((/* implicit */int) (_Bool)0))))))));
    }
    for (short i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)-3462)))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                arr_17 [i_2] [i_3] [i_2] [(_Bool)1] = 9223372036854775807LL;
                arr_18 [i_2] [i_2] [i_4] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2 - 2] [3U] [i_4 + 2]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_15 [i_2 - 2] [i_3 + 1] [(unsigned char)10] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20908))))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (0LL) : (2414357047009329887LL))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_24 [i_2 + 4] [i_2 + 4] [i_2] [i_2] [(unsigned char)2] [i_2] [i_2] = 2414357047009329902LL;
                            arr_25 [i_2] [i_2] [i_4] [i_5] [i_6] = arr_19 [i_2 + 3] [i_3 - 1] [i_4] [i_5];
                            arr_26 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
            }
        }
        var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (((min((arr_9 [i_2]), (arr_9 [i_2]))) | (((/* implicit */int) arr_23 [i_2 - 2] [i_2] [i_2] [(_Bool)1] [i_2 - 2])))) : ((+(((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 4]))))));
        arr_27 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)28790))) - ((~(2414357047009329900LL)))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_32 [i_7] = ((/* implicit */short) arr_29 [i_7] [i_7]);
        arr_33 [i_7] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned short)6705)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7]))) : (var_12))));
        var_19 += ((/* implicit */_Bool) min((((/* implicit */long long int) min((min(((unsigned short)34327), (((/* implicit */unsigned short) arr_3 [i_7])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4217270475U)) || (((/* implicit */_Bool) (short)-28790)))))))), (((((/* implicit */_Bool) arr_30 [i_7])) ? (arr_13 [i_7] [i_7] [i_7] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44628)))))));
    }
    var_20 = ((/* implicit */int) var_3);
}
