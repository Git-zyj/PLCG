/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52475
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) max((arr_0 [i_0]), (((/* implicit */signed char) (_Bool)0))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (var_16)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) ^ (((/* implicit */int) ((3813553136174261313ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            arr_6 [i_1 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_3 [9LL] [i_1])) : (((/* implicit */int) var_7))))) ^ (var_1)))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [2ULL]))) : (-16LL)))))) ? ((~(((/* implicit */int) arr_1 [i_1 - 1])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -4915194979351602868LL)))))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] [i_2] [i_4] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) (unsigned short)140)) ? (((/* implicit */int) (unsigned short)58606)) : (((/* implicit */int) arr_13 [i_2] [i_2 + 2])))))), (((/* implicit */int) ((signed char) var_11)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_18 [i_3] [i_4] [i_3] [i_2] [(signed char)3] [i_0] [i_0]))));
                            var_21 = ((/* implicit */long long int) (-2147483647 - 1));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])) == ((~(((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                        }
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) arr_12 [(signed char)6] [i_2] [(signed char)6] [(signed char)6]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5716657797358019680ULL)) ? (((/* implicit */unsigned long long int) min((var_2), (-509803133)))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_25 = ((/* implicit */unsigned char) max(((signed char)-16), (((signed char) ((((/* implicit */_Bool) (signed char)-112)) && (((/* implicit */_Bool) 509803132)))))));
                        var_26 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)58721)) | (((/* implicit */int) (unsigned short)6922)))));
                    }
                } 
            } 
            arr_22 [i_0] [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_21 [(short)4] [(short)4] [i_2] [i_2] [i_2] [i_2] [i_2])), ((unsigned short)4058)))) ? (-509803133) : (((/* implicit */int) max(((unsigned short)58606), (((/* implicit */unsigned short) var_4))))))));
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            arr_25 [(signed char)3] = ((/* implicit */_Bool) (unsigned char)124);
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 8; i_9 += 4) 
                {
                    {
                        arr_32 [i_7] [i_8] [i_8] = (!(((/* implicit */_Bool) max((-509803133), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57846)))))))));
                        var_27 = arr_17 [i_9] [i_8] [i_8] [i_8] [i_7] [i_0];
                        var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) (unsigned short)61396)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9 + 1] [i_9 + 4] [i_9] [i_9 + 3]))) : (((((/* implicit */_Bool) arr_28 [i_9] [i_9 + 3] [i_9 + 2] [i_9 + 2])) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-6LL)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))));
                var_30 = (!(((/* implicit */_Bool) var_9)));
                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7448229997621426948LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_17 [(signed char)1] [i_10] [i_10] [i_7] [i_10] [i_0]))));
            }
        }
    }
    var_32 = ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (long long int i_11 = 1; i_11 < 23; i_11 += 1) 
    {
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (short i_13 = 1; i_13 < 24; i_13 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (-(-6124833259196494244LL))))) & ((((!(arr_38 [i_11]))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)9410)) : (((/* implicit */int) arr_41 [i_11] [i_11] [i_11])))) : ((~(((/* implicit */int) (signed char)43))))))));
                    var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_38 [i_11])), (var_0)))) ? (5597220329882077096LL) : (((long long int) (signed char)38)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */short) arr_41 [i_11] [i_12] [i_12])))))) & (((((/* implicit */_Bool) arr_41 [i_11] [i_12] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11 - 1] [(short)17]))) : (var_1))))))));
                }
            } 
        } 
    } 
}
