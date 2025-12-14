/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44830
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) 18446744073709551591ULL);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) (short)4394);
            arr_6 [(unsigned char)2] [i_1] &= ((/* implicit */unsigned short) (_Bool)1);
            var_13 = ((/* implicit */unsigned char) (signed char)-121);
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (signed char)-120))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */long long int) (signed char)123);
            var_15 = ((/* implicit */unsigned char) 1567400439U);
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                arr_12 [i_0] [i_2] [i_3] [i_3] = (unsigned short)65531;
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (_Bool)1))));
            }
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            var_17 ^= ((/* implicit */short) (signed char)11);
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (signed char)-2))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_7 = 4; i_7 < 11; i_7 += 3) 
                {
                    arr_23 [i_0] [i_0] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) (signed char)126);
                    arr_24 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)65530);
                    var_19 &= (_Bool)1;
                }
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) (signed char)-10);
                    var_21 = -8615076;
                }
                var_22 = ((/* implicit */int) 11376701925865133245ULL);
                arr_28 [0LL] [0LL] [i_0] [i_5] = ((/* implicit */unsigned long long int) (short)-72);
            }
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)120);
                /* LoopSeq 2 */
                for (unsigned short i_10 = 2; i_10 < 10; i_10 += 2) 
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) 6206513501661836556LL))));
                    var_24 += ((/* implicit */unsigned int) (signed char)126);
                    arr_35 [i_0] [i_5] [i_5] [i_10] [i_0] [i_0] = (_Bool)1;
                }
                for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    arr_40 [(unsigned short)10] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_41 [i_0] [i_5] [i_5] [i_0] [i_11] = ((/* implicit */int) (signed char)-8);
                }
            }
            arr_42 [i_0] [i_5] = ((/* implicit */unsigned int) (unsigned short)33584);
        }
        var_25 = ((/* implicit */int) (unsigned short)29776);
        arr_43 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    var_26 = ((/* implicit */unsigned short) var_0);
    var_27 = ((/* implicit */unsigned long long int) 3695592363U);
}
