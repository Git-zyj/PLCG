/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210155
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */long long int) arr_8 [i_0 - 2] [(unsigned char)19] [(_Bool)1]);
                                arr_13 [(short)0] [(short)0] [i_2] [9] [i_2] [i_3 + 1] [i_2] = ((/* implicit */unsigned int) (~(-4851731813176547474LL)));
                                var_18 = max((max((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1])), (arr_11 [i_4 + 2] [i_1 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [(signed char)0]))), (((/* implicit */long long int) (+(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (482449688U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                                arr_18 [(short)18] [i_2] [(short)18] [(short)12] [i_5] [i_6] = ((/* implicit */int) (((~(max((-3682994841516561064LL), (((/* implicit */long long int) var_9)))))) % (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_2])))) & (((((/* implicit */_Bool) (unsigned char)182)) ? (8714287366364084275LL) : (((/* implicit */long long int) arr_9 [i_0] [i_2] [i_2] [i_2] [i_5] [17LL]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_10 [i_2] [i_7]) / (8714287366364084287LL)))) ? (((/* implicit */long long int) arr_9 [i_1] [i_2] [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1 + 3])) : (max((((/* implicit */long long int) arr_15 [i_0 + 1] [i_1 - 1] [13U] [4])), (8714287366364084273LL)))))) | (14844926115714634431ULL)));
                        var_21 = ((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1]))));
                        arr_22 [14LL] [i_2] [i_2] [i_2] [i_1 - 1] [i_7] = ((/* implicit */long long int) arr_2 [i_0 - 2] [i_2]);
                    }
                    /* LoopSeq 1 */
                    for (short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        arr_27 [i_8] [i_1] [i_2] [i_8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)82)) * ((-(((/* implicit */int) (short)14718))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) -2037694800))) - (((/* implicit */int) arr_25 [i_8] [i_2] [i_1] [i_0 - 1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                        {
                            var_23 += ((/* implicit */signed char) var_8);
                            arr_30 [i_0 + 3] [i_0 + 3] [i_1 - 1] [i_2] [i_2] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_0 - 2] [i_0 - 2] [(_Bool)1] [i_8 + 4] [i_9 - 1] [i_0 - 2] [i_0 - 2]))));
                            arr_31 [i_9 + 4] [i_1] [i_8] [(short)18] [i_0 + 3] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)171);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (((_Bool)1) ? (3075967573829736391ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10))))))));
                        }
                    }
                    var_25 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        arr_34 [i_10] = (+(8714287366364084275LL));
        arr_35 [i_10] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10])))), (((/* implicit */int) ((min((arr_23 [i_10] [i_10] [17ULL] [9]), (((/* implicit */long long int) arr_16 [i_10] [i_10] [(unsigned char)1] [i_10])))) >= (((/* implicit */long long int) (+(((/* implicit */int) var_16))))))))));
    }
}
