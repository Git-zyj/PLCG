/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211211
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
    var_15 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((min((14764896913942403653ULL), (((/* implicit */unsigned long long int) var_14)))) + (((/* implicit */unsigned long long int) arr_0 [i_0 + 4] [(signed char)20])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (30170028) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((-179078526) + (((/* implicit */int) (!(((/* implicit */_Bool) 266601855U)))))));
            var_16 = ((/* implicit */signed char) (~(var_4)));
        }
        for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_3 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)0)) << (((((/* implicit */int) arr_1 [i_0 - 1])) - (101))))))))));
            var_17 = ((/* implicit */_Bool) var_4);
        }
        for (short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_18 = ((/* implicit */int) ((unsigned int) 12241909573329668684ULL));
            arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_9), (var_9))), (((/* implicit */short) ((_Bool) arr_7 [i_0] [i_3] [i_0 + 2]))))))) < (((unsigned long long int) (-(3442020481U))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            arr_14 [(signed char)7] [(signed char)7] = ((/* implicit */short) (~(arr_12 [i_0] [i_4 + 2])));
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 6204834500379882943ULL)) ? (((((/* implicit */_Bool) 860739670U)) ? (((/* implicit */long long int) 320860045U)) : (((long long int) 4944523113973403664ULL)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        }
        var_20 = ((/* implicit */long long int) ((unsigned int) (signed char)31));
    }
    for (signed char i_5 = 2; i_5 < 12; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */int) arr_4 [i_5]);
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)5583), ((short)27954))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-5583)) != (((/* implicit */int) (unsigned short)65535)))))) | (((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 - 2] [i_5 - 2] [i_5 + 1])))))))));
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) ((short) 8936485248810901229LL));
    }
}
