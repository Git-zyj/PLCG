/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198798
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
    var_16 = (+(((/* implicit */int) var_0)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_17 += ((/* implicit */unsigned int) var_8);
                        arr_10 [i_0] [i_1] [i_0] [i_3] [(signed char)14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 117440512))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 845849009U)) && (((/* implicit */_Bool) (unsigned short)1891)))))))) ? ((+(((/* implicit */int) var_4)))) : ((~((-(((/* implicit */int) var_4)))))))))));
                        arr_11 [i_0] [i_1] [(unsigned short)13] = ((/* implicit */long long int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        var_19 += ((/* implicit */unsigned short) max((var_1), (((/* implicit */long long int) (_Bool)0))));
        var_20 = max((((var_7) - (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))), (max((var_10), (((/* implicit */unsigned long long int) (unsigned short)3)))));
    }
}
