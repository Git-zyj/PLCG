/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42170
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_3]))) == (arr_6 [i_0] [i_1] [i_2] [i_3])));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned short)28389))));
                                arr_16 [i_2] [5LL] [i_3] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_2);
                                var_17 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)44185))))));
                                arr_17 [i_4] [i_3] &= ((/* implicit */short) ((((((/* implicit */int) (short)(-32767 - 1))) + (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)-119)))))) ^ (((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] [i_0] [i_3]))))))));
                            }
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-5217326150837910997LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) -8899108514047486162LL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)-96)))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967278U)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))) : (-2147483638)))) : (var_5)));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28564))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (var_13) : (((/* implicit */int) (short)-32739)))))));
                arr_19 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-19045)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-32765)) | (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_14 [i_1] [(unsigned short)1] [i_1] [i_0] [i_0] [11LL] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)26479)) ? (1860023814) : (((/* implicit */int) (unsigned char)58)))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (unsigned short)54819)) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) <= (((/* implicit */int) (_Bool)1)))))))));
                arr_20 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0] [i_1])) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) var_0)))) : (((/* implicit */int) ((733544138) <= (((arr_11 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)15138)) : (((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    arr_29 [i_5] [i_7] = ((/* implicit */_Bool) var_15);
                    arr_30 [i_5] [i_5] [i_5] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((arr_24 [i_5]) + (636203595)))))))))) - (max((6068762872686405130ULL), (((/* implicit */unsigned long long int) (short)6501))))))) : (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((arr_24 [i_5]) + (636203595))) - (1259288436)))))))))) - (max((6068762872686405130ULL), (((/* implicit */unsigned long long int) (short)6501)))))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_15))));
}
