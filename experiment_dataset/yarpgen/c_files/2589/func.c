/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2589
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3607695301459414796LL)));
    var_19 = ((/* implicit */int) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) var_14);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] = ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))))) >= (((((/* implicit */long long int) 1240418601U)) | (7545601986855573801LL))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */long long int) ((3346187061U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_15 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) arr_4 [i_4]);
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
                        {
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */signed char) ((unsigned short) ((arr_10 [i_1] [i_5 + 2]) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) arr_12 [i_5 + 2] [i_4] [i_1] [i_2] [i_1])))));
                            arr_19 [i_4] [i_2] = ((/* implicit */unsigned char) var_5);
                        }
                        arr_20 [i_1] [i_3] [i_3] [15LL] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) : (1799599577U)));
                    }
                } 
            } 
        } 
        arr_21 [(_Bool)1] = ((((/* implicit */_Bool) 3611723001U)) ? (arr_16 [i_1] [i_1] [i_1]) : (6923119008690906504ULL));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_22 [i_6] [i_6])) << (((((/* implicit */int) arr_23 [i_6])) - (53579))))), (((/* implicit */int) var_17))));
        arr_25 [i_6] &= ((/* implicit */unsigned short) arr_22 [i_6] [i_6]);
        arr_26 [i_6] &= ((/* implicit */unsigned short) var_1);
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) ^ (((/* implicit */int) (unsigned short)0)))))));
        arr_30 [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_27 [i_7])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-2484265666209014431LL))))));
        arr_31 [i_7] = min((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)234));
    }
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((_Bool) (_Bool)1))), ((unsigned short)41951)));
}
