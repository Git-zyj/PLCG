/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207332
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
    var_13 = ((/* implicit */short) (+(max((max((3525433740U), (var_7))), (((/* implicit */unsigned int) ((unsigned char) 3525433727U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    arr_8 [7U] [i_0] [6] = var_9;
                    arr_9 [i_0] [(signed char)12] = ((/* implicit */short) (!(((/* implicit */_Bool) 2944890416U))));
                    arr_10 [i_0] [24] [i_2] |= min((var_0), ((~(((((/* implicit */_Bool) 1856487743765283633ULL)) ? (((/* implicit */int) arr_0 [(signed char)10])) : (var_4))))));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [(unsigned short)21] [i_3] = ((/* implicit */unsigned short) min((arr_13 [i_0] [i_1 - 1] [1] [i_0]), (((((/* implicit */_Bool) var_3)) ? (arr_13 [i_0] [i_1] [i_1 - 1] [i_3]) : (arr_13 [i_0] [i_1] [i_1 - 1] [20LL])))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0]);
                                arr_22 [i_4] [(unsigned char)18] [(unsigned char)18] [20LL] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((arr_4 [24]) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_4), (((/* implicit */int) arr_11 [i_5] [i_0]))))))) : ((~(((long long int) arr_15 [i_5] [i_4] [i_3] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_30 [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_1)))))) ? ((-(((long long int) arr_11 [i_0] [i_0])))) : (((/* implicit */long long int) var_4))));
                        arr_31 [i_7] [i_0] [i_6] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                        arr_32 [i_0] [i_1] [i_6] [20] = ((/* implicit */unsigned char) var_12);
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)99), (arr_15 [i_0] [i_1] [i_6] [i_8] [i_8]))))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) max((16590256329944267993ULL), (((/* implicit */unsigned long long int) arr_18 [i_6] [i_0]))))) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_6] [i_8])) : (((/* implicit */int) arr_33 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                        arr_37 [i_0] [i_8] = ((/* implicit */unsigned char) ((arr_16 [i_0]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_1 - 1] [i_1 - 1] [i_1])))))));
                        arr_38 [i_0] [i_0] = ((int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0]))) : (arr_16 [i_1])))));
                    }
                    arr_39 [i_0] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) - (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_1 - 1])))));
                    arr_40 [i_0] [(_Bool)1] [14U] [i_6] = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_1 - 1] [i_1 - 1]));
                    arr_41 [i_0] [i_0] [i_6] = ((((/* implicit */_Bool) max((((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_6] [i_1] [(_Bool)0]))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1102173477)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))))) ? (min((((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_6]))))), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [9U] [i_1 - 1] [i_1 - 1] [i_1]))));
                }
                arr_42 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [10ULL]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((var_0) != (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_10))))))));
    var_15 = ((/* implicit */unsigned long long int) var_1);
}
