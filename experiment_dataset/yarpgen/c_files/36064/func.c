/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36064
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */int) var_13);
        arr_3 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) (short)(-32767 - 1))))) : (var_7)));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) arr_5 [i_1] [i_1]))))), (((((/* implicit */int) arr_5 [i_1] [i_1])) - (((/* implicit */int) arr_5 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_2] [i_2]));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((arr_12 [i_1]) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32780))) - (12))))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
                    arr_14 [i_1] [(signed char)13] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32748)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_5 [i_1] [i_3])))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)-32765), (((/* implicit */short) arr_8 [i_1]))))) > (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))))));
    }
    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4] [i_4])) ? (arr_12 [i_4 + 2]) : (arr_12 [i_4 + 1])))), (arr_1 [i_4])));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (arr_12 [i_4 - 1])))) : (1603998353327258111ULL)));
        var_25 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (short)-32742)) : (((/* implicit */int) (signed char)7)))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_4 + 2] [i_4 + 1])) != (((/* implicit */int) arr_4 [1ULL] [i_4 + 2])))))));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4 - 2])) ? (var_4) : (((/* implicit */int) var_2))))) : ((-(((var_9) >> (((arr_0 [i_4] [i_4]) - (1263228703)))))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_26 [i_6 - 1] [i_5 + 1] [i_4 + 2] [i_4]);
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_15)) - (141)))));
                        var_28 = ((/* implicit */unsigned int) (signed char)88);
                        var_29 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_7 + 1] [i_5] [i_6 - 1] [i_5 + 1]))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 1; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            arr_33 [i_8] [i_5] [(unsigned char)9] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_31 [i_4 - 2] [i_5 - 2] [i_6 - 1] [(signed char)9] [1LL] [i_8 + 1]), (arr_31 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483646)) ? (var_14) : (var_16)))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_18)))))) : (((arr_11 [i_8] [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) arr_30 [i_8 - 2] [i_5] [i_8] [(unsigned char)2] [(unsigned char)2] [i_5] [i_4 + 1])) : (-2147483647)))));
                            var_30 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_4] [(unsigned char)5] [i_6] [i_8] [i_8]))) : (arr_1 [(short)7]))) / (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) var_13)) : (var_6)))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)4]))) | (var_14))), (((/* implicit */unsigned long long int) ((arr_13 [(unsigned short)8] [i_5] [(unsigned char)5] [i_5]) / (((/* implicit */int) var_5)))))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) (unsigned short)60526)) : (arr_6 [i_6 + 2] [i_5 - 1])))) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (arr_0 [i_9] [i_9])))));
                        }
                        for (int i_10 = 1; i_10 < 11; i_10 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_4 - 1]), (arr_9 [i_5 - 1]))))) != (((((((/* implicit */int) var_10)) != (var_17))) ? (((/* implicit */unsigned long long int) var_3)) : (16965879575813214933ULL)))));
                            var_33 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                        }
                        var_34 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) var_14)));
                    }
                    var_35 = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_4]), (((/* implicit */unsigned long long int) arr_31 [i_4] [7LL] [i_5] [7LL] [7LL] [i_6]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) ^ (arr_12 [i_4]))))))), (max(((signed char)92), (((/* implicit */signed char) ((arr_1 [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                }
            } 
        } 
    }
    var_36 &= ((/* implicit */signed char) ((unsigned int) (-(var_14))));
    var_37 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (var_16)));
    var_38 = ((/* implicit */unsigned int) var_1);
    var_39 = ((/* implicit */unsigned char) min((var_39), (var_18)));
}
