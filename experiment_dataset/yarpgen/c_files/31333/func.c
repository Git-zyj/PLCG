/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31333
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
    var_13 &= var_11;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned short i_4 = 1; i_4 < 6; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)128)), (var_7)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)14))))) / (arr_8 [i_0] [i_1] [i_1 + 3] [i_3])))));
                            arr_12 [i_0] [i_4] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (unsigned short)65521)), (16U)))));
                            var_15 += ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_4 + 3] [i_4] [i_4])))));
                            var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -1LL)) ? (6118994401187029591ULL) : (6118994401187029568ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_5 [(unsigned short)2] [(unsigned short)2] [i_0 - 1]))))))));
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned long long int) max((4294967278U), ((-(((unsigned int) var_4))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)9])) == (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
                    var_19 += ((/* implicit */signed char) (((-(1244053813))) != (((/* implicit */int) arr_7 [7U] [i_5] [i_6]))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 - 1])) ? (((/* implicit */int) arr_14 [i_0 - 1])) : (((/* implicit */int) (signed char)-20)))))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) 7904480761679072541LL);
                        arr_25 [i_0] [i_9] [i_6] [i_8 - 1] [i_9] = ((/* implicit */long long int) (+(arr_8 [i_0] [i_0] [i_5] [3U])));
                        var_22 = ((/* implicit */int) ((arr_3 [i_8 - 1] [i_0 - 1]) || (((/* implicit */_Bool) arr_2 [i_0 + 1]))));
                    }
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0])) == (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_8 - 1]))));
                    arr_26 [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */long long int) arr_4 [i_0] [i_5] [i_6]);
                }
                var_24 += ((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1]);
                var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (short)-4039))));
                var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) var_4))))));
                var_27 = ((/* implicit */short) var_10);
            }
        }
        arr_27 [i_0] = ((int) arr_11 [i_0]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (unsigned short i_11 = 1; i_11 < 6; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    {
                        var_28 *= ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_0 [1LL])))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) var_3));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) % (1487275121U))))));
                        var_30 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-106))))) : (((((/* implicit */_Bool) 0LL)) ? (26954547472299690ULL) : (((/* implicit */unsigned long long int) arr_2 [i_10])))))), (((/* implicit */unsigned long long int) max(((short)-9950), ((short)-15))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_13 = 1; i_13 < 9; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_17 [i_0] [(_Bool)0]))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)48626)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (var_2)))) / (min((arr_33 [i_13]), (4197115607U))))))));
                    }
                } 
            } 
        } 
        var_33 *= min((max((((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])), ((unsigned short)48626))), (((/* implicit */unsigned short) ((var_9) && (((/* implicit */_Bool) ((((-9223372036854775782LL) + (9223372036854775807LL))) << (((4194272U) - (4194272U))))))))));
    }
}
