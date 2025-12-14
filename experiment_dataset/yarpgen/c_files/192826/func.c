/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192826
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
    var_14 = ((/* implicit */long long int) min((var_14), ((-(((((long long int) var_10)) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (-8735597276791629136LL)))))))));
    var_15 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) 3771896412U)), (min((var_9), (((/* implicit */long long int) 523070856U)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) (-(((int) arr_6 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (847209067U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((/* implicit */long long int) 3771896412U)) : (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_1 [i_0 - 2] [i_2]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [(_Bool)1])))) > (((/* implicit */int) ((unsigned char) var_12))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-24708)) - (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1]))) : (5296282095715180680LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3771896412U)) ? (((/* implicit */int) var_7)) : (var_3)))) ? (8710309280658989383LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_17 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [2U] [i_1] [i_0] [i_0] [(unsigned char)4] [i_1]))) : (var_2));
                        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0 + 1] [2U] [i_0 - 2]))));
                        arr_11 [(signed char)7] [i_1] [i_1] [i_0] [i_2] [(unsigned char)2] = arr_7 [i_0] [(_Bool)1] [i_1];
                    }
                    for (int i_4 = 3; i_4 < 10; i_4 += 2) 
                    {
                        arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1158548718U)) ? (-747898282374021644LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : ((-(((/* implicit */int) (_Bool)0))))));
                        var_19 = ((/* implicit */long long int) ((int) ((_Bool) var_10)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 3] [i_0] [(_Bool)1] [i_0 - 1] [i_0 + 2])) > (((/* implicit */int) ((unsigned char) (_Bool)1)))))) / ((((-(((/* implicit */int) arr_3 [i_0] [(signed char)0] [i_0 + 1])))) & (((/* implicit */int) arr_12 [i_2] [i_0 + 2] [i_0 - 3] [i_0 - 3]))))));
                        arr_19 [(_Bool)1] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_12 [i_2] [i_0 - 2] [i_0 - 3] [i_0]), (arr_12 [(unsigned char)2] [i_0 - 1] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) (-(-848675731586172813LL)))) ? ((-(arr_10 [i_0] [i_1] [i_2] [i_5]))) : (((/* implicit */long long int) ((unsigned int) var_8)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) (((-(((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) == (((/* implicit */long long int) ((((_Bool) -4225299819365528235LL)) ? (3771896440U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (_Bool)1))))))))));
                            arr_26 [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_10 [i_0] [i_1] [i_2] [i_6])));
                            arr_27 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3771896412U)) ? (((/* implicit */int) arr_23 [i_0] [i_0 + 2])) : (((/* implicit */int) arr_23 [i_0] [i_0 - 2]))))), (((((/* implicit */_Bool) arr_10 [i_7] [i_2] [i_2] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))) : (1523910586U)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((short) var_6)))));
                            arr_31 [i_2] [2LL] [i_2] [(signed char)6] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned char) (-(2771056734U))));
                            arr_32 [i_8] [i_0] [4] [i_0] [i_0] = ((_Bool) ((_Bool) arr_21 [i_0] [i_1] [1ULL] [i_6] [i_8]));
                            arr_33 [i_8] [i_0] [i_2] = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_0 [i_0]))))));
                        }
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 567830660U)) ? (min((3308491275U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3771896412U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))))));
                        arr_34 [2LL] [i_1] [i_1] |= ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_24 = min(((-((-(((/* implicit */int) arr_21 [i_0] [0ULL] [i_1] [i_0] [i_2])))))), ((-(((((/* implicit */int) (short)22811)) * (((/* implicit */int) (unsigned char)88)))))));
                }
            } 
        } 
    } 
}
