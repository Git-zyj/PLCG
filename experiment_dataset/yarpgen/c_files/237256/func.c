/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237256
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = arr_2 [i_1] [i_1];
                    var_18 *= ((/* implicit */_Bool) arr_8 [7ULL] [i_1] [i_1] [i_1]);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -3891871407032091301LL)) : (min((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) 3272836577U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) var_12);
        var_20 *= ((/* implicit */_Bool) (short)-32751);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (short i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_23 [i_4] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) (unsigned short)17362)) : (((/* implicit */int) (short)-32752)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            arr_26 [i_6] [i_5] [i_6] [i_7] [i_8] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1] [i_5] [i_7] [i_8])) >= (((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 1] [i_5] [i_7] [i_8]))));
                            var_21 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)11));
                            arr_27 [i_7] [i_5] [i_6] [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_8]);
                        }
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_5]))));
                        arr_28 [i_5] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [i_5] [i_7])) ? (((/* implicit */long long int) arr_15 [i_4] [i_5])) : (3891871407032091307LL)))));
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_6))) << (((((-2147483624) - (-2147483641))) - (16)))));
    }
    var_24 = (short)7630;
    var_25 = ((/* implicit */short) var_8);
    var_26 *= ((/* implicit */unsigned int) var_9);
}
