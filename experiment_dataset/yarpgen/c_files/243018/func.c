/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243018
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
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) : (var_7))), (((/* implicit */long long int) var_1)))))));
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned short)65535)) ^ ((-(((/* implicit */int) var_3))))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (((~(min((((/* implicit */unsigned int) var_6)), (var_0))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751))))))));
                    arr_10 [i_0] [i_1 + 2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) (-(max((((/* implicit */long long int) (short)32753)), (var_2))))));
                    arr_11 [15LL] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_8);
                }
                /* vectorizable */
                for (signed char i_3 = 4; i_3 < 15; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((signed char) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                                var_17 -= ((/* implicit */unsigned char) (_Bool)0);
                                arr_19 [(signed char)2] [i_5] [i_3] [i_4] [10] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 3] [i_3 - 1] [i_4]))) > (arr_7 [i_1 - 1] [i_3 + 2] [(signed char)9] [i_3 + 2])));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3]))))) && (((/* implicit */_Bool) var_10))));
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((-8026298087982452446LL) == (var_2))))) > ((-(4089050171U)))));
                    arr_21 [i_3 - 1] = ((/* implicit */_Bool) arr_18 [(_Bool)1] [i_3 - 3] [12U] [i_1 - 2] [(_Bool)1]);
                }
                for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) -1);
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_27 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) min((min((arr_6 [(short)10] [i_1 + 1] [(unsigned char)13] [i_7]), (((/* implicit */short) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) (short)-4425)))))))), ((short)-14459)));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((((((((/* implicit */int) arr_6 [i_0] [i_1] [i_6] [(short)12])) | (((/* implicit */int) arr_5 [i_0] [(signed char)5] [i_7])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_5 [i_7] [i_0] [i_0])) ? (576460752286646272LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) - (576460752286646272LL))))))))));
                    }
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        arr_31 [i_6] [(short)14] [i_6] [(unsigned char)15] = ((/* implicit */long long int) (~((~(((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_8)))))))));
                        arr_32 [i_0] [i_1] [i_6] [i_6] [i_8 - 1] = ((/* implicit */unsigned long long int) arr_0 [i_1 - 2]);
                    }
                    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) arr_23 [i_0] [i_1 + 1] [i_6]))), (max((arr_6 [i_6] [i_6] [7] [i_6]), (((/* implicit */short) (_Bool)1))))))) && ((!(arr_16 [(_Bool)1] [i_1 - 1])))));
                    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_0])), (var_4)))) ? ((+(((/* implicit */int) arr_22 [i_6] [(_Bool)1] [(_Bool)1] [i_0])))) : (((/* implicit */int) arr_18 [i_0] [i_1] [(unsigned char)0] [(unsigned short)14] [8ULL]))));
                    var_23 &= ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [(short)10])) ? (var_10) : (((/* implicit */long long int) arr_13 [i_0])))), (((/* implicit */long long int) arr_17 [i_0] [i_1 + 1] [i_6] [i_1 - 1] [i_0])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)25400))))) < (max((var_0), (((/* implicit */unsigned int) arr_6 [11ULL] [i_1 + 1] [i_6] [(signed char)14])))))))));
                }
                for (signed char i_9 = 4; i_9 < 16; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), ((-((-(((/* implicit */int) arr_41 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_10] [i_11]))))))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */int) max((arr_41 [i_1 - 1] [i_1] [i_1] [i_1 - 3] [(short)5]), (((/* implicit */unsigned short) var_9))))) >= (((((/* implicit */int) arr_41 [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 3] [i_10])) + (((/* implicit */int) arr_16 [i_9] [i_1 - 3]))))))));
                                var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)28))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((min((var_4), (var_7))), (((((/* implicit */_Bool) arr_25 [i_11] [i_10] [i_9 - 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_9 - 2] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                    var_28 = (+(((/* implicit */int) min((((/* implicit */short) ((var_9) && (var_9)))), (min(((short)17023), (arr_4 [i_0])))))));
                }
                arr_42 [i_0] [i_1 + 2] [(signed char)16] = ((/* implicit */unsigned char) arr_14 [i_0] [(_Bool)0]);
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) ((var_10) < (var_4)))), (var_2))));
    var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (max((var_7), (var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-6627))))))));
}
