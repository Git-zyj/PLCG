/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207315
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)50))))) % (((unsigned long long int) var_6))));
        arr_3 [i_0] = ((/* implicit */int) (unsigned char)55);
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8114))) - (((17661317U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) 12216382789335208853ULL)) ? (((/* implicit */unsigned int) arr_6 [(short)0] [i_3])) : (4294967295U)))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])) ? ((+(((-2114416694) + (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) && ((_Bool)0))))))));
                        arr_14 [i_0] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_15 [i_0] [i_2] [(signed char)5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)70)) * (131071))), (((var_7) ? (arr_7 [i_0] [i_0] [i_1]) : (((/* implicit */int) (_Bool)0))))))) ^ (((((var_6) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_12 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3])))))));
                    }
                } 
            } 
        } 
    }
}
