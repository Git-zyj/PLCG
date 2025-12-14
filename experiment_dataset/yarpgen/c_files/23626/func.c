/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23626
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
    var_10 = ((/* implicit */short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))))), (4294967279U))), (var_7)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) (+((~((-(658500993U)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [10ULL] [i_1] [i_1] = ((/* implicit */short) var_8);
                    var_12 -= ((/* implicit */unsigned char) min(((~((-9223372036854775807LL - 1LL)))), (min((((/* implicit */long long int) (unsigned char)255)), ((-9223372036854775807LL - 1LL))))));
                    arr_11 [i_1] = ((/* implicit */unsigned char) arr_0 [i_2]);
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (((/* implicit */long long int) arr_12 [i_3] [i_3])) : (arr_16 [i_3] [i_4] [i_4])));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_14 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_3])) * (((/* implicit */int) ((arr_14 [i_3] [i_3]) && (((/* implicit */_Bool) (unsigned short)44930)))))));
                            arr_26 [i_3] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -287955622653162742LL))))) - (((/* implicit */int) var_9))));
                            arr_27 [i_5] [i_4] [i_4] [(_Bool)1] [i_4] [10ULL] [i_7] = ((/* implicit */unsigned long long int) -287955622653162731LL);
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_4] [i_4] [i_3] [12U] [i_3])) % ((~(((/* implicit */int) (_Bool)1)))))))));
        }
        arr_28 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5663)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) (short)-204))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_22 [i_3] [i_3] [(short)8] [i_3] [i_3])) : (((/* implicit */int) ((unsigned char) arr_16 [i_3] [i_3] [i_3]))))) : (((/* implicit */int) ((unsigned char) max((2LL), (((/* implicit */long long int) (unsigned char)234))))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (unsigned char)198)))));
                    arr_33 [i_8] [i_9] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_21 [i_3])) * (((/* implicit */int) arr_19 [i_3] [i_8] [i_9]))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-30555)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) + ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)1080))))))))) : (min((((/* implicit */unsigned int) min(((unsigned short)5657), (((/* implicit */unsigned short) (unsigned char)5))))), (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
    var_18 = ((/* implicit */long long int) var_9);
}
