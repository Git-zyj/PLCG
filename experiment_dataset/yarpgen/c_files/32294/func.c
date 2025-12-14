/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32294
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
    var_12 = ((/* implicit */int) min((var_12), (((int) (~((~(var_6))))))));
    var_13 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 += (!(((/* implicit */_Bool) min((arr_4 [i_1] [16LL]), (((/* implicit */int) (!(((/* implicit */_Bool) 493632228252483794ULL)))))))));
                    arr_8 [9LL] [9LL] [i_0] [i_2] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)12)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_2] [14U])) ? (((/* implicit */int) var_2)) : (var_7)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) var_0))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 3] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((2041088219283757792ULL) * (((/* implicit */unsigned long long int) var_0))));
                        var_15 = ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_0]))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0 - 3])) ? (arr_6 [i_0 + 1] [i_0] [i_0 + 1]) : (((/* implicit */long long int) arr_7 [i_0]))));
                    }
                    arr_12 [i_0] = arr_4 [i_1] [i_0];
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */signed char) (~((~(var_0)))));
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (signed char i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_3 [i_4] [i_6] [i_7]);
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+((~(-1055057877))))))));
                                arr_25 [i_6] [i_7 + 1] [i_6] [i_5] [i_6] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_13 [i_6 - 1])))));
                                var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1])) && (((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1])) && (((/* implicit */_Bool) (unsigned short)44177)))))) : (arr_21 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1]))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_6 + 2] [i_6]))))) & (((long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) 1788043249054216896LL)))))));
                }
            } 
        } 
        arr_26 [i_4] = ((/* implicit */short) ((arr_2 [i_4] [i_4] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1))))));
    }
}
