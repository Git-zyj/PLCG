/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222405
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
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) (short)27354)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)7936)) && (((/* implicit */_Bool) (unsigned short)8191))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [13U] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1]))))) : (((((/* implicit */int) arr_2 [i_0 - 2] [i_0] [0LL])) * (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 180398895))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)16348), ((unsigned short)7520))))))))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_12))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((unsigned long long int) arr_1 [i_0 - 1]))));
        }
        arr_4 [i_0] = (~(var_1));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) max((max((((((/* implicit */int) var_8)) % (((/* implicit */int) arr_3 [i_0 - 2] [i_0])))), (((/* implicit */int) arr_6 [8U])))), (((/* implicit */int) arr_1 [i_0 + 2]))));
                    arr_9 [i_3] [i_2] [i_2] [i_0] = arr_7 [i_2] [i_3];
                    var_18 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 2] [i_2 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1] [i_2 - 1]))))) / (((unsigned long long int) arr_2 [i_0 + 2] [i_0 + 1] [i_2 - 1]))));
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        arr_12 [4] |= ((/* implicit */int) max((min((0ULL), (((/* implicit */unsigned long long int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))), (max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) arr_10 [i_4]))))));
        var_19 = ((/* implicit */unsigned int) ((((unsigned long long int) (+(var_9)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_10)))))));
        var_20 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_11)) <= (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [16])), ((unsigned short)16348)))))));
    }
    for (int i_5 = 2; i_5 < 8; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64))))))) >= (arr_8 [i_5])));
        var_22 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) arr_7 [0] [i_5 - 2]))), (min((((((/* implicit */_Bool) arr_14 [(short)6] [(short)6])) ? (2146435072U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_3 [i_5] [0])), ((unsigned short)65535))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)136)))))))));
}
