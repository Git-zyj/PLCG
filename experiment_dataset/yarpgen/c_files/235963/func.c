/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235963
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
    var_20 = ((/* implicit */unsigned int) var_19);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 - 4]))) ? (((int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 2] [i_0 - 3] [i_0 - 3])) > (((/* implicit */int) var_4)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0 - 3] [8] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55260)) ^ (arr_7 [i_1 + 1] [i_0 - 4] [i_2 + 1])));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_1] [i_1])) ? ((~(var_2))) : (((/* implicit */int) (unsigned char)255))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1 + 1] [(unsigned short)6])) % (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))));
                    arr_9 [(unsigned short)8] [4U] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_6 [i_2 + 2] [i_1 + 2] [i_0]))))));
                    var_24 = ((/* implicit */unsigned int) (+(-2106655278)));
                }
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) max((((arr_3 [i_3] [i_1 - 1] [i_0]) > (arr_7 [i_0] [6U] [i_3 + 2]))), (((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_11 [i_3 - 1] [i_1 - 1] [i_0]))))));
                    var_26 = ((/* implicit */unsigned int) arr_0 [i_1 + 2]);
                }
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_4] = ((/* implicit */unsigned char) arr_1 [i_0 - 3] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) arr_13 [i_0] [i_0 - 2])))))));
                                arr_20 [(unsigned short)13] = (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40582)) ^ (((/* implicit */int) arr_11 [i_6] [i_1 - 1] [i_0 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0 - 4] [i_1] [i_4] [11])), ((unsigned short)40565)))) : (((/* implicit */int) arr_17 [9] [(unsigned short)4] [i_1 - 1] [i_0 - 4])))));
                                var_28 = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_5] [i_1]);
                                arr_21 [i_5] [i_6 - 3] = ((/* implicit */unsigned short) 4215354443U);
                                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 - 3]))))) ? ((+(2820321238U))) : (((/* implicit */unsigned int) (-(((int) arr_19 [i_0 - 4] [i_1 + 1] [(unsigned char)12] [i_5] [i_6] [(unsigned short)10]))))))))));
                            }
                        } 
                    } 
                    var_30 &= (unsigned short)28404;
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_27 [12U] [12U] [i_7 + 4] [i_7] [i_7] [17] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_1 [i_0 - 4] [i_1])) ? (arr_4 [(unsigned char)14]) : (((/* implicit */int) arr_10 [i_1] [i_1] [(unsigned short)8] [i_1])))) - (((/* implicit */int) arr_22 [i_0 - 4] [i_0 + 2] [i_1 - 1])))), (((/* implicit */int) var_15))));
                            arr_28 [i_0] [i_1 - 1] [i_7] [17] [i_0] = ((/* implicit */unsigned int) arr_6 [15] [i_1 + 2] [15]);
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */int) max((((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_1])), (2998416137U)));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    arr_31 [i_0] [i_1] [(unsigned char)4] = ((/* implicit */unsigned short) (+(min((arr_6 [i_0 - 1] [i_0 - 2] [i_1 - 1]), (arr_6 [i_0 + 2] [i_0 - 2] [i_1 + 1])))));
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40558))) % ((+(max((1036027786U), (((/* implicit */unsigned int) (unsigned short)511)))))))))));
                    var_33 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_6 [i_9] [i_1 - 1] [i_9])), (((max((1143393729U), (((/* implicit */unsigned int) (unsigned short)24971)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_29 [i_9] [i_9] [i_1 + 1] [(unsigned char)10])))) ? (((((/* implicit */int) (unsigned short)8)) * (((/* implicit */int) (unsigned short)1307)))) : (((/* implicit */int) ((((var_0) / (arr_25 [i_1] [i_1] [(unsigned short)10] [i_1 + 1]))) >= ((-(((/* implicit */int) var_4)))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            {
                var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_36 [(unsigned short)13] [(unsigned short)13])) == (((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)9)), (arr_33 [i_11]))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 142157549))))), (((unsigned int) (unsigned short)8191))))));
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_11]))))) << (((((/* implicit */int) arr_34 [(unsigned short)13])) - (((/* implicit */int) arr_34 [i_10]))))));
                arr_37 [i_10] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) arr_36 [i_10] [i_11])), (arr_34 [i_10]))), (max((var_15), (((/* implicit */unsigned short) arr_36 [i_10] [i_10]))))));
                var_37 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4224082912U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10]))))))) != (((((/* implicit */_Bool) arr_33 [i_10])) ? (arr_35 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45780)))))))), ((~(arr_35 [i_10])))));
            }
        } 
    } 
}
