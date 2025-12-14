/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223970
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) 9223372036854775807LL);
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) arr_8 [(short)23] [(unsigned char)11] [i_2] [i_0]);
                        arr_13 [i_0] [i_0 + 1] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) (unsigned char)250);
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) > (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) var_12)))))) ? ((~(((((/* implicit */_Bool) 2615806425U)) ? (((/* implicit */unsigned long long int) 0U)) : (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [4U] [i_0 - 1] [i_0 - 1] [4U])))));
    }
    var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (_Bool)1))))));
    var_22 = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13))) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) + (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : (4294967282U))))));
}
