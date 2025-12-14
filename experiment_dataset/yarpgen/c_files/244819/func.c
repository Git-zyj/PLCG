/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244819
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
    var_17 = ((/* implicit */short) 554153860399104LL);
    var_18 = ((/* implicit */unsigned short) ((long long int) max(((~(((/* implicit */int) var_16)))), (((/* implicit */int) var_6)))));
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = max((((((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0])))) ? (max((arr_0 [i_0]), (((/* implicit */long long int) (short)22320)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) var_9)))))))));
        var_21 ^= ((/* implicit */short) var_4);
        arr_4 [i_0] = max((max((arr_3 [i_0]), (arr_3 [i_0]))), (max((arr_3 [i_0]), (arr_3 [i_0]))));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (4056978199U))) : (((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (arr_7 [i_1]))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : (max((((/* implicit */unsigned int) (unsigned short)27422)), (var_15))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_11 [i_1 + 1] [i_3] [i_4])))), (((/* implicit */int) min(((short)19657), ((short)(-32767 - 1)))))))))))));
                    var_24 = ((((/* implicit */_Bool) max((var_11), (min(((unsigned short)27426), (arr_13 [i_1] [i_2] [i_3] [i_4] [0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_2]))) / (-554153860399104LL)))))) : (-554153860399093LL));
                    var_25 = ((/* implicit */unsigned long long int) max((arr_11 [i_1 + 1] [i_1] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_1 - 1] [i_2] [9LL])) >= (((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_2])))))));
                    var_26 = ((/* implicit */int) max((max((((((/* implicit */_Bool) -554153860399104LL)) ? (2605907685U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2]))))), (((/* implicit */unsigned int) (unsigned short)52606)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)1020)), ((unsigned short)39651))))));
                    arr_15 [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [i_3])))) ? (((/* implicit */int) arr_8 [i_3] [i_1])) : (((/* implicit */int) max(((unsigned short)27426), (var_5))))))), ((((!(((/* implicit */_Bool) var_11)))) ? ((+(arr_12 [i_4] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_14 [i_1] [i_4]))))))))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_27 *= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_12)) ? (-554153860399105LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27425))))));
                    var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_1])) ? (554153860399090LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2])))))));
                }
                var_29 -= ((/* implicit */long long int) max(((~(max((var_1), (((/* implicit */unsigned int) arr_9 [6] [i_1])))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [i_3] [9] [i_1] [i_1])), (((((/* implicit */_Bool) -1399748563915550968LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))));
            }
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_20 [i_6] [i_2] [i_1] = ((/* implicit */int) arr_17 [i_1 - 1] [(short)4] [i_6] [i_6]);
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (arr_8 [i_2] [i_6])))) ? (max((9223372036854775798LL), (554153860399104LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [9LL] [i_1 + 1])))))) ? ((~(max((6182694527543664120LL), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1])))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1 + 1])) ? (-845389943) : (((/* implicit */int) arr_9 [i_6] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_1 - 1])) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1])))) : ((~(((/* implicit */int) (unsigned short)65529))))));
            }
            /* vectorizable */
            for (short i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                var_32 = ((/* implicit */long long int) arr_6 [i_1] [i_2]);
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_33 |= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8] [i_7]))) % (arr_0 [i_2])))) ? (((((/* implicit */_Bool) 1106903221516291913LL)) ? (9223372036854775798LL) : (arr_0 [i_1]))) : (arr_16 [i_7 - 1] [i_7 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]));
                    var_34 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_2] [i_2] [i_8]))));
                }
                for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    arr_31 [i_2] |= ((/* implicit */unsigned short) ((short) arr_28 [i_1] [i_2] [i_7] [i_9]));
                    arr_32 [i_2] [i_2] [i_7] [i_2] = arr_26 [i_1] [i_7] [i_7] [i_7];
                    var_35 = ((/* implicit */short) arr_23 [i_7] [i_1] [i_1 - 2] [i_7 + 1]);
                }
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (-8001639508180855916LL) : (((/* implicit */long long int) arr_7 [i_1]))))) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1 - 2] [i_7])) : (arr_7 [i_1 - 2])));
                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (arr_28 [i_7 - 1] [i_7] [i_7] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1 + 1] [i_1] [i_1 - 1] [i_7])))));
            }
            var_38 = ((/* implicit */unsigned long long int) 2147483645);
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            arr_37 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_36 [i_1 - 2] [i_10] [i_10])) ? (arr_33 [i_1 - 2] [i_10] [i_1 - 2]) : (arr_33 [i_1 - 2] [i_10] [i_10])))));
            arr_38 [i_10] [i_1] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((min((arr_16 [i_1 + 1] [i_10] [i_1] [(short)1] [i_1]), (-8001639508180855916LL))), (min((var_10), (((/* implicit */long long int) arr_2 [i_1]))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_26 [i_1] [0] [i_1] [i_1]))))), (max((((/* implicit */unsigned long long int) arr_16 [i_10] [(short)3] [i_1] [i_1] [i_1])), (var_2)))))));
        }
        var_39 ^= ((/* implicit */unsigned short) (+(arr_7 [i_1 + 1])));
    }
}
