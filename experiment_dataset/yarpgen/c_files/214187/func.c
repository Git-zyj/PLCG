/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214187
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
    var_10 *= ((/* implicit */short) ((var_4) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((var_9), (((/* implicit */long long int) var_8)))))))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 2935925260131500800LL))) ? (((/* implicit */unsigned long long int) ((int) (+(var_1))))) : (((unsigned long long int) (-(((/* implicit */int) var_8))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((+((+(((/* implicit */int) (unsigned char)81)))))) << (((var_9) - (2940152638519293323LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((((/* implicit */_Bool) var_1)) && (arr_1 [i_0] [(unsigned short)16]))), ((!(((/* implicit */_Bool) 9934162508162236338ULL))))))) ^ ((~(var_3))))))));
        var_13 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) / (var_3)))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_14 ^= ((/* implicit */long long int) (+(min(((+(9934162508162236338ULL))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
        arr_6 [i_1] &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)107)) >> (((8512581565547315277ULL) - (8512581565547315261ULL))))));
        var_15 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_3))))) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_5 [i_1] [2ULL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)88)))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */int) max((arr_0 [12ULL]), (var_2)))), (((((/* implicit */_Bool) arr_0 [18ULL])) ? (((/* implicit */int) arr_0 [(short)6])) : (((/* implicit */int) arr_0 [(signed char)6])))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_2] [i_2]))));
        var_18 = ((/* implicit */long long int) 3691651601618285307ULL);
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_2] [i_3 - 1] [i_2] [i_4]));
                        var_20 = ((/* implicit */short) var_1);
                        arr_17 [i_2] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((arr_11 [i_3 + 2] [i_2] [i_3 + 3]) >> (((arr_11 [i_3 - 1] [i_2] [i_3 + 3]) - (5516155016842945319ULL)))))) : (((/* implicit */unsigned short) ((arr_11 [i_3 + 2] [i_2] [i_3 + 3]) >> (((((arr_11 [i_3 - 1] [i_2] [i_3 + 3]) - (5516155016842945319ULL))) - (17776356209234473415ULL))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */int) var_7);
                                var_22 *= var_5;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (~(arr_11 [i_2] [i_2] [i_3 - 2])));
                        arr_24 [i_2] [i_4] [i_2] [i_3] [(_Bool)1] = ((/* implicit */short) ((var_6) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        arr_27 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (+(var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_3))))))))) : (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_1))))));
        arr_28 [i_9] = (~(((arr_8 [i_9]) + (((/* implicit */unsigned long long int) arr_7 [i_9])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            var_24 = ((/* implicit */int) ((_Bool) var_2));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_10 - 1] [i_10 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [1ULL] [i_10 - 1] [1ULL] [i_10 + 2] [i_10 - 1] [i_10 + 1])))))) ? (max((arr_25 [i_10 - 1] [i_10 + 1]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 2] [i_10 + 2])))))))))));
        }
        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) ((var_3) >= (var_0))))))));
    }
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-3366)), (1594914623497021584ULL)));
}
