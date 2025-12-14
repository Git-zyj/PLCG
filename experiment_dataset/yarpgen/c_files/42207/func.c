/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42207
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) (unsigned short)65531))));
    var_11 = ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) var_9)), (var_5))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) : (var_8))))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        var_12 ^= ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                        var_13 ^= ((/* implicit */short) ((((/* implicit */int) arr_11 [i_2] [(short)10] [i_2 - 1])) - (((/* implicit */int) arr_11 [i_3] [(short)22] [i_2 - 1]))));
                        var_14 = arr_6 [i_1];
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        var_15 *= ((/* implicit */unsigned short) var_3);
                        arr_16 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_8 [i_1] [i_1] [i_1] [i_2 - 1]), (arr_11 [i_1] [i_1] [i_1])))) >> (((/* implicit */int) arr_4 [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) var_7);
                        var_17 = ((/* implicit */int) arr_20 [i_2 + 1] [(unsigned short)16] [(unsigned short)16] [i_2 - 1]);
                    }
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_6 [i_1]) || (((/* implicit */_Bool) var_7))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29977))) ^ (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (short)29975)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_19 = min((((unsigned short) arr_4 [i_6] [i_6])), (((/* implicit */unsigned short) (signed char)123)));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_20 += ((/* implicit */unsigned short) ((max((arr_12 [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)70)) * (0)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_6])) / (((/* implicit */int) var_2)))))));
            var_21 += ((/* implicit */signed char) arr_8 [(short)12] [i_7] [i_7] [i_7]);
            var_22 = ((/* implicit */int) var_2);
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)-9784)) + (((/* implicit */int) arr_2 [i_6] [i_6]))))))), (((arr_23 [i_6] [i_6] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_6] [i_6])))))));
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_6] [i_7])) - (((/* implicit */int) arr_8 [i_6] [i_7] [i_7] [i_7])))) << (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_6] [i_7] [i_6] [i_6])), (arr_5 [i_6] [i_7]))))));
        }
        var_24 = (!(((/* implicit */_Bool) arr_18 [i_6] [i_6])));
        var_25 = arr_24 [i_6] [i_6];
    }
}
