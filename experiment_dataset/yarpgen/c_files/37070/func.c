/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37070
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) (~(((unsigned long long int) arr_2 [(short)0] [i_1 - 2] [i_1 + 1]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_3] [i_2] = ((((/* implicit */_Bool) min((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) var_3))))) ? ((+(max((565366414U), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 565366413U)) || (((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_2 + 1])))))));
                        arr_10 [i_3] [i_1 - 1] = var_8;
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [19ULL] [i_1] [i_2] [i_3] [i_4])) || (((/* implicit */_Bool) var_5))))) + (min((-2020584609), (((/* implicit */int) var_13))))))) * (min((((3729600871U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_0] [i_3] [(unsigned char)8] [10LL] [(signed char)10] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-256)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-20199)))))))));
                            var_17 = ((/* implicit */_Bool) var_11);
                            arr_15 [i_4] [4U] |= ((/* implicit */long long int) (+(((arr_13 [i_0] [i_1] [i_1] [0LL] [i_1]) << (((arr_13 [(_Bool)1] [i_1] [(_Bool)1] [i_3 - 2] [i_3 - 4]) - (1860294787442966648ULL)))))));
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_3])), (arr_14 [i_4] [i_3] [i_2 - 1] [i_3] [i_0])));
                        }
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_3] [i_3] [i_2 - 2] [11ULL] [i_1] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) max((3729600871U), (arr_5 [i_2 + 3] [12U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) var_14)), (var_4)))))));
                            var_19 |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)2)) ? (arr_18 [i_3 + 1] [i_5] [i_3 - 3] [i_3 + 1] [13ULL] [i_0]) : (arr_18 [(_Bool)1] [i_3] [i_3] [i_3 - 2] [i_2 + 2] [i_2]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_20 = ((min((arr_2 [i_1 - 1] [i_3 - 1] [i_6]), (3729600861U))) == (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_3 - 1] [i_3])) ? (4187926573U) : (arr_2 [i_1 - 1] [i_3 - 2] [i_6]))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_6] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30686)) ? (1529914887) : (((/* implicit */int) (unsigned char)7))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_6 [i_0] [i_0] [i_6]))) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_3] [i_0])))))));
                            var_21 = 14662641208595847839ULL;
                        }
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_25 [12U] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) max(((+(var_0))), (((/* implicit */long long int) (_Bool)1))));
                            arr_26 [i_7] [13ULL] [i_3] [i_3] [13ULL] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) > (max((arr_12 [i_0] [i_1] [i_2]), (arr_12 [i_1] [i_2 - 2] [i_3])))));
                            arr_27 [i_0] [i_1] [i_1] [i_3] [i_7] |= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (var_8)))) ? (((/* implicit */int) max((var_14), (arr_11 [i_0] [i_0] [i_0] [8LL] [i_2] [i_0] [i_7])))) : ((+(var_3)))))), (max((arr_18 [i_7] [(unsigned char)5] [i_2] [(unsigned char)5] [i_0] [i_0]), ((((_Bool)1) ? (107040725U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_0])))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) 9223372036854775793LL);
                        arr_30 [9ULL] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) & (arr_2 [i_1] [i_1 - 1] [i_8])));
                        var_23 = ((/* implicit */unsigned long long int) ((3156320283U) << (((/* implicit */int) (unsigned char)7))));
                        var_24 = ((/* implicit */short) ((long long int) 4187926558U));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [i_9] [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_2 - 1] [i_9] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_2 + 3] [i_1] [i_1] [9])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2 - 2] [i_9] [i_1 + 1] [i_1 + 1]))))));
                        var_25 |= 262080;
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (!(((3107654746U) > (arr_18 [i_0] [(_Bool)1] [i_0] [i_1 - 1] [i_2] [i_9])))))) > (((((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1] [i_1 - 2] [15ULL] [i_1 - 2])) - (((/* implicit */int) var_10))))));
                        arr_34 [i_0] [3ULL] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(short)19] [i_1 + 1] [i_2] [i_2] [(short)19] [i_9])))))))) ? (var_6) : (((/* implicit */unsigned long long int) var_3))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 19; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((long long int) 14662641208595847810ULL));
                                var_28 = ((/* implicit */unsigned char) arr_13 [i_11 + 1] [i_10] [i_2] [i_10] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    var_30 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */signed char) (!(((((/* implicit */int) var_7)) <= (((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                {
                    var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((int) var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_12] [i_13] [i_14])) || (((/* implicit */_Bool) arr_47 [i_12] [i_13] [i_14]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1138646986U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (12063411738627822309ULL)))))))));
                    var_32 = ((/* implicit */unsigned long long int) arr_41 [i_12]);
                    arr_51 [i_14] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) arr_45 [i_14]))))), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_41 [i_12])))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */_Bool) var_4);
}
