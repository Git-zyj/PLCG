/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211354
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047LL)) ? (-2047LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_5))))) : (var_1)));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */long long int) -660352625)) <= (72057594037927872LL))))));
    var_13 = ((/* implicit */long long int) max(((+((-(((/* implicit */int) (unsigned char)24)))))), (((/* implicit */int) (unsigned char)190))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0])) + (var_5))) <= (((/* implicit */long long int) (+(((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) (short)-10621)) + (10634))))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_14 += ((/* implicit */unsigned int) (unsigned char)42);
                        var_15 = ((/* implicit */_Bool) min((max((0ULL), (((/* implicit */unsigned long long int) arr_5 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14045)) + (((/* implicit */int) arr_5 [i_0])))))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] = (+((+(((arr_5 [i_0]) ? (((/* implicit */long long int) 6U)) : (var_4))))));
        }
        var_16 = 9223372036854775807LL;
        var_17 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (short)18273)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2022266025U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18274))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2)))) ? (((int) var_4)) : (((((/* implicit */_Bool) (short)504)) ? (((/* implicit */int) (short)-12730)) : (((/* implicit */int) (unsigned char)167)))))))));
        var_18 = ((/* implicit */unsigned long long int) ((int) max((arr_3 [i_0 - 2] [i_0] [i_0 - 1]), (arr_3 [i_0] [i_0] [i_0 - 1]))));
    }
    for (short i_4 = 4; i_4 < 7; i_4 += 1) 
    {
        arr_17 [i_4] [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_4] [i_4])) >> (((var_4) + (4533000803300822140LL))))), (1023)))) ? (((unsigned long long int) arr_10 [i_4] [i_4] [i_4])) : (min((min((((/* implicit */unsigned long long int) var_5)), (12777579617655807036ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)231)))))))));
        arr_18 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 2686270911U))) ? (min((((/* implicit */long long int) (short)15)), (((((/* implicit */_Bool) (unsigned short)40995)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34262))) : (arr_15 [i_4]))))) : ((~(var_5)))));
        var_19 = ((/* implicit */signed char) arr_9 [i_4 - 1] [i_4] [i_4]);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34262))) : (18446744073709551615ULL))));
        arr_22 [i_5] = ((/* implicit */_Bool) ((short) (-(var_4))));
        arr_23 [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                {
                    arr_32 [1LL] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51490)) >> (((((/* implicit */int) var_0)) + (75)))));
                    /* LoopSeq 1 */
                    for (short i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_27 [13LL] [i_7] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_5] [i_6])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 5669164456053744595ULL))));
                            var_23 ^= (-(((((/* implicit */_Bool) var_4)) ? (arr_2 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_8 - 2] [i_5] [i_7 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))))));
                            arr_44 [i_5] [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-39)) ? ((~(((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) (signed char)-40))));
                            arr_45 [i_5] [i_5] [i_7] [i_8 - 1] [i_10] |= ((/* implicit */unsigned int) var_6);
                        }
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((_Bool) var_7)))));
                    }
                }
            } 
        } 
    }
}
