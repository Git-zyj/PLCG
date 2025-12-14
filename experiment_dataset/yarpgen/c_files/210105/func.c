/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210105
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [(short)20] [i_0] [i_0] = ((/* implicit */unsigned short) -4669785563050359779LL);
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-30)) ? ((-(((/* implicit */int) (signed char)30)))) : (((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (signed char)29)) : (-1835335886))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_4 = 4; i_4 < 18; i_4 += 2) 
        {
            for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        arr_17 [i_6] [i_5] [i_5] [i_6] = ((/* implicit */short) (+(((/* implicit */int) (signed char)30))));
                        arr_18 [i_0] [i_4 + 1] [i_5] [i_0] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0]))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 4; i_7 < 20; i_7 += 2) 
    {
        var_15 = ((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_7] [i_7])))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    arr_27 [i_7 - 3] [(short)1] [i_9] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)9))))), ((~(arr_1 [i_7]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_20 [i_7 + 2] [i_7]) : (arr_1 [i_9])))))))));
                    var_16 = max((((/* implicit */long long int) (signed char)9)), ((+(arr_23 [i_7 - 3] [i_8] [i_9]))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) 623144311U);
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((max((-1392374069), (((/* implicit */int) (unsigned short)64787)))), (((/* implicit */int) (signed char)29)))))));
    var_19 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_11))))));
    var_20 = (signed char)9;
}
