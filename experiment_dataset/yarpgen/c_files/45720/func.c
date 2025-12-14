/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45720
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)17800)) : (((/* implicit */int) (unsigned short)58144))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55356))) : (arr_2 [i_0] [i_0] [i_0 - 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            arr_14 [i_4] [(unsigned short)0] [(short)6] [i_2] [(short)6] [(unsigned char)2] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-29694)) ? (((/* implicit */unsigned int) -1)) : (var_12))) == (((((/* implicit */_Bool) 2083761253)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (63U)))));
                            arr_15 [i_0] [11U] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-17805)) <= ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
                            var_19 = arr_13 [i_1] [(short)2] [i_1] [i_3 - 4] [7U] [(_Bool)1] [i_3];
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((arr_10 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44387)))))) : (((/* implicit */int) var_8))));
                        }
                        arr_20 [i_2] [i_0] = (+((-((~(((/* implicit */int) arr_6 [(_Bool)1] [9LL] [(unsigned char)1])))))));
                        var_21 = ((/* implicit */short) (~((~(var_9)))));
                        arr_21 [i_0] [i_1] [i_1] [(unsigned short)1] = -831131465;
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0)))))));
                        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65531)) ? (arr_2 [i_6] [i_2] [(signed char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)29692))))))));
                        var_25 *= ((/* implicit */_Bool) (short)17802);
                    }
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                        var_27 = ((((((/* implicit */unsigned long long int) 6991842971202991170LL)) <= (arr_22 [11U] [i_1 - 1] [i_0] [(_Bool)1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) var_4)));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 9223372036854775807LL))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) / (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [(unsigned short)2] [4LL])), (arr_4 [8ULL] [(short)5] [0ULL])))) ? (((/* implicit */int) arr_23 [i_7])) : ((+(((/* implicit */int) var_11)))))))))));
                    }
                    arr_26 [i_0] [(unsigned char)7] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)30);
                    arr_27 [i_0] = ((/* implicit */unsigned int) var_14);
                    arr_28 [(unsigned char)7] [(unsigned char)5] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7397)) ? (var_2) : (((/* implicit */unsigned long long int) arr_9 [12LL] [4ULL] [i_0] [i_2] [4LL]))))) ? (((((/* implicit */_Bool) (unsigned short)55380)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)67)))) : ((-(((/* implicit */int) (unsigned short)7401))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */_Bool) (signed char)-29);
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_5))));
}
