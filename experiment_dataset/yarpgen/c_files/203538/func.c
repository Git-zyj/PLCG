/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203538
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_19 = var_14;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = (signed char)-1;
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 2]);
                    var_20 *= ((/* implicit */signed char) (-((-(((/* implicit */int) ((arr_10 [i_1] [i_2] [i_3 + 1]) == (((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)20])))))))));
                    arr_12 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (arr_8 [i_3 + 2] [(short)10] [i_3]))))));
                    var_21 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-122)) >= (((/* implicit */int) (signed char)-17)))) ? ((+(var_13))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-102)), ((unsigned short)0))))))) + ((~((~(1068073361275118938LL)))))));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
        arr_14 [i_1] = ((/* implicit */signed char) 3586040757U);
    }
    var_22 = (signed char)105;
}
