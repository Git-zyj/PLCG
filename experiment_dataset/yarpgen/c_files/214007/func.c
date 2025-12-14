/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214007
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((((/* implicit */_Bool) 2147483620)) ? (((/* implicit */int) var_0)) : (-1554463951)))))) ? (((((/* implicit */_Bool) ((int) (signed char)-24))) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 2])) : (((((/* implicit */_Bool) (signed char)23)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) / ((+(var_12))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2])) == (2147483614)))) - (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
                            var_18 -= ((/* implicit */_Bool) var_5);
                            var_19 = ((/* implicit */int) (~(arr_5 [(_Bool)1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_20 = (~(((/* implicit */int) ((unsigned short) max(((unsigned char)249), (((/* implicit */unsigned char) arr_1 [i_4])))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))) ? (((((/* implicit */_Bool) (unsigned short)64502)) ? (((((/* implicit */long long int) ((/* implicit */int) var_16))) / (9223372036854775798LL))) : (((/* implicit */long long int) 511U)))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                            var_22 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-24)), (1554463950)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_24 ^= ((/* implicit */int) (signed char)-13);
                    var_25 = ((/* implicit */unsigned char) var_8);
                    var_26 = ((/* implicit */short) arr_3 [i_6] [i_7]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */signed char) arr_21 [i_6 + 1] [i_9] [i_6 + 1] [i_6 + 1]);
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6] [i_6 - 1] [i_6])) ? (arr_18 [i_6] [i_6 - 1] [i_6 - 1]) : (arr_18 [i_9] [i_6 - 1] [i_9])));
        }
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
        {
            var_29 *= ((/* implicit */int) arr_17 [i_6 + 1]);
            arr_28 [i_6] [i_10] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [2U])) ? (((/* implicit */int) ((var_6) < (((/* implicit */int) arr_27 [i_6] [i_6]))))) : (((/* implicit */int) arr_15 [i_6] [i_6] [12]))));
            var_30 = ((/* implicit */int) 861129792U);
        }
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_7))));
            arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_15);
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_20 [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_7 [i_6 - 1])));
    }
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        for (unsigned char i_13 = 1; i_13 < 12; i_13 += 2) 
        {
            for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                {
                    arr_40 [i_14] [i_14] [i_12] [i_12] = ((int) max((arr_12 [i_12] [i_13] [i_13 - 1] [i_14]), (((/* implicit */unsigned char) arr_22 [i_12] [i_13 + 1] [i_12]))));
                    var_33 = ((/* implicit */short) var_13);
                    var_34 *= ((/* implicit */unsigned char) ((max((arr_22 [i_13 + 1] [i_13 + 1] [i_13 + 1]), (arr_22 [i_13 - 1] [(signed char)7] [i_13]))) ? (((/* implicit */int) arr_22 [i_13 + 1] [i_13] [i_12])) : (((/* implicit */int) arr_22 [i_13 + 1] [i_13 + 1] [i_13 + 1]))));
                    var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_12] [i_13] [i_14])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_12]))))) : (arr_3 [i_12] [(unsigned char)0]))))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)46)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4625))))) < (((/* implicit */unsigned long long int) var_8)))))) / (var_2)));
}
