/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194005
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */int) var_4);
                                var_18 = ((signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)42301))))) - (((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-17248)))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~((((-(((/* implicit */int) (unsigned char)255)))) / (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (_Bool)1))))))))))));
                                var_20 = ((/* implicit */_Bool) arr_0 [i_1]);
                                var_21 = ((/* implicit */signed char) arr_8 [(short)19] [11U]);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned char)0);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_6] [i_5] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)14] [i_5]))))));
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0] [(signed char)1] [(signed char)1] [(signed char)1] [i_0 + 1]))));
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6 + 2] [i_5] &= ((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((+(((/* implicit */int) var_0))))));
                                var_23 = ((/* implicit */unsigned char) (signed char)-64);
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_25 = ((/* implicit */signed char) (_Bool)1);
        arr_26 [i_7] [i_7] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) arr_25 [i_7])) ? (1058629698U) : (2029396135U)))))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */signed char) (-(arr_27 [i_7] [i_7] [19])));
            var_27 = ((/* implicit */int) (unsigned char)239);
        }
        for (unsigned char i_9 = 4; i_9 < 24; i_9 += 1) 
        {
            var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))));
            arr_32 [12U] [12U] [i_7] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((arr_24 [i_7]), ((_Bool)1)))), ((+(13821456295181417184ULL))))) - (((/* implicit */unsigned long long int) ((arr_27 [i_9 - 4] [i_9 - 4] [i_9 - 4]) & (max((var_2), (((/* implicit */unsigned int) (signed char)-75)))))))));
            arr_33 [(signed char)19] [(unsigned char)11] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)185))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1050151383U))))));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) (short)-2678)))) + (((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_10] [i_10] [i_10]))))))));
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_10] [(unsigned char)0] [(unsigned char)14] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_10]), (arr_9 [i_10]))))) : (((unsigned int) (unsigned char)70)))))));
    }
}
