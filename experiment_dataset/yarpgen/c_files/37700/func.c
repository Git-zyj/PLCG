/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37700
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
    var_15 -= ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_2)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_0 [i_0 - 1])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) ((18143356531667894418ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46604)))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_13 [i_0] [(signed char)2] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((((long long int) (signed char)69)) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3402739550095079854LL))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 1])) >= (((/* implicit */int) arr_0 [i_0 - 1]))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_4 [i_1])) < (((303387542041657198ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_4 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_3 [i_4 + 2] [i_0 - 1])));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_4] [i_0])) == ((-(((/* implicit */int) (unsigned char)255)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_19 [i_1] [(short)10] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_10 [i_0 - 1]))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_10 [i_4]))));
                            var_23 ^= ((/* implicit */unsigned short) arr_9 [i_2] [i_2] [i_2] [i_0]);
                            var_24 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-15724))));
                        }
                    }
                    for (signed char i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        arr_24 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */signed char) arr_5 [i_1]);
                        var_25 = ((/* implicit */unsigned char) 9717284639472622765ULL);
                        arr_25 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */signed char) (short)15723);
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        arr_28 [i_1] [i_1] [i_2] [i_7] = ((signed char) var_4);
                        var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (arr_11 [i_7] [i_2] [i_2] [(short)18] [i_1] [i_0])))));
                        arr_29 [i_0] [i_1] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (short)-15724))));
                    }
                    arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (short i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    {
                        arr_40 [i_0] [i_8] [i_8] [i_10] = ((/* implicit */_Bool) arr_23 [i_0 + 1] [i_10 + 2] [i_10 + 2] [i_10 - 2]);
                        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)9))))) - ((~(var_10)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_26 [i_11] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (min((248776174U), (((/* implicit */unsigned int) var_0))))))) ? (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2774))) & (var_11)))) : (((((/* implicit */_Bool) (-(arr_9 [i_11] [i_11] [i_11] [i_11])))) ? (((var_13) ? (((/* implicit */long long int) var_11)) : (arr_3 [i_11] [i_11]))) : (arr_18 [i_11] [(signed char)18] [i_11] [i_11] [i_11])))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_48 [i_13] [i_13] = ((/* implicit */short) (unsigned char)1);
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 4; i_15 < 13; i_15 += 1) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_16 [i_13 - 1] [i_11] [i_15 - 4])) ? (arr_16 [i_13 - 1] [i_14] [i_15 - 4]) : (arr_16 [i_13 - 1] [i_12] [i_15 - 3]))));
                                var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_12])) : (((/* implicit */int) var_12)))))))), (max((((/* implicit */long long int) var_0)), (arr_4 [i_11])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
