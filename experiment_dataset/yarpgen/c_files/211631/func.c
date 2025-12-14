/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211631
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) var_6);
        var_14 = ((/* implicit */unsigned long long int) ((signed char) ((short) (-(((/* implicit */int) (short)22942))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) max((max((var_7), (((/* implicit */short) var_1)))), (((/* implicit */short) arr_2 [(signed char)23]))))), ((~((~(((/* implicit */int) arr_3 [i_0]))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 ^= ((/* implicit */_Bool) max((min((((/* implicit */long long int) (+(((/* implicit */int) var_12))))), ((~(var_4))))), (min((-570649640963964138LL), (((/* implicit */long long int) (short)6317))))));
                        var_16 = var_8;
                        arr_13 [i_1] = (+(((/* implicit */int) var_3)));
                        var_17 = ((/* implicit */unsigned char) (~(9223372036854775807LL)));
                    }
                } 
            } 
        } 
    }
    var_18 = (!(((/* implicit */_Bool) ((int) (unsigned char)164))));
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) -1148370768)))));
}
