/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44641
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3579340116946071070LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (0ULL)))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1])))) : (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))));
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3579340116946071071LL)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_1] [i_2] [(short)0])) : (((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0])))) : (var_1)));
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_4 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248)))))));
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) var_13)))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        arr_19 [i_5] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (-(var_4)));
                        var_23 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_12 [i_5] [i_2] [i_1] [i_0]))));
                    }
                    for (short i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        arr_22 [i_6] = ((/* implicit */signed char) 18446744073709551615ULL);
                        var_24 += ((/* implicit */short) (-((+(((/* implicit */int) (short)1))))));
                    }
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
        arr_24 [i_0] = ((/* implicit */_Bool) var_10);
        var_25 = ((/* implicit */short) var_0);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_26 += ((/* implicit */unsigned char) (+(-3579340116946071071LL)));
        var_27 = ((/* implicit */unsigned long long int) (!(((((var_6) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
    }
    var_28 += ((/* implicit */signed char) ((int) (unsigned char)0));
}
