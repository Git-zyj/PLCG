/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237194
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
    var_19 = ((/* implicit */signed char) var_4);
    var_20 = ((/* implicit */unsigned char) ((min(((-(var_16))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) <= ((-(((/* implicit */int) var_4))))));
    var_21 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned short) ((short) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245))))), (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (56852))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_23 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_1 [i_0 + 1])))));
            arr_5 [i_1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))) <= (((/* implicit */int) arr_0 [i_0 - 3])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))) : (((/* implicit */int) arr_1 [i_0 - 1]))));
            var_24 = ((/* implicit */int) (unsigned short)3078);
        }
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_25 = (((+(arr_7 [i_0 - 3] [i_2 - 1] [i_0 - 3]))) > (((/* implicit */long long int) ((unsigned int) arr_7 [i_0 - 2] [i_2 + 2] [i_2]))));
            var_26 &= ((/* implicit */unsigned short) ((int) ((unsigned long long int) ((unsigned short) var_2))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 4; i_3 < 17; i_3 += 4) 
        {
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_3] [13LL])))) : (((/* implicit */int) var_10)))))));
            var_28 = ((long long int) ((unsigned short) (signed char)16));
            var_29 = ((/* implicit */long long int) ((short) arr_8 [i_0 - 1]));
            var_30 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_3 - 3] [i_3 - 3])) * (var_9)));
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_4 + 1]))));
        var_32 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_17))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */long long int) var_10);
        var_33 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) == (arr_17 [10U])));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_5])) <= (((/* implicit */int) arr_16 [i_5]))));
    }
    var_35 ^= ((/* implicit */unsigned short) var_0);
}
