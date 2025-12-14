/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242504
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
    var_19 ^= ((/* implicit */unsigned long long int) (signed char)40);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((unsigned char) (+(((((/* implicit */int) (signed char)-46)) * (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_21 -= ((/* implicit */unsigned short) var_14);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) 127U);
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((2147483647) & (((/* implicit */int) arr_5 [i_0])))) == (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1])) * (-2147483647)))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)57)) - (((/* implicit */int) var_4)))))))));
                        arr_10 [i_3 - 2] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)-75))))));
                    }
                    for (signed char i_4 = 3; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-75)) / (((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (max(((~(((/* implicit */int) (signed char)105)))), ((-(((/* implicit */int) var_10)))))) : (((/* implicit */int) (short)-6878))));
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 1099444518912ULL))) + ((-(((/* implicit */int) (signed char)40))))))) + (((((/* implicit */_Bool) arr_1 [i_4 - 2])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127)))))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) var_13))), ((~(248277845)))));
                    }
                    arr_14 [i_0] [i_1 + 3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((var_0) | (arr_8 [i_1 + 1] [i_0] [i_1 + 2] [2ULL] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0 - 2]))))));
                    var_26 -= ((((((/* implicit */int) arr_0 [i_0 - 1])) / (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4294967295U))))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))) <= (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7371)))))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17778)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 3])) | (((/* implicit */int) arr_0 [i_0 - 2]))))) : (min((((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0]))), (((arr_7 [i_0] [i_0] [i_1] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21275)))))))));
                }
            }
        } 
    } 
}
