/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40209
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
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((8848599295512819354ULL), (((/* implicit */unsigned long long int) -377316407))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */short) (signed char)-121)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))))), (max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned char) var_15))))), (((((/* implicit */_Bool) 602278829)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                var_20 ^= ((/* implicit */long long int) var_9);
            }
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                arr_11 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) var_1)), (min((((/* implicit */int) arr_5 [i_0])), (-602278841))))) : ((+(((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) (((+(min((var_6), (var_6))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            var_22 = ((/* implicit */short) (-((~(((/* implicit */int) max((var_11), (((/* implicit */short) var_7)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((int) ((short) (signed char)-17))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_17 [i_1 - 1] [i_1 - 1]), (arr_17 [i_1 - 1] [i_1 - 1]))))) - (((((/* implicit */unsigned long long int) -602278847)) * (var_12)))));
                    var_25 = ((/* implicit */int) (~((~(((8848599295512819340ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))))))));
                    var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_10))))), ((unsigned short)13358)))), (((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1])) ? (max((9598144778196732262ULL), (((/* implicit */unsigned long long int) var_14)))) : (min((var_6), (arr_14 [i_0] [i_1 - 1] [i_6] [i_1 - 1] [i_6])))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_27 = ((/* implicit */short) ((long long int) ((unsigned int) var_6)));
                    var_28 = ((/* implicit */unsigned int) var_7);
                }
                for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    var_29 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (-602278834)))) | (max((var_13), (((/* implicit */unsigned long long int) var_15))))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (((~(((/* implicit */int) max((var_9), (((/* implicit */short) var_7))))))) | (((/* implicit */int) ((signed char) arr_16 [i_0] [i_8] [i_3 - 1] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3 - 1]))))))));
                }
                var_32 = ((/* implicit */short) (signed char)98);
            }
            for (short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_33 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))) % (var_13))));
                arr_28 [i_9] [i_1] [13U] [i_0] |= var_0;
                var_34 &= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_13 [i_1] [i_1])))))), ((-(((/* implicit */int) (short)-19100))))));
            }
            arr_29 [i_0] [i_1] [i_1 - 1] = var_7;
            var_35 = ((/* implicit */int) 10146401154640781984ULL);
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (signed char i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                {
                    var_36 |= ((/* implicit */short) (((+(18446744073709551609ULL))) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) 602278873))), (max((((/* implicit */int) var_0)), (arr_4 [i_0] [i_10] [i_11]))))))));
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? ((-(arr_34 [i_0] [i_0] [i_10] [i_11 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) (signed char)115))))))))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_10] [i_11 - 1])) ? (arr_3 [i_11] [i_11 + 1] [i_11]) : (arr_3 [i_0] [i_0] [i_11])))));
                    arr_36 [i_11] = ((/* implicit */unsigned int) min(((-(((((/* implicit */int) (short)-5532)) + (((/* implicit */int) (signed char)105)))))), (max((((((/* implicit */int) (short)22977)) ^ (((/* implicit */int) var_5)))), ((-(((/* implicit */int) (signed char)115))))))));
                    var_38 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_23 [i_0] [(_Bool)1] [i_10] [i_11 + 2])))))) / ((~(var_13))))), (((/* implicit */unsigned long long int) var_5))));
                }
            } 
        } 
        var_39 -= ((/* implicit */short) var_13);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        arr_39 [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9741122868863834824ULL)) ? (((/* implicit */int) (short)-16533)) : (((/* implicit */int) var_14))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (11622422765928747386ULL)))));
        var_40 &= var_15;
        /* LoopSeq 2 */
        for (short i_13 = 2; i_13 < 14; i_13 += 2) 
        {
            arr_42 [i_12] [i_13 - 1] = ((/* implicit */unsigned long long int) var_5);
            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (6033327614061177639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13 - 2])))));
            var_42 = ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_13 + 1]))));
        }
        for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            arr_45 [i_12] = ((/* implicit */unsigned long long int) (short)-5537);
            arr_46 [i_12] [i_12] [(unsigned short)10] = ((/* implicit */_Bool) var_14);
        }
    }
}
