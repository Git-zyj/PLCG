/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4814
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
    var_15 = ((/* implicit */unsigned short) min(((((+(var_1))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-10854)), ((unsigned short)56872)))) + (((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9)))))))));
    var_16 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((-(var_10)))))), (var_7)));
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_9)), ((+(max((((/* implicit */long long int) (unsigned short)45897)), (7183680758386446654LL)))))));
    var_18 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((short) var_7);
        var_19 += ((/* implicit */signed char) ((int) arr_1 [i_0 - 2]));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)3] [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)19645)))))) : (arr_1 [i_0 - 2])));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 1])) != (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2]))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 2])) % ((~(((/* implicit */int) (unsigned short)45897))))));
                var_21 = ((arr_6 [i_0 - 1] [i_1]) ? (8192159383855512768LL) : (((arr_8 [i_0] [i_0] [(unsigned char)6]) / (-2142081101386072189LL))));
                var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)19663)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (_Bool)1))))));
            }
            arr_12 [i_0] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) -8192159383855512768LL)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19665))) : (((unsigned long long int) var_12))));
            var_23 += ((/* implicit */unsigned short) arr_10 [i_0 - 2]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_17 [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) (short)16448))));
            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((9223372036854775793LL) * (((/* implicit */long long int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) -6827562685094684496LL))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(((int) (signed char)(-127 - 1))))))));
        }
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                arr_23 [(_Bool)1] [i_4 + 1] [(_Bool)1] [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_4 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_4 + 3]))));
                arr_24 [(short)21] [(unsigned char)22] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) -2142081101386072176LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_5]))) : (var_6))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19663)))));
            }
            for (signed char i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (0LL)));
                var_28 -= ((((/* implicit */int) arr_3 [i_0 + 1] [i_4 + 2])) / (((/* implicit */int) arr_3 [i_0 - 1] [i_4 - 1])));
                arr_28 [i_0] [i_4] [i_0] [i_6 - 1] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_4 + 1] [i_6 + 1])) : ((+(((/* implicit */int) (unsigned short)19640)))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0])) ? (var_10) : (((/* implicit */int) arr_15 [i_0 - 1] [i_0]))));
                arr_29 [15ULL] [i_6 + 1] [(_Bool)1] [i_0 - 2] = ((/* implicit */unsigned long long int) var_5);
            }
            arr_30 [i_0] [i_4 - 1] = ((/* implicit */_Bool) var_9);
        }
    }
}
