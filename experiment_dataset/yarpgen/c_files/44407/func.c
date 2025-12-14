/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44407
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0]))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 2251799813685247ULL);
                }
            } 
        } 
        var_21 = ((/* implicit */short) arr_7 [i_0] [i_0] [2LL] [i_0]);
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_15 [(short)9] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_0))) << (((((/* implicit */int) (signed char)(-127 - 1))) + (142)))));
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_5 + 2]))));
                        var_23 = ((/* implicit */unsigned short) (-(-1LL)));
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_13))) <= (arr_7 [i_5 + 2] [i_3 - 1] [i_4] [i_4])));
                    }
                    for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3 - 2] [i_3 - 1] [i_4] [(unsigned char)14] [i_6] [i_0])) ? (((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1] [(short)17] [i_6 - 1] [i_0] [i_3 - 1]))));
                        arr_21 [(unsigned short)7] [i_3 + 1] [i_4] [i_3 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_3] [i_4] [i_6])) ? (((/* implicit */int) arr_13 [i_0] [i_3 - 1] [i_4] [i_6 + 4])) : ((+(((/* implicit */int) arr_13 [i_0] [i_0] [4] [i_0]))))));
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))));
                        arr_22 [i_0] [i_3] [i_4] [i_3] = ((/* implicit */short) arr_3 [i_0] [i_3]);
                    }
                    arr_23 [i_3] [i_3] [i_3] [8] = arr_10 [i_0] [i_3 - 2];
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_27 = ((/* implicit */short) (-(min((arr_26 [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_7]))))));
        arr_27 [i_7] [i_7] |= ((/* implicit */int) ((signed char) (signed char)-1));
    }
    var_28 = ((((/* implicit */int) var_5)) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105))))));
}
