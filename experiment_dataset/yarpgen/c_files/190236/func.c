/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190236
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
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 1804975325U))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_7 [i_1])))))) == (((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 3]))))));
                    arr_10 [i_0] [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+((+(arr_1 [16LL])))))) / (arr_8 [(_Bool)1] [(_Bool)1] [i_0 + 1])));
                    arr_11 [i_1 - 1] [i_1] [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 785345474)) ? (((/* implicit */unsigned long long int) (+(arr_5 [i_2 + 1] [i_1 + 2] [i_0 + 1])))) : (arr_8 [i_0 + 2] [i_1 + 2] [i_2 - 2])))) ? ((-(min((arr_4 [i_1] [i_1 + 1] [i_2 - 1]), (var_17))))) : (((/* implicit */unsigned long long int) ((arr_5 [i_1 - 1] [i_1 - 1] [i_2 + 1]) - (arr_5 [i_2] [i_2 - 1] [i_2 + 1]))))));
                    var_20 = ((/* implicit */short) (unsigned short)15051);
                }
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    arr_14 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)0));
                    var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (arr_1 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)115)) == (785345471))))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) -2147483632))))))))));
                }
                var_22 = ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) max(((unsigned char)62), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))))) : ((~(((((/* implicit */_Bool) (unsigned char)161)) ? (arr_5 [i_0] [21] [(signed char)0]) : (237742612))))));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */int) min((((unsigned long long int) arr_15 [i_1])), (((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 - 1] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (short)6300)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1]))) : (arr_6 [(unsigned short)11] [i_1] [3U])))))));
                        var_24 = ((/* implicit */unsigned short) ((((776042507) << ((((((-(((/* implicit */int) var_0)))) + (9661))) - (23))))) * (((/* implicit */int) (!(((arr_8 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) 2075912763)))))))));
                        var_25 |= (~(2622641857U));
                    }
                    for (int i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) (-((~(2147483631)))));
                        var_27 = ((/* implicit */unsigned char) (short)-6156);
                        var_28 ^= ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) -5215437156949498732LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65518), (((/* implicit */unsigned short) var_15)))))))));
                    }
                    arr_22 [i_1] [i_1] [(_Bool)1] = var_13;
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                {
                    arr_27 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1 + 1] [i_1 + 1]))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 3] [i_0 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))));
                    arr_28 [i_1] = ((/* implicit */unsigned char) (((+((-9223372036854775807LL - 1LL)))) & (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_1] [i_1] [i_0])))));
                    var_30 = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [i_7]) * (((/* implicit */int) ((8866461766385664ULL) <= (((/* implicit */unsigned long long int) arr_3 [i_7])))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned long long int) (unsigned char)212);
        var_31 ^= ((/* implicit */short) ((((((/* implicit */_Bool) 237742614)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (4945726571711087535ULL))) ^ (((/* implicit */unsigned long long int) ((arr_16 [i_8]) - (arr_16 [i_8]))))));
        var_32 = ((/* implicit */long long int) ((unsigned short) ((arr_8 [i_8] [i_8] [i_8]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14)))))));
    }
    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) -9214175480317097687LL)) ? (4945726571711087535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (var_8)))) ? (((/* implicit */int) ((unsigned char) var_17))) : (((((/* implicit */int) (unsigned short)1022)) & (((/* implicit */int) (signed char)56))))))))))));
}
