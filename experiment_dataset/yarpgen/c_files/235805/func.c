/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235805
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) != ((-((~(((/* implicit */int) var_8))))))));
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((short) (-(((/* implicit */int) var_3))))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_3)))), (max((arr_0 [i_0 + 1]), (((/* implicit */int) (_Bool)0))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_2] [(_Bool)1] [i_4] [i_1] [i_4]))) : (arr_13 [i_2] [i_1 - 1] [i_1 - 1] [i_1])));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_1 [i_1 - 1] [i_4])));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                        {
                            var_15 -= ((/* implicit */long long int) (+(210807933)));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((long long int) arr_9 [i_1 - 1] [i_1 - 1])))));
                            var_17 = ((/* implicit */signed char) (_Bool)0);
                        }
                        for (short i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 1987981918))));
                            var_18 = ((/* implicit */unsigned long long int) var_3);
                            var_19 = ((/* implicit */unsigned char) 1987981918);
                            var_20 = (-(((/* implicit */int) (_Bool)1)));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) 1987981918);
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_1] [i_7])))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (~(((arr_6 [i_1]) >> (((((/* implicit */int) (signed char)92)) - (88))))))))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) arr_3 [i_1]);
        }
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_9 = 3; i_9 < 15; i_9 += 2) 
            {
                arr_30 [i_1] [(unsigned char)1] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 3])) || (((/* implicit */_Bool) arr_25 [i_9 - 1])))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_29 [i_1] [i_8] [i_9 - 3])))));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (signed char)-71))))))))));
                arr_31 [i_1] [i_1] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((long long int) (signed char)82)))))));
            }
            for (short i_10 = 4; i_10 < 14; i_10 += 1) 
            {
                var_26 = max((((unsigned int) 15320592354071848281ULL)), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)80)) & (((/* implicit */int) max((((/* implicit */short) var_1)), (var_5))))))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (15320592354071848281ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1])))))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)62)) >> (((70368744177663LL) - (70368744177644LL)))))))))));
                    arr_37 [i_1] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10553722646228099720ULL)) ? (max((3196603885469408597LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)255)), (1987981918))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [(_Bool)0] [3U] [i_1 - 1] [i_10 + 1])) || ((!(((/* implicit */_Bool) (short)15216))))))) : (((((/* implicit */_Bool) var_7)) ? (268435455) : (((/* implicit */int) (signed char)-19))))));
                }
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) (~(max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_25 [i_1])))))))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((max((var_6), (((/* implicit */long long int) (unsigned char)255)))) & (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)70))) : (arr_34 [i_12] [i_8] [i_10] [i_12]))))) >> (((/* implicit */int) arr_42 [i_1] [(_Bool)1] [i_10] [i_12] [i_13])))))));
                            arr_43 [i_1] [i_8] [i_1] [i_12] [(_Bool)1] [i_13] = ((/* implicit */unsigned int) ((14133462430040400023ULL) >= (((/* implicit */unsigned long long int) max((max((-1LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) ((unsigned short) var_0))))))));
                            var_30 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 750171271)) ? (((/* implicit */int) (_Bool)1)) : (-1712152730))) : (((((/* implicit */int) arr_2 [i_10 - 3] [i_10 - 3])) >> (((/* implicit */int) (_Bool)1))))))), (var_2)));
                            arr_44 [i_1] [i_10] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 2081203732)) ? (((/* implicit */unsigned long long int) 658830544)) : (3126151719637703334ULL))) * (arr_15 [7ULL] [i_8] [i_8] [i_8] [i_8] [i_8]))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_33 [i_1]) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_1] [i_1] [13LL] [i_12] [i_12]))))) : ((~(-70368744177663LL)))))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((int) arr_18 [3U] [i_1 - 1] [i_1 - 1]))));
            var_32 = ((/* implicit */int) (!(var_3)));
            arr_45 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_8] [i_1 - 1] [i_8] [i_8] [i_1 - 1])) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_8] [i_1 - 1] [i_8] [i_1 - 1] [i_8])) : (-2081203711)))), (((var_6) & (((/* implicit */long long int) var_2))))));
            arr_46 [i_1] [i_8] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 1] [4] [i_1 - 1] [14U] [8U])) ? (5911180194767666928LL) : (((/* implicit */long long int) ((/* implicit */int) ((3448755520U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))))))), (70368744177672LL)));
        }
        for (int i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1))))))) : ((-(-1LL)))));
            var_34 = ((/* implicit */_Bool) (+(max((var_0), (((/* implicit */unsigned int) arr_7 [i_1 - 1]))))));
            var_35 = (_Bool)1;
            arr_50 [i_14] &= ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) != (max((((/* implicit */long long int) var_1)), (arr_36 [i_14] [6ULL] [(signed char)12] [i_14])))));
        }
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)-109)))))) == ((~(arr_13 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))))));
        var_37 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), ((~(var_2)))));
    }
    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((var_0) != (((/* implicit */unsigned int) (~(8191)))))) ? (((/* implicit */long long int) var_0)) : ((-(5911180194767666928LL))))))));
}
