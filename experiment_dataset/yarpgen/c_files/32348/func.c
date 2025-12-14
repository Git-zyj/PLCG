/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32348
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
    var_10 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))), ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                    {
                        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
                        arr_10 [i_0] [15] [i_1] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)119)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_3 + 1] [i_3 + 1] [(signed char)12] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [i_0] [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4665523477784579169LL)) || (((/* implicit */_Bool) arr_1 [i_0])))))) : (arr_8 [i_0] [i_1] [i_0] [(_Bool)1] [i_3] [i_3])))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6983682654717377951LL)) ? ((-9223372036854775807LL - 1LL)) : (911621922534743347LL)));
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)126)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((~(2333430739U)))))) ? ((~(1073676288LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [(signed char)15])))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_4 + 1] = ((/* implicit */short) ((((arr_3 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-11692))))))) << (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
                        arr_15 [24U] [i_1] [i_0] [19LL] [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)28))))));
                        var_14 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 911621922534743326LL)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [21U] [i_0] [i_1] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) min(((short)-11692), (((/* implicit */short) (signed char)83)))))));
                        var_15 = ((/* implicit */signed char) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)223))));
                        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (signed char)-22)) && (((/* implicit */_Bool) (short)32767)))) ? (((-911621922534743348LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)33235)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((short) (unsigned short)64644))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        arr_22 [(signed char)9] [(unsigned short)8] [i_0] = ((/* implicit */unsigned int) ((arr_17 [(signed char)14] [20U] [i_6 + 1] [(signed char)14] [i_6 + 1] [i_6 + 1]) > (arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                        var_16 += ((/* implicit */long long int) var_7);
                        arr_23 [i_0] [(_Bool)1] [i_2] [i_6 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [18LL] [11LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [(unsigned char)5])) >> (((arr_6 [(short)12]) - (844700187)))))) : (1099511627775ULL)));
                        arr_24 [i_1] [14ULL] [i_2] [i_6] |= ((/* implicit */unsigned short) (+(0U)));
                        var_17 = ((/* implicit */long long int) arr_1 [(signed char)2]);
                    }
                }
                var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [(unsigned short)17])) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_5 [i_0])) : (5248405391715858045LL))) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (signed char)76)) - (72)))))))))) : (arr_7 [20LL])));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_1]) & (arr_6 [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_1]))) : (arr_7 [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                arr_25 [i_1] [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */long long int) var_1)) | (var_9))))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((_Bool) (short)1504))))));
}
