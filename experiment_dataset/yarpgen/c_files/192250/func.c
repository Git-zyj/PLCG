/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192250
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_7)))) ? (((((/* implicit */_Bool) -6815616353405140465LL)) ? (var_6) : (var_7))) : ((+(var_7)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((var_8) == (((/* implicit */int) (short)-8705)))))))) : ((((!(((/* implicit */_Bool) var_0)))) ? ((+(var_5))) : (((/* implicit */long long int) min((1648676814U), (((/* implicit */unsigned int) var_9)))))))));
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((unsigned short) var_6)), (((/* implicit */unsigned short) (short)(-32767 - 1))))))));
    var_17 = (+((-((~(((/* implicit */int) (unsigned short)26427)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_1] [i_2] [i_1])) ^ (2147483647))) & (((/* implicit */int) ((((/* implicit */int) (short)8685)) <= (((/* implicit */int) (short)31830)))))));
                        var_19 = ((int) ((((/* implicit */_Bool) 4294967295U)) ? (-3428866680194993421LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */short) arr_11 [i_0]);
        arr_13 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_0)) / (((/* implicit */int) (short)5119))))));
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)20505))) % (2695940948542972918LL)));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8690)) ? (9007199254609920LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-25332)))))) ? (((((/* implicit */_Bool) arr_7 [9] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4]))) : (arr_1 [i_4]))) : (((/* implicit */long long int) ((var_6) & (((/* implicit */int) (short)32761))))));
        var_21 = ((/* implicit */long long int) var_8);
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */long long int) 1439325068)) - (0LL)));
        arr_18 [13LL] = ((/* implicit */long long int) var_0);
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_22 = ((/* implicit */short) var_3);
        var_23 = ((/* implicit */short) min((min((arr_19 [i_5]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (short)29451))));
        var_24 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_6)) : (4294967295U))))) << (((((arr_19 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5]))))) - (2154132362U)))));
        var_25 = ((/* implicit */short) arr_19 [i_5]);
    }
}
