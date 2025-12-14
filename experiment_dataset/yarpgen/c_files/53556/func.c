/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53556
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [(_Bool)0] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (arr_1 [i_0] [i_0])))) == (((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_18 = (+(((606723480) + (606723480))));
            var_19 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1LL));
        }
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) var_9);
            arr_9 [9] [9] [15LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)2] [i_0])) || (((/* implicit */_Bool) (signed char)13))))) != (arr_7 [2] [i_2 - 2])));
            arr_10 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21768)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))));
            arr_11 [i_2 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-1))));
        }
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(arr_3 [i_0] [i_0]))))));
    }
    var_21 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) (short)-1076)), (var_11))))), (((/* implicit */unsigned long long int) (short)21751))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (short i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                {
                    var_22 *= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_16 [i_5 + 4] [i_5 + 1])) || ((_Bool)1)))));
                    var_23 += ((/* implicit */long long int) arr_18 [9ULL] [i_5 + 3] [8] [(_Bool)1]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_24 = (-9223372036854775807LL - 1LL);
                        arr_23 [i_3] [(_Bool)1] [i_4] [i_3] [i_3] [i_4] = ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1001297429)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)221)))))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        var_25 |= ((/* implicit */short) arr_24 [i_3] [i_4] [i_4]);
                        arr_28 [i_3] [i_3] [i_3] [i_7 - 2] [i_3] [i_3] = arr_27 [i_3] [i_4] [i_5 + 1] [i_7 - 2] [i_3] [i_4];
                        var_26 -= var_2;
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */short) 1ULL);
                        var_28 ^= ((/* implicit */short) (-((+(min((((/* implicit */unsigned long long int) arr_20 [17ULL] [i_4] [15] [i_8])), (18446744073709551615ULL)))))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)-21771)))))))));
                        var_30 = ((/* implicit */_Bool) ((((long long int) arr_18 [i_5 + 4] [i_5 + 1] [(unsigned short)10] [(unsigned short)10])) & (((/* implicit */long long int) ((/* implicit */int) min((arr_21 [i_5 + 3] [i_5 + 3] [i_5 + 4] [i_5 + 1] [23]), (arr_21 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5])))))));
                        var_31 = ((/* implicit */long long int) var_3);
                    }
                }
            } 
        } 
    } 
}
