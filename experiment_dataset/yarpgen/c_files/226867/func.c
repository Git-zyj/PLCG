/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226867
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 886368978)) ? (((/* implicit */int) (unsigned short)38760)) : (1725579004)));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1725579004)) ? (((1725579004) - (((/* implicit */int) ((unsigned short) var_7))))) : (((/* implicit */int) var_4)))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (((((/* implicit */_Bool) (unsigned short)10940)) ? (((/* implicit */unsigned long long int) -1725579025)) : (arr_6 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)33)))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */long long int) var_9);
    var_21 |= ((/* implicit */unsigned short) var_16);
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_16) ? (1725579014) : (((/* implicit */int) var_4)))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_5 [i_4 + 1]))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_0 [i_3] [i_5]))) < ((-(((/* implicit */int) var_7)))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 6; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)0)) ? (min((2066553513069358272LL), (((/* implicit */long long int) (unsigned short)38735)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))))))))));
                        var_25 = ((/* implicit */long long int) min((var_25), ((~(arr_14 [6LL] [6LL] [6LL])))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_26 = (~(arr_10 [i_2 - 1] [i_4 + 2] [i_7 - 1]));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_25 [i_4 + 2] [i_3] [i_7] [i_7 - 1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 1725578985)))))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((arr_5 [i_2 + 2]) + (((/* implicit */unsigned long long int) (+(var_9)))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 2; i_10 < 6; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) (signed char)45)))))))))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) -1437232872)) > (1520050061U))) ? ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_4 - 1])) : (((/* implicit */int) var_4)))))) : ((-(((/* implicit */int) ((short) arr_24 [(short)0] [i_3] [2] [(unsigned short)4] [i_10]))))))))));
                            arr_33 [i_10] [(_Bool)0] [(_Bool)0] [(signed char)6] &= ((/* implicit */signed char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38786))))))) << (((/* implicit */int) ((((long long int) var_8)) > (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_2] [i_3] [8LL] [i_10]))))))))));
                            var_32 ^= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 6; i_11 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) min((var_33), ((-(((/* implicit */int) arr_23 [4ULL] [0ULL] [i_3] [i_4 + 2] [i_11 + 1]))))));
                            var_34 = ((/* implicit */unsigned short) arr_20 [i_3] [i_4] [i_9] [i_11 - 2]);
                        }
                        var_35 += ((/* implicit */unsigned long long int) var_5);
                        arr_37 [i_2] [i_2] [i_4 - 1] [i_9] [i_4] [i_2] = arr_34 [i_4] [i_3] [i_2 + 2] [i_3] [i_9] [i_9] [i_4 - 1];
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (((+(arr_6 [i_3] [i_4 + 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38807))))))));
                    }
                }
            } 
        } 
    } 
}
