/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45268
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
    var_20 = ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */int) (((!(((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(short)13] [(short)13] [i_3]))) : (arr_9 [i_0] [i_1] [9ULL] [i_3]))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_13)))) << (((max((((/* implicit */unsigned long long int) (short)-32764)), (arr_0 [i_3]))) - (18446744073709518850ULL))))))));
                        var_22 = ((/* implicit */signed char) arr_2 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (+(min((arr_3 [i_1 - 1] [i_1 + 1]), (((/* implicit */long long int) arr_5 [i_1 - 1]))))));
                                var_24 = (short)-12793;
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18296301643787138786ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (short)10929)) != (((/* implicit */int) var_1))))) : (((/* implicit */int) min((var_3), (var_9)))))))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) / (((((/* implicit */_Bool) (short)-32767)) ? (var_14) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) 2147483647)))))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0 + 1] [i_1 + 1] [(short)2])));
                    var_26 -= ((unsigned long long int) ((unsigned long long int) min((arr_13 [i_1] [i_1 - 1] [i_1] [i_2] [i_2] [(_Bool)1]), (((/* implicit */unsigned long long int) (short)12784)))));
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_6 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_20 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (((~(var_5))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0])))))))));
                        var_27 ^= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-10913))))) | (150442429922412841ULL))), (min((((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (var_5)))));
                    }
                    for (signed char i_7 = 2; i_7 < 12; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) / (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24))) : (arr_10 [i_0] [i_2] [i_0] [i_2] [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 3; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) arr_13 [i_2] [i_2] [i_8 + 2] [i_1 + 1] [i_1 - 2] [i_2]);
                            var_30 = ((/* implicit */int) max((var_30), (((arr_14 [i_0] [i_0] [i_0 + 2] [i_1 + 1] [i_7] [i_7 + 4] [i_8 - 2]) ? (((((((/* implicit */int) var_13)) * (((/* implicit */int) (unsigned char)255)))) + ((+(((/* implicit */int) var_16)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1]))) : (arr_1 [(_Bool)0])))))))))));
                            var_31 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0 + 2] [i_1 - 1]);
                            arr_28 [i_8] [i_7] [i_7] [(short)10] [i_0] &= ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) arr_12 [i_2] [i_7] [i_8])), (arr_9 [i_7] [i_7 - 2] [i_1 - 2] [i_0]))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 14; i_9 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) var_6);
                            var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
                            var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (signed char)127))));
                        }
                        for (unsigned char i_10 = 3; i_10 < 14; i_10 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (arr_30 [i_0] [i_2] [i_2] [i_7 + 1] [i_2] [i_2] [i_0])));
                            var_36 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -4548141414882192356LL)) < (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((arr_13 [i_2] [i_10 + 1] [i_7] [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14162)))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (-(min(((+(248868073))), ((-(((/* implicit */int) var_16)))))))))));
                            var_38 &= ((/* implicit */_Bool) 17592186044415LL);
                            arr_35 [i_2] = ((/* implicit */unsigned char) arr_22 [i_1] [i_1] [i_1] [i_11 - 2]);
                            var_39 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_9)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_18))))) * (63U))))));
}
