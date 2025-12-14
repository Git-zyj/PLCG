/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205203
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [(unsigned char)8] [i_1] [i_0] = ((/* implicit */short) min((max((var_3), (arr_3 [i_0]))), (((/* implicit */signed char) ((_Bool) min((((/* implicit */int) (_Bool)0)), (2039277753)))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) ((signed char) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) != (((long long int) var_7))))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((int) min((((/* implicit */long long int) arr_2 [i_2 - 1] [i_1])), (-5766412838472635757LL)))) - (((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]))))) : ((~(((/* implicit */int) arr_2 [i_0] [i_2]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_13 [(signed char)10] [(signed char)10] [(signed char)10] = ((/* implicit */_Bool) ((signed char) arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2]));
                        arr_14 [i_0] [i_0] [10LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25670))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_2] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7269769292217322660LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_15 [(unsigned short)0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_1] [(unsigned short)3] [i_2] [i_3]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((arr_11 [i_0] [i_1] [i_0] [i_3]) ? (((/* implicit */int) arr_12 [i_0] [6LL] [i_2] [i_3] [i_3] [i_0])) : (((/* implicit */int) var_1))))));
                        arr_16 [i_3] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) 5766412838472635738LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) + (((/* implicit */int) arr_2 [i_1] [i_0]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                arr_21 [i_4] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [10] [i_5]))))) ? (((/* implicit */int) min((var_11), ((_Bool)1)))) : (((/* implicit */int) (signed char)-100)))), (((/* implicit */int) ((unsigned char) (short)-9195)))));
                arr_22 [i_4] [i_5] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)9195)), (((((/* implicit */_Bool) (signed char)127)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-9209)))))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    arr_26 [i_5] = ((/* implicit */long long int) max((min(((~(((/* implicit */int) (short)9194)))), (((/* implicit */int) arr_19 [i_6] [8LL] [i_4])))), (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_23 [i_4] [i_5] [i_5] [i_6])) - (19064)))))));
                    arr_27 [(_Bool)1] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_19 [i_4] [i_5] [i_6])))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) + (((unsigned long long int) (unsigned short)55177))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6] [i_5] [i_8] [i_8] [(signed char)14] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_30 [i_8] [i_8] [(_Bool)1] [i_7 + 1] [i_5] [i_5] [i_4])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : (((long long int) var_4)))), (((/* implicit */long long int) arr_28 [i_5] [i_4]))));
                                arr_33 [i_4] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_28 [i_7 + 1] [i_7 + 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_28 [i_7 + 1] [i_7 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_28 [i_7 + 1] [i_7 + 1])))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-9195))) - ((-9223372036854775807LL - 1LL))))));
                                arr_34 [i_8] [i_4] [i_6] [i_4] [i_4] = (+((~(((long long int) var_2)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
