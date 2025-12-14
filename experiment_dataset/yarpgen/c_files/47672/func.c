/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47672
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (var_18)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(min((((long long int) 10567214612479498530ULL)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [13LL] [13LL] [(short)12])) : (((/* implicit */int) var_8))))))))))));
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-24719)) < (((/* implicit */int) (signed char)-70))));
                    arr_13 [(short)9] [(short)9] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-24725))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_14);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((int) min((((/* implicit */long long int) var_8)), (-60242945479438245LL)))) : (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_17)))))));
        arr_16 [i_3 + 4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))))) : (var_5)));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [(unsigned char)15] [i_4])))))));
        arr_21 [i_4] = (!(((/* implicit */_Bool) (unsigned short)0)));
        arr_22 [i_4] [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_4])) * (((/* implicit */int) var_0))));
    }
}
