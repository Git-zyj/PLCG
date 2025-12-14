/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227326
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)10] [(signed char)10])))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_4 [0ULL] [0ULL] [i_0 + 2])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-4162)))))) ^ (arr_1 [i_4] [i_3])));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned long long int) var_18)))));
                            var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 596983848429135709ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_2] [i_0] [i_4])))))));
                        }
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((unsigned long long int) var_10);
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 2) 
        {
            arr_17 [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_5 - 2] [i_0 + 1]));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                arr_20 [i_6] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (596983848429135709ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
                var_24 -= ((/* implicit */signed char) ((5288533525820017037LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
            }
            for (long long int i_7 = 3; i_7 < 11; i_7 += 2) 
            {
                arr_23 [i_0] = ((/* implicit */unsigned char) ((long long int) var_13));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_25 [i_5] [i_5] [i_7 + 2]) : (((/* implicit */unsigned long long int) var_14))));
                    var_26 ^= (!((!(((/* implicit */_Bool) (unsigned char)238)))));
                    arr_26 [i_0] [i_0] [i_5] [i_0] [i_0] [i_5] = ((/* implicit */int) var_8);
                }
                arr_27 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551613ULL))));
            }
        }
        var_27 ^= ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
        var_28 |= ((/* implicit */unsigned long long int) arr_11 [6LL] [i_0 + 1] [i_0 - 1] [6LL]);
    }
    for (long long int i_9 = 2; i_9 < 12; i_9 += 2) 
    {
        var_29 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_29 [i_9 - 2] [i_9 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_9]))) : (var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9 - 2])) && (((/* implicit */_Bool) (signed char)-49)))))));
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((127969496) << (((1152921470247108608LL) - (1152921470247108608LL))))))));
        var_31 -= ((/* implicit */unsigned long long int) var_16);
    }
    var_32 ^= ((/* implicit */short) var_17);
    var_33 *= ((/* implicit */unsigned char) (~(6506096919284702414ULL)));
}
