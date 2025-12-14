/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198119
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
    var_14 = ((((/* implicit */int) (unsigned char)85)) == (((/* implicit */int) (short)-27811)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (unsigned short)1655);
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((short) arr_1 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_3])) || (arr_4 [i_1]))) && (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3])) && (((/* implicit */_Bool) arr_10 [(short)11] [i_2] [i_1 + 1]))))));
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_5)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((/* implicit */int) ((arr_1 [i_1 + 1]) == (arr_1 [i_1 + 1])))))))));
        var_19 += ((/* implicit */unsigned long long int) (~(-670342887)));
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (var_12))))));
    }
    var_21 -= ((/* implicit */unsigned short) (short)-28001);
}
