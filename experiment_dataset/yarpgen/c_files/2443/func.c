/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2443
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_14))) ? (min(((-(9223372036854775807LL))), ((-(var_14))))) : (((/* implicit */long long int) var_4))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_16 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : (var_11)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_2)) : (var_13))) : (((/* implicit */unsigned int) (+(var_3))))))), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (2249600790429696ULL)))));
        arr_3 [4U] = ((/* implicit */long long int) var_3);
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22762)) ? (9223372036854775807LL) : (var_7)))) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (min((((/* implicit */unsigned long long int) var_7)), (var_9))))))));
        var_18 ^= ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (short)3049)), (var_11)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (var_13)));
            var_20 *= ((/* implicit */unsigned long long int) var_0);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((~(var_7))) : (((/* implicit */long long int) (+(var_1))))));
                    arr_15 [i_4] = ((((/* implicit */_Bool) var_9)) ? (var_2) : ((-(((/* implicit */int) (_Bool)1)))));
                    arr_16 [i_3] [11LL] [i_3] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) var_6)));
                }
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (60552)))));
        arr_18 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (14945681636439314010ULL) : (var_12))) + (var_11)));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17311556809358754046ULL)))))) : (var_9)));
        arr_22 [(short)13] = ((/* implicit */unsigned long long int) var_10);
        /* LoopSeq 1 */
        for (unsigned int i_6 = 4; i_6 < 12; i_6 += 3) 
        {
            arr_25 [(short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
            arr_26 [4ULL] [i_6] [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)98))))));
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
            var_22 -= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2249600790429696ULL)) ? (((/* implicit */unsigned int) var_3)) : (var_13)))) : ((+(var_9))));
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) 9223372036854775807LL));
                        arr_33 [i_5] [i_5] [i_9] [i_9] [5U] [5U] = ((/* implicit */signed char) var_13);
                    }
                } 
            } 
        } 
    }
}
