/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38360
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_12 = (_Bool)1;
        var_13 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1412))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) (unsigned char)31)) - (29)))))))))));
        var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 4087789315351634180LL)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) <= ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) 1123740825718097157LL);
        var_17 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_4 [i_1])))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) >> (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)0))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 9; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)36032)) ? ((~(((/* implicit */int) (unsigned char)63)))) : (((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))) > (((/* implicit */int) ((short) arr_3 [i_2])))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 - 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 257954038U)) && (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))))) : ((~((+(((/* implicit */int) var_9))))))));
            }
        } 
    } 
}
