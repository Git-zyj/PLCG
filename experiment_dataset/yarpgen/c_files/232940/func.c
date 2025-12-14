/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232940
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((~(arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) == (-9002870877354516146LL)));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) * (arr_1 [i_0])));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) arr_5 [i_3]);
                        var_23 = ((/* implicit */unsigned long long int) (short)18699);
                        arr_11 [i_0] [9LL] [i_0] [i_0] [9LL] [i_3] = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)102)))) : (((/* implicit */int) (signed char)88))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    arr_20 [i_4] [0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)141)) != (((/* implicit */int) (unsigned char)174))));
                    arr_21 [i_6] [(unsigned char)11] [i_5] [i_4] = ((/* implicit */signed char) var_3);
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 7204506822913236043LL))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) var_3);
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) >> (((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11697))) : (18446744073709551615ULL))) : (max((7693597691241909015ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))))));
        var_28 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((min((((/* implicit */unsigned int) (unsigned char)116)), (1027411635U))), (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_7])) ? (var_16) : (((/* implicit */unsigned int) var_13))))))), (((((/* implicit */_Bool) (unsigned char)130)) ? (-7204506822913236038LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))));
        var_29 = ((/* implicit */_Bool) max((((var_17) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_7])) : (var_13))) : (((/* implicit */int) (signed char)5)))), (((/* implicit */int) ((arr_13 [i_7]) == (((/* implicit */int) var_17)))))));
        var_30 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7])))));
        arr_25 [i_7] [i_7] = ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (short)4586)) : (((/* implicit */int) (unsigned short)9895))))))) == (max((((long long int) (unsigned char)172)), (7204506822913236049LL))));
    }
}
