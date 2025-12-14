/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201588
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? ((-(55361425U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_2 [i_0] [i_1]))))) << ((((((-(arr_2 [i_0] [i_0]))) + ((((_Bool)1) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))))))) - (1353033731U))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) ? (((unsigned int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)127)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))))));
                    var_17 = ((/* implicit */int) arr_4 [i_2]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_3] [i_3] = ((((/* implicit */_Bool) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)243)) / ((-(((/* implicit */int) (unsigned short)52304))))))) : (14282906444119274510ULL));
                    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)16432))))))) | (635552754U)));
                    arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)4753));
                    arr_12 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */int) (short)-23693)) : (((/* implicit */int) (short)31))));
                }
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((18446744073709551603ULL) + (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))))));
                arr_13 [6] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                var_20 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_21 = max((-790298419), (((/* implicit */int) (unsigned char)71)));
}
