/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202706
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
    var_11 = ((long long int) -1220220487011380332LL);
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])) % (((unsigned long long int) (signed char)64))));
            var_14 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned long long int) ((int) arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (+(-1220220487011380332LL))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_15 = ((/* implicit */long long int) min((((max((var_7), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_2])))) != (((/* implicit */long long int) (+(2325906652U)))))), ((!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (signed char)74)))))))));
                /* LoopSeq 3 */
                for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    var_16 = min((((long long int) arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])), (((var_8) % (((/* implicit */long long int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 1])))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        var_17 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (+(arr_10 [i_0] [12])))) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) ((signed char) -1147273847111180695LL))))));
                        var_18 = var_4;
                        var_19 = ((/* implicit */int) 1147273847111180694LL);
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_0] [i_0])))))));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_14 [i_0] [i_3] [i_0] = ((/* implicit */long long int) (-(arr_0 [i_3 + 1] [i_3 + 1])));
                        var_21 = ((/* implicit */int) (signed char)124);
                        var_22 = ((/* implicit */unsigned int) min(((~(max((arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_3 + 1] [i_3 + 1])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_5] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])))))));
                        arr_15 [i_5] [i_1] [i_2] [i_5] [i_5] &= ((/* implicit */signed char) min((((((((/* implicit */int) (signed char)95)) <= (((/* implicit */int) (signed char)0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5] [i_0] [i_0] [i_5])))))) : ((~(var_3))))), (((max((0LL), (((/* implicit */long long int) 192405042U)))) ^ (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) var_0))))))));
                    }
                }
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    var_23 &= min((((((/* implicit */_Bool) -5892819687219672749LL)) ? (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) 1732759810)) : (var_10))) : (var_10))), (((/* implicit */long long int) (signed char)70)));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2] [i_0]))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((1220220487011380331LL) > (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))) : (min((((((/* implicit */_Bool) arr_0 [i_7] [i_6])) ? (8229532852996704580LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) arr_1 [i_6]))))));
                        arr_20 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_19 [i_0] [i_0] [i_2] [i_6] [i_0] [i_0])))), ((((~(-2302703938948652939LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
                    }
                    for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) (-((-(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0] [i_0])) != (arr_10 [i_0] [i_0]))))))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_18 [i_8] [i_8 - 2] [i_0] [i_0] [i_0] [i_8] [i_8]), (var_6)))) ? ((~(var_7))) : (var_4))))));
                        var_28 = ((/* implicit */signed char) -1122041202);
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_26 [i_0] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_1)))));
                        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_2] [i_6] [i_2] [i_1] [i_0]))));
                        var_30 = ((/* implicit */unsigned long long int) arr_3 [i_6 + 1]);
                    }
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) 1147273847111180694LL)) ? (((/* implicit */int) (((+(-198514550))) != (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2] [i_10] [i_1])))))))) : (((/* implicit */int) arr_12 [i_10] [i_10] [i_0] [i_0] [i_10])))))));
                        var_32 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_0] [i_10] [i_10] [i_0] [i_11 - 1]))))) ? (min(((-(var_10))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_11 - 1] [i_10] [i_11])) >> (((-144920898) + (144920901)))))));
                    }
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_34 [i_0] [i_10] = ((/* implicit */unsigned int) 144112989052600320LL);
                        var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_19 [i_0] [i_0] [i_2] [i_0] [i_10] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 144920898))))))))));
                        var_34 = (-(arr_2 [i_0] [i_2] [i_10]));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_29 [i_1] [i_2] [i_12]))) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_29 [i_2] [i_0] [i_0]) + (((/* implicit */long long int) var_0))))) ? (max((-1147273847111180694LL), (-16LL))) : (min((var_3), (var_1))))))));
                    }
                    arr_35 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_10])))))));
                    arr_36 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_10] [i_2] [i_0]), (var_3)))) ? ((~(arr_21 [i_0] [i_1] [i_2] [i_10] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_10]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_23 [i_0] [i_0] [i_2] [i_10])));
                }
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((~(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) ? (((int) 405978168)) : (((/* implicit */int) ((min((var_3), (((/* implicit */long long int) var_5)))) < (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (var_7)))))))))));
                arr_37 [i_0] = ((/* implicit */signed char) 6309124696426877750LL);
                var_37 = ((/* implicit */unsigned long long int) ((var_0) | (3871683515U)));
            }
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(arr_6 [i_0] [i_1] [i_1])));
                var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (~(arr_33 [i_0] [i_0] [i_0] [i_0] [i_13])))) ^ (((((/* implicit */_Bool) 7150183196171835021LL)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_1] [i_0]))))))))));
            }
        }
        var_39 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_6)), ((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_0))));
    }
    for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
    {
        arr_44 [i_14] = (((+(arr_42 [i_14]))) - (((((/* implicit */_Bool) arr_42 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-11LL))));
        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((signed char) min(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))))))));
        arr_45 [i_14] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_33 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (arr_2 [i_14] [i_14] [i_14]) : (((/* implicit */int) arr_39 [i_14] [i_14] [i_14] [i_14]))))));
    }
    for (int i_15 = 3; i_15 < 19; i_15 += 1) 
    {
        var_41 &= ((/* implicit */unsigned int) var_1);
        var_42 = (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1155899170)), (8589934591ULL)))) || (((/* implicit */_Bool) arr_47 [i_15 - 2]))))));
        var_43 = ((/* implicit */signed char) 0ULL);
        /* LoopSeq 2 */
        for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            var_44 = arr_47 [i_16];
            arr_50 [i_16] = ((/* implicit */unsigned long long int) (signed char)6);
        }
        for (int i_17 = 1; i_17 < 20; i_17 += 1) 
        {
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_17 - 1] [i_17])) ? (var_1) : (arr_48 [i_17])));
            arr_53 [i_17] [i_17] = ((/* implicit */unsigned int) var_4);
            arr_54 [i_15] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))) ? ((-(arr_52 [i_15 + 2] [i_17]))) : (((/* implicit */int) var_9))));
            var_46 *= ((/* implicit */unsigned int) var_1);
        }
        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (~(1147273847111180694LL))))));
    }
}
