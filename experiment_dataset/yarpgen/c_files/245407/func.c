/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245407
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
    var_17 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) (short)-22613))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))) : (min((11471531289147060257ULL), (((/* implicit */unsigned long long int) var_7)))))));
    var_18 = min((((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned long long int) ((var_1) >> (((((/* implicit */int) var_13)) - (33399)))))) : ((+(var_2))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (-2147483629)))) ? (((var_3) ? (var_10) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((min((var_5), (((/* implicit */long long int) var_3)))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((short) 13977005112791407544ULL)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_19 = (unsigned short)5897;
                    arr_9 [i_0] [i_1] [i_1] = ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_10))));
                    arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_0] [i_2])))) & (((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (var_12)));
                    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((((/* implicit */_Bool) max((3246477350U), (((/* implicit */unsigned int) arr_11 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_3])) : (((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) || (((/* implicit */_Bool) arr_0 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) : (max((((/* implicit */unsigned long long int) 4294967295U)), (arr_8 [i_3] [16ULL] [i_3] [16ULL]))))));
        /* LoopSeq 3 */
        for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
        {
            var_21 -= ((/* implicit */_Bool) var_7);
            var_22 = ((/* implicit */unsigned char) (unsigned short)34162);
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned short)0);
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
        {
            arr_22 [i_5] [i_3] = ((((((/* implicit */_Bool) arr_12 [i_3] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_5] [i_3])) ? (((/* implicit */unsigned long long int) arr_12 [i_3] [i_5])) : (8646911284551352320ULL)))))) || ((!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [i_3] [i_5])))))));
            var_23 &= ((/* implicit */int) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_3])) : (var_11))), (((((/* implicit */_Bool) arr_6 [i_3] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) : (var_8))))) != (((/* implicit */unsigned long long int) ((long long int) 52023944)))));
        }
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) max((arr_4 [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_12 [i_3] [i_6]))))), (((unsigned long long int) arr_23 [i_3])))), (((((/* implicit */_Bool) arr_15 [i_3] [i_6] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_6] [i_6])))))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_11 [i_3] [i_3]))) << (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)))))))))));
                arr_29 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 0ULL))))))));
            }
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 260096U)))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_10)))))))) ? (var_8) : (var_12)));
}
