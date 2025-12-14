/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31567
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
    var_13 &= ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-4))))), (var_9))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 7548893123733524404LL)) ? (var_0) : (((/* implicit */int) (signed char)3)))), (((/* implicit */int) arr_5 [i_0] [i_0])))) ^ (((((/* implicit */int) arr_2 [(unsigned short)6] [i_0])) - (((((/* implicit */int) (short)-15344)) & (((/* implicit */int) (signed char)-31))))))));
                    var_15 = ((/* implicit */short) max((((int) max((-226281256259650696LL), (((/* implicit */long long int) arr_0 [i_0] [i_1 + 2]))))), (((/* implicit */int) (((-(var_1))) >= (((/* implicit */int) arr_9 [i_0 + 1])))))));
                    arr_11 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */int) ((unsigned short) ((arr_7 [i_0 + 2] [i_1] [11] [i_1 - 1]) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [12ULL] [i_0])) : (((/* implicit */int) arr_10 [(short)11] [i_1] [i_2])))) : (((/* implicit */int) (short)-15348)))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_2 - 3])) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_2 - 3])) : (((/* implicit */int) arr_5 [i_1 + 2] [i_2 - 3]))))) ? (((((/* implicit */_Bool) 7548893123733524403LL)) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_2 - 3])) : (((/* implicit */int) arr_5 [i_1 + 2] [i_2 - 3])))) : (((/* implicit */int) arr_5 [i_1 + 2] [i_2 - 3]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                        var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(short)12] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)31312)) : (((/* implicit */int) (unsigned short)31319))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)17235)) < (((/* implicit */int) (signed char)-8))));
                        var_20 &= ((/* implicit */unsigned short) (signed char)-9);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7548893123733524431LL))))) : (((/* implicit */int) (short)27930))));
                        arr_19 [i_2] [(short)6] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_2])) ? (arr_18 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))));
                    }
                    for (unsigned char i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) (signed char)-21);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) (short)27906))), (min((var_9), (((/* implicit */unsigned int) arr_20 [i_1 - 1]))))))) ? (((((/* implicit */int) (signed char)-19)) | (min((((/* implicit */int) arr_26 [i_0] [i_1 - 1] [i_1 - 1] [11] [9ULL] [i_6])), (arr_13 [(short)2] [i_2 + 1] [(short)13] [(short)13]))))) : (((/* implicit */int) ((signed char) ((unsigned short) arr_3 [i_0] [i_0 + 2]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) arr_20 [i_0]);
                            var_25 |= ((/* implicit */unsigned long long int) ((unsigned short) arr_24 [i_0 - 2] [i_1 + 2] [i_2 - 2] [0] [0] [i_7]));
                        }
                        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5]))));
                    }
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_8] [i_1] [i_2] [i_0]), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_8]))) - (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_31 [i_0] [(unsigned short)3] [i_2] [1ULL]), (((/* implicit */short) arr_6 [i_2]))))))))) || (((/* implicit */_Bool) arr_20 [i_2]))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) arr_20 [i_0 + 2])) : (((/* implicit */int) var_4)))))) >> (((((/* implicit */int) (unsigned char)145)) - (128)))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_6))));
                        arr_32 [i_2] [0U] = ((/* implicit */signed char) (short)-15354);
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) max((((long long int) (~(((/* implicit */int) var_8))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-26489))))), (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
}
