/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221937
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) 2147483617)))))) ? (((/* implicit */long long int) var_8)) : (min((((var_5) ? (((/* implicit */long long int) -1897180883)) : (9223372036854775807LL))), (((/* implicit */long long int) (~(((/* implicit */int) (short)1023)))))))));
    var_14 = ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_0] [6] = (+(((/* implicit */int) var_12)));
                    var_15 -= ((/* implicit */_Bool) (-((~(((646992593U) ^ (((/* implicit */unsigned int) arr_4 [(unsigned char)6] [(short)8]))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)23382)) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), ((+((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -2816748225051276709LL))))));
                }
            } 
        } 
        var_16 = ((_Bool) -2147483625);
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        arr_12 [i_3 - 2] = ((/* implicit */unsigned char) ((unsigned int) arr_11 [i_3 - 2] [i_3 + 2]));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_10 [i_3] [i_3 - 3]))));
        var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (63LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3 + 2])))));
        arr_13 [i_3] = (!(((((/* implicit */_Bool) 4933012588136466305LL)) || (((/* implicit */_Bool) (signed char)-11)))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23383)) ? (4294967295U) : (973805136U)));
                    var_20 = ((/* implicit */int) arr_20 [i_4]);
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((var_1) >= (9223372036854775782LL))))));
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_7))))), ((unsigned short)65534)))) & ((-(((/* implicit */int) arr_22 [i_6]))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) var_5)))))))) * (((/* implicit */int) ((-68LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6])))))))))));
        arr_24 [i_6] = ((/* implicit */unsigned int) max(((short)-1), (((/* implicit */short) (signed char)60))));
    }
}
