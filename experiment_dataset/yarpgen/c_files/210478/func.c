/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210478
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)1966)) <= (((/* implicit */int) (short)(-32767 - 1))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)62978))) : (((unsigned long long int) var_1))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_1 [i_0]))))) >= (((/* implicit */int) arr_1 [i_0])))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [(_Bool)1])))))) ? (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (arr_0 [i_0] [i_0])))) ? (((((arr_0 [i_0] [i_0]) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0])) + (18998))) - (19))))) : (arr_0 [i_0] [i_0]))))))));
        var_19 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15360)) ^ (((((/* implicit */_Bool) 6042722070282782087LL)) ? (((/* implicit */int) (unsigned short)50171)) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (973370317) : (((/* implicit */int) (unsigned char)12))))))));
        var_21 += ((((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_3 [i_1])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_2 [i_1] [(unsigned short)14])))) + (194)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [(signed char)6])) ? (-22902674) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(unsigned char)4]))) : (((((/* implicit */_Bool) arr_2 [i_1] [2])) ? (147294835603462705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_22 *= ((/* implicit */short) (~(((long long int) (unsigned short)4068))));
        var_23 = ((/* implicit */int) var_9);
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_24 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_7 [i_3]))))) ? (((arr_8 [2ULL]) >> (((((/* implicit */int) arr_4 [i_3] [i_3])) + (88))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_2))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (arr_8 [i_3]) : (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_5] [i_6 - 2]))) : (arr_5 [i_4])))) : (((((/* implicit */_Bool) 6042722070282782087LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))) : (18186159496196924117ULL)))))));
                        var_26 = ((/* implicit */long long int) arr_2 [i_4] [i_4]);
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_13 [i_3] [i_4] [i_3]))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */signed char) var_11);
}
