/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25586
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
    var_14 ^= ((/* implicit */unsigned short) var_13);
    var_15 = (short)4377;
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_10))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) var_8))))) ? (min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))) : (max((((/* implicit */long long int) (short)20956)), (arr_0 [i_0])))));
        var_17 = ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0]))) : (arr_0 [i_0]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((arr_0 [i_0]) >> (((arr_1 [i_1]) - (1308021687))))))));
            var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_1]));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 *= ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_0])) : ((-(arr_4 [i_2] [i_2]))));
            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (0ULL) : (max((arr_3 [16LL]), (((/* implicit */unsigned long long int) (signed char)114))))));
        }
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)4] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)31007))))))) ? (min((min((10890357666692412220ULL), (((/* implicit */unsigned long long int) (unsigned char)11)))), (((/* implicit */unsigned long long int) (unsigned char)96)))) : (((/* implicit */unsigned long long int) (-(((arr_7 [3U]) ? (((/* implicit */int) (short)4380)) : (((/* implicit */int) var_0)))))))));
            var_23 *= ((_Bool) (!(arr_7 [i_3 + 1])));
            var_24 = ((/* implicit */_Bool) ((int) (unsigned char)145));
            var_25 = ((/* implicit */int) arr_9 [i_0] [i_3] [i_3]);
        }
        var_26 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (arr_4 [i_0] [i_0])))), (((arr_8 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_3 [(signed char)8])))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)245))))) ? (((arr_11 [(unsigned short)2]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)6]))))) : (((arr_11 [14U]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1])))))));
        var_28 |= ((/* implicit */short) ((min((arr_7 [i_4]), ((!(((/* implicit */_Bool) var_13)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-11393)) * (((/* implicit */int) var_8))))) * (min((0U), (((/* implicit */unsigned int) (_Bool)1))))))) : (((((/* implicit */_Bool) max((var_2), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [12ULL])))) : (((((/* implicit */_Bool) arr_3 [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (0ULL)))))));
        arr_12 [i_4] = ((/* implicit */unsigned char) arr_1 [(short)7]);
    }
}
