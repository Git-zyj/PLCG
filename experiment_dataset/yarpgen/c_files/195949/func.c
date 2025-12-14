/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195949
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_14 *= ((/* implicit */unsigned long long int) 2635359543U);
            var_15 = ((/* implicit */_Bool) 6969674441566736659ULL);
            var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 3])))), (((384642674) & (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 1]))))));
        }
        var_17 -= ((/* implicit */_Bool) min((min((((/* implicit */long long int) (-(323430733)))), (arr_2 [i_0]))), (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)95)))), (323430731))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_7 [7LL] = ((/* implicit */unsigned int) ((arr_1 [i_2]) ? (((((/* implicit */int) (unsigned char)204)) | (((/* implicit */int) arr_5 [i_2])))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (323430731) : (((/* implicit */int) (_Bool)1))))));
        arr_8 [(signed char)9] = (-(((/* implicit */int) arr_4 [i_2])));
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_13))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (var_12))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [0LL])) : (var_13))) << (((/* implicit */int) arr_1 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])), ((~((~(arr_9 [i_3])))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            arr_14 [4U] [i_3] = ((/* implicit */signed char) ((max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_4 + 2]), (((/* implicit */unsigned long long int) 14751438))))) ? (((((/* implicit */_Bool) min(((short)-24089), (((/* implicit */short) var_4))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 18446744073709551615ULL))))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) != (arr_13 [i_4])));
                var_22 = ((/* implicit */long long int) (_Bool)1);
            }
            arr_18 [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1832454552U)) ? (((/* implicit */long long int) 65535)) : (43978571268126451LL)))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) arr_16 [19] [i_6]);
            var_24 -= ((/* implicit */unsigned int) arr_9 [i_3]);
        }
        arr_22 [i_3] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_11)))), ((_Bool)1)));
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))))), ((unsigned char)62))))));
        arr_23 [i_3] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_11))) % (-43978571268126467LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_3))));
    }
    var_26 = ((/* implicit */_Bool) min((var_26), (var_5)));
}
