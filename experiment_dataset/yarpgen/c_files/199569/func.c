/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199569
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (var_8))))) % (((unsigned int) (-2147483647 - 1)))))) && ((((~(((/* implicit */int) (signed char)126)))) < (((/* implicit */int) var_2))))));
    var_19 -= ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 9117964924344303604LL)))) && (((var_7) || (((/* implicit */_Bool) var_14)))))) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -9117964924344303605LL)) || (((/* implicit */_Bool) var_11))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((unsigned long long int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) ((short) var_2))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_22 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)15498))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_1] = ((/* implicit */long long int) ((unsigned short) ((arr_10 [i_1 - 1] [4LL] [i_1 + 3] [i_1]) >> (((((/* implicit */int) arr_8 [i_1 + 3] [i_2])) + (15080))))));
                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */_Bool) (-(arr_10 [i_1 + 4] [i_1] [i_1] [i_1 + 2])));
                var_25 += ((_Bool) ((short) var_2));
            }
            arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (((unsigned int) 3782058956779111380ULL))));
            arr_13 [3ULL] [i_1] [(short)0] = ((((/* implicit */int) var_8)) / (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_5 [i_1])))));
            arr_14 [i_1] = ((/* implicit */short) ((arr_9 [i_1 + 4] [i_1 + 2] [i_1 - 1]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
        }
        var_26 ^= ((/* implicit */unsigned long long int) ((15672819562643586650ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((9117964924344303590LL) / (((/* implicit */long long int) 2955157134U)))))));
    }
}
