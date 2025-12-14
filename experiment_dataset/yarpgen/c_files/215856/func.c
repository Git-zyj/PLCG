/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215856
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_5 [i_0] = min((((((/* implicit */_Bool) (short)-20490)) ? (((/* implicit */int) (unsigned char)249)) : (((((/* implicit */_Bool) -1896970528)) ? (((/* implicit */int) var_10)) : (0))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0]) : (((/* implicit */int) (short)-27402)))))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_8 [i_0] [i_1] [(short)11] = (-(((((/* implicit */_Bool) (short)-30870)) ? (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (short)19853)) : (((/* implicit */int) (short)-29383)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_3 [i_0]))))))));
                var_20 ^= arr_1 [i_2];
                var_21 += ((/* implicit */short) ((5) * (-1)));
            }
            for (short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                arr_12 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)27683))))) && (((/* implicit */_Bool) ((int) var_6)))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (arr_9 [5] [i_1] [i_1]) : (((/* implicit */int) (short)-3112))))))) || (((/* implicit */_Bool) (~(var_1))))));
                arr_13 [i_0] [i_0] [(short)18] [i_0] = min((((/* implicit */int) (short)31272)), (1344740105));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_23 = arr_2 [i_0] [i_1];
                var_24 = ((/* implicit */short) ((((/* implicit */int) (short)-23557)) == (-1226015016)));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    arr_18 [2] [11] [i_1] [11] = ((/* implicit */unsigned char) ((int) var_3));
                    var_25 ^= ((/* implicit */short) var_5);
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        arr_21 [i_6] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) (((-2147483647 - 1)) + (2147483647)));
                        arr_22 [i_0] [i_1] = var_2;
                    }
                    arr_23 [(short)5] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
            }
            arr_24 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_13)) != (((/* implicit */int) (short)-3))));
            arr_25 [i_0] [i_1] = ((((max((((/* implicit */int) (short)32759)), ((-2147483647 - 1)))) >= (((/* implicit */int) ((var_12) < (var_6)))))) ? (var_12) : (((252105589) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)29240))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            arr_28 [i_0] [i_7] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned char)21)) & (-6))) : (((/* implicit */int) var_13)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_7] [10])) ? (var_3) : (((/* implicit */int) var_13))))))))));
            arr_29 [i_0] [i_7] [(unsigned char)3] = ((((/* implicit */int) (!(((/* implicit */_Bool) 32760))))) & (((int) var_18)));
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                arr_34 [15] [i_7] [i_7] = ((/* implicit */short) ((var_6) % (((int) ((((-1) + (2147483647))) << (((((/* implicit */int) (short)675)) - (675))))))));
                var_26 ^= var_7;
            }
        }
        arr_35 [i_0] = (-(((((/* implicit */_Bool) min((var_4), (((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */int) ((var_4) <= (((/* implicit */int) var_14))))) : ((-(((/* implicit */int) (short)6120)))))));
        arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
        arr_37 [i_0] [i_0] = ((/* implicit */short) var_4);
    }
    var_27 = ((/* implicit */short) (+(((/* implicit */int) (short)0))));
    var_28 = ((/* implicit */int) var_16);
}
