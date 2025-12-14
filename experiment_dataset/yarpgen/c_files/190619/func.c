/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190619
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
    var_15 = ((/* implicit */unsigned long long int) var_10);
    var_16 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 |= ((unsigned char) arr_2 [i_0]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16376U)) ? (((/* implicit */long long int) 4294950921U)) : (var_4)))) ? (16396U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (16372U) : (arr_2 [i_0])))), (((((/* implicit */_Bool) 16359U)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0]))))) : (((/* implicit */long long int) (-(4294950916U))))));
        var_19 = ((/* implicit */unsigned long long int) arr_3 [0LL]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) arr_11 [i_1] [i_2]);
                        arr_14 [i_4] [i_3] [i_2] [(unsigned char)10] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 4294950923U)) : (var_3)))));
                        var_21 = ((((/* implicit */long long int) arr_1 [i_1] [i_2])) % ((-9223372036854775807LL - 1LL)));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_19 [i_1] [(signed char)1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) 17ULL)))));
                            arr_20 [i_1] [11U] [i_1] [(unsigned char)7] [i_5] [i_5] [i_4] = ((/* implicit */int) ((short) var_12));
                        }
                        for (unsigned int i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) (signed char)-1);
                            arr_24 [i_1] [i_1] [i_1] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */short) var_8);
                            arr_25 [(short)11] [(short)11] [i_3] [(signed char)0] = ((/* implicit */int) ((unsigned long long int) arr_4 [i_1]));
                            arr_26 [i_4] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_30 [(unsigned char)5] [i_2] [i_3] [(unsigned char)5] [i_2] = ((/* implicit */unsigned char) var_14);
                        /* LoopSeq 1 */
                        for (signed char i_8 = 4; i_8 < 11; i_8 += 1) 
                        {
                            arr_33 [i_1] [i_8] [i_3] [i_8] [i_8] = ((/* implicit */unsigned char) -9223372036854775805LL);
                            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 16385U)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (signed char)-50))));
                        }
                    }
                    for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_24 *= var_0;
                        arr_37 [i_1] = ((/* implicit */unsigned char) ((unsigned short) (+(var_3))));
                    }
                    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */int) (signed char)-26)) / (((/* implicit */int) arr_28 [i_1] [i_1] [i_2] [i_2] [i_3] [3LL]))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_26 += ((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)-23)));
                        var_27 = ((/* implicit */unsigned char) ((unsigned long long int) 4294950923U));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_27 [i_11] [i_3] [i_2] [i_1])));
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) (unsigned char)144);
        arr_45 [i_1] [i_1] = 9693979885705565203ULL;
    }
}
