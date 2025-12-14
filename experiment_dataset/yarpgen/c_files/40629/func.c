/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40629
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]))), (4247324343910273945ULL))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)80))) - (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 10; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)20647)) >= (((/* implicit */int) arr_6 [i_1])))) ? (((/* implicit */int) (short)26043)) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)236))))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((((-5684987321598284271LL) <= (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)19)) >> (((((/* implicit */int) (unsigned char)226)) - (199)))))) : (min((var_10), (((/* implicit */long long int) (short)20746)))))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 1; i_2 < 7; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) (short)29166);
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = (_Bool)0;
                var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) arr_14 [i_2] [i_3] [i_4]))))));
            }
        }
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19486))) : (4368543950671251311LL)));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 2) 
        {
            arr_19 [i_5] [i_6 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((arr_1 [i_5]) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) ((short) -3086477966173299000LL));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (_Bool)1))));
            }
            for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                var_23 -= ((/* implicit */unsigned int) ((arr_1 [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_6] [(short)16] [(short)16])), (arr_1 [i_8])))) - (8641343675971146554ULL)))))));
                var_25 ^= ((/* implicit */long long int) (short)-31483);
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    arr_31 [i_5] [i_9] [(short)11] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(561507802U)))) ? (((int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [(short)4])) : ((~(arr_27 [i_9])))));
                    var_26 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (short)20746))) | (arr_27 [i_5])));
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5169976574279251805LL))) * (((/* implicit */long long int) 1076419743U))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_16 [i_6] [i_6]))));
                    arr_34 [i_5] [i_6] [i_6] [i_9] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (unsigned char)226))));
                }
                arr_35 [i_5] = ((/* implicit */unsigned int) -2033239709);
            }
        }
        var_29 = ((/* implicit */short) (~(-1528956611)));
    }
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max(((signed char)-31), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_6))))))) ^ (var_3))))));
}
