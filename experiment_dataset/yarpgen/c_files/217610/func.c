/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217610
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [(short)4] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [(short)2]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((898503477), (((/* implicit */int) (unsigned char)206))))), (max((9223372036854775804LL), (((/* implicit */long long int) arr_0 [i_0] [(signed char)7]))))))) ? (((int) ((long long int) arr_1 [i_0] [i_0]))) : (-136210691)));
        arr_4 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) 2147483520)), (-9223372036854775803LL)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (max((arr_1 [i_0] [i_0]), (9223372036854775804LL))))) : (var_2)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (-9223372036854775797LL) : (((/* implicit */long long int) -386587752))));
                        var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((-2097152LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (((long long int) var_10))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775785LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))))));
                            arr_15 [(signed char)10] [(unsigned short)3] [i_2] [(short)3] [i_4] = ((/* implicit */short) (unsigned char)237);
                            var_20 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775783LL))));
                            var_21 = ((/* implicit */long long int) min((var_21), (var_10)));
                            arr_16 [11LL] [4LL] [15LL] [i_3] [11LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2] [i_0]))));
                        }
                        arr_17 [i_0] [(unsigned short)9] [i_0] [i_3] = ((/* implicit */int) var_12);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) (-(((9223372036854775803LL) >> (((((/* implicit */int) arr_6 [i_0])) - (15971)))))));
    }
    for (long long int i_5 = 2; i_5 < 7; i_5 += 4) 
    {
        var_23 = arr_7 [15] [i_5] [(signed char)3] [i_5];
        arr_21 [2ULL] = ((/* implicit */signed char) ((short) max((((((/* implicit */int) var_8)) > (((/* implicit */int) arr_6 [7ULL])))), (((((/* implicit */int) (unsigned short)65516)) > (((/* implicit */int) var_3)))))));
    }
    for (short i_6 = 4; i_6 < 24; i_6 += 4) 
    {
        var_24 += ((/* implicit */short) ((((max((arr_24 [i_6] [i_6]), (((/* implicit */int) var_13)))) <= ((-(((/* implicit */int) arr_22 [(unsigned short)6] [18LL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((int) 9223372036854775801LL))))) : (((((unsigned long long int) 5532196832881967639LL)) * (((unsigned long long int) arr_22 [i_6] [3]))))));
        arr_26 [i_6] [i_6] = ((/* implicit */short) arr_24 [i_6] [i_6]);
        arr_27 [i_6] = ((/* implicit */short) var_1);
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        var_25 -= ((/* implicit */long long int) 18446744073709551610ULL);
        arr_31 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_8)))))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) -5532196832881967664LL))));
    }
    var_27 ^= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)103))) & (2097168LL)))))));
}
