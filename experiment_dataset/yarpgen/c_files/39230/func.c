/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39230
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) (((~(((/* implicit */int) var_3)))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (0U))))))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((var_6) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                arr_9 [i_2] [10] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3192097983U)) && (((/* implicit */_Bool) 4294967295U))));
                var_11 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) % (((/* implicit */int) ((unsigned short) arr_8 [i_0] [(short)0])))));
                var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2]))));
            }
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -991591400)) ? (3U) : (3314594090U)))) - (((unsigned long long int) 3U))));
                var_14 = ((/* implicit */unsigned short) ((0ULL) << (((((/* implicit */int) (unsigned char)155)) - (94)))));
            }
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 - 3] [(short)11]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((min((0U), (980373184U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((var_6) ? (((/* implicit */unsigned long long int) 4U)) : (11882498579074653502ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))))));
            var_17 = ((/* implicit */signed char) 4294967293U);
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1102869313U)) : ((+(((((/* implicit */_Bool) 14U)) ? (0ULL) : (((/* implicit */unsigned long long int) 3192097973U))))))));
            arr_16 [i_0] = ((/* implicit */short) ((_Bool) (+((+(-6998842082596433258LL))))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    arr_26 [i_5] [i_6 - 1] = ((/* implicit */short) ((((int) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7])))))) != (((/* implicit */int) var_7))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_22 [i_6 + 1])), (((arr_19 [i_6 - 1] [i_5]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)2044))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) var_4);
    }
    var_21 = ((/* implicit */signed char) var_3);
    var_22 = var_4;
    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58841)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2056))) : (4U)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */signed char) ((arr_29 [i_8]) / (((/* implicit */long long int) (~(((/* implicit */int) (short)9423)))))));
        var_24 -= ((/* implicit */long long int) var_4);
        var_25 = ((/* implicit */unsigned char) ((short) var_9));
    }
}
