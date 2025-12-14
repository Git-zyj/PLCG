/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24242
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
    for (unsigned long long int i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) 0U);
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79)))))) ? (((/* implicit */int) max((arr_4 [(unsigned short)7] [i_1]), (((/* implicit */short) arr_5 [(unsigned char)7]))))) : (((/* implicit */int) var_13))))), (min((min((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (0U))), (((/* implicit */unsigned int) arr_0 [(unsigned short)4]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_1);
    var_18 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > ((-(max((((/* implicit */unsigned long long int) var_4)), (arr_8 [i_2] [i_2])))))));
        var_20 *= ((((/* implicit */_Bool) (+(max((arr_8 [(unsigned char)4] [(unsigned char)4]), (((/* implicit */unsigned long long int) 7U))))))) && (((/* implicit */_Bool) arr_7 [i_2] [i_2])));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_3]))));
        arr_12 [i_3] = ((/* implicit */unsigned int) arr_9 [i_3]);
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) min((max((var_4), (((/* implicit */long long int) arr_13 [i_3] [(_Bool)1] [i_3])))), ((~(max((136339441844224LL), (((/* implicit */long long int) -1922078672))))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) max((8733345551016353346ULL), (((/* implicit */unsigned long long int) min((arr_16 [i_3]), (arr_16 [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8733345551016353346ULL)) && (arr_17 [i_3] [i_3] [i_3]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (9713398522693198269ULL))))) : (((/* implicit */unsigned long long int) (~(((var_10) + (((/* implicit */int) arr_11 [i_6])))))))));
                            var_25 &= ((/* implicit */unsigned long long int) (!(((144115188075855872LL) >= (((long long int) (short)17129))))));
                            var_26 = (short)2047;
                            var_27 = ((/* implicit */unsigned char) (_Bool)0);
                        }
                        var_28 = ((/* implicit */_Bool) (unsigned short)47935);
                        var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) min((9713398522693198269ULL), ((~(arr_24 [13U] [i_5] [(short)3] [i_4] [i_3])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)59470)) || (((/* implicit */_Bool) 8675683259074873978LL)))) ? (var_10) : (((/* implicit */int) arr_10 [i_6 + 2] [i_4]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_6]), (((/* implicit */unsigned char) var_3)))))) / (min((839562211180380158ULL), (((/* implicit */unsigned long long int) arr_15 [(signed char)9] [16U]))))))));
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            arr_28 [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [(short)3] [i_8]))));
            var_30 -= ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) arr_9 [i_3]))))));
            var_31 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(arr_21 [(unsigned short)16] [i_3] [(unsigned char)15] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)353)) ? (((/* implicit */int) (short)-5124)) : (((/* implicit */int) (unsigned short)47797))))) : (12537545039679811632ULL))), (((/* implicit */unsigned long long int) min((min((arr_23 [i_3] [i_8]), (((/* implicit */long long int) var_10)))), (((((/* implicit */_Bool) 9713398522693198270ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)5]))) : (var_4))))))));
        }
    }
    var_32 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_4)))))) >= (((((/* implicit */_Bool) var_2)) ? (((6ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) 4294967295U))))));
}
