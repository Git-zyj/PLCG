/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220732
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
    var_14 *= 15698022892245788390ULL;
    var_15 = ((signed char) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) (!(((/* implicit */_Bool) 1794270750688303377ULL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) arr_1 [i_0] [i_0])), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-96))))))))) : (var_12));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned long long int) ((var_8) > (max((2748721181463763214ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [(short)2]))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(6977321149204257908ULL))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((6977321149204257914ULL) * (16617345967763552240ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 11213459198069186558ULL)))) : (arr_6 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) : ((+(18126244928374963123ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1829398105945999375ULL)))) <= (min((arr_6 [(short)2] [i_3]), (((/* implicit */unsigned long long int) var_4))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (signed char i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                {
                    var_20 = var_0;
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(11684709310400515475ULL)))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((max((arr_3 [i_5 - 3] [i_5 - 3] [i_5 - 3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_15 [i_0]))))))), (((((/* implicit */_Bool) (signed char)-51)) ? (var_12) : (15698022892245788390ULL))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
    {
        var_23 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_6] [i_6]))));
        var_24 = arr_12 [i_6] [i_6];
    }
}
