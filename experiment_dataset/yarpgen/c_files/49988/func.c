/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49988
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_5))));
        arr_4 [i_0] = ((/* implicit */signed char) -2040327029);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) (((_Bool)0) ? (var_1) : (((/* implicit */int) arr_2 [12LL] [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_12 [i_1] [i_1] &= ((/* implicit */long long int) -2040327027);
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_2] [i_1])) : (((/* implicit */int) (_Bool)1))))), (((long long int) (!(((/* implicit */_Bool) 2040327029)))))));
                arr_15 [i_3] [i_2] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (var_9))), (((/* implicit */int) var_10)))) == (2040327027)));
            }
            for (short i_4 = 3; i_4 < 15; i_4 += 3) 
            {
                arr_19 [i_1] [i_4] [i_2] [i_4 + 3] = ((/* implicit */signed char) (short)(-32767 - 1));
                arr_20 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)-21422)), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)21410))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_1]), (((/* implicit */unsigned char) arr_18 [i_4] [i_2] [i_4]))))))))));
            }
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_24 [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) var_10))))));
        arr_25 [(signed char)7] = ((((/* implicit */_Bool) ((13538759447309837331ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((var_9) % (var_1))) : (((/* implicit */int) min(((short)-8157), (((/* implicit */short) var_6))))));
    }
    var_16 += ((/* implicit */short) var_13);
    var_17 = ((/* implicit */_Bool) ((var_6) ? (max((min((4907984626399714293ULL), (var_3))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_10))))))) : (var_3)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            {
                arr_31 [12ULL] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_28 [0LL])), (4907984626399714284ULL)));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_6] [(signed char)11]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [18U]), (arr_3 [16LL]))))) : (max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) -543082011)) : (var_3))), (min((8862876072226598148ULL), (((/* implicit */unsigned long long int) var_2))))))));
                                arr_38 [i_6] [i_7] [18U] [i_6] = ((/* implicit */long long int) ((2040327027) << (max((var_5), (((/* implicit */long long int) arr_3 [i_6]))))));
                            }
                        } 
                    } 
                } 
                var_19 += ((/* implicit */int) (signed char)107);
            }
        } 
    } 
}
