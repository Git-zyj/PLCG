/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41109
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_3 - 1])) % (((/* implicit */int) var_3)))))));
                            var_22 = ((/* implicit */unsigned char) var_1);
                            arr_15 [i_0] [i_0 - 1] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) var_5);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3]))) - (72057594037927935LL)));
                        }
                        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0 - 1] [i_1]));
                            var_25 = ((/* implicit */_Bool) 110933779U);
                            var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_3 - 1])) ? (arr_1 [i_0 - 1] [i_3 - 1]) : (arr_1 [i_0 - 1] [i_3 - 1]))), (((/* implicit */unsigned long long int) ((_Bool) 72057594037927935LL)))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) -1424087817))));
                            var_28 *= min((var_8), (((/* implicit */signed char) ((_Bool) arr_0 [i_6 + 2] [i_0 - 1]))));
                            var_29 = ((/* implicit */unsigned short) (_Bool)1);
                            var_30 = ((/* implicit */unsigned short) (((~(711565077))) == ((-(711565077)))));
                        }
                        arr_20 [(unsigned char)12] [i_2] [i_1] [(unsigned char)12] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == ((~(2301908621U)))));
                        var_31 = ((/* implicit */unsigned long long int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3]))) | (8112121579360022875ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), ((!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1]))))));
                        var_32 = ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) 1424087816)), (9029772908723830628ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1904616455U)), (1317787604315648846LL)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_10 [i_0] [i_3])))))))));
                    }
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        var_33 *= ((/* implicit */unsigned short) ((_Bool) min((arr_17 [i_0 - 1] [i_0 - 1] [i_7 + 1] [i_7 + 1]), (arr_17 [i_0 + 1] [i_0 + 1] [i_7 - 1] [i_7 + 1]))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((((unsigned long long int) arr_10 [i_0 - 2] [(unsigned short)2])) == (((/* implicit */unsigned long long int) min((arr_0 [i_0 - 2] [i_7 - 1]), (((/* implicit */int) arr_4 [i_0 + 1])))))))));
                        var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)6)), (3804975695U)));
                        arr_24 [i_0] [i_0] [i_7] [i_7] [i_7] = ((/* implicit */int) arr_21 [i_7 - 1]);
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((unsigned short) arr_21 [i_0 - 2])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            {
                var_37 *= ((/* implicit */signed char) ((((/* implicit */int) var_8)) & ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_9 + 1] [(unsigned char)12])) : (((/* implicit */int) arr_10 [i_9 + 1] [4U]))))));
                arr_29 [i_8] [i_9 + 2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_23 [i_8] [i_9] [i_8] [i_8])), (var_6)))) - ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */unsigned long long int) min((2439783302U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_9 [i_8] [i_8])))))))) : (var_16));
            }
        } 
    } 
}
