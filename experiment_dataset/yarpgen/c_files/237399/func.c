/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237399
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
    var_11 = ((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_1))) / (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_6))))))) * (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) max(((signed char)-126), (((/* implicit */signed char) var_7))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) var_5);
                var_12 = ((/* implicit */unsigned char) arr_0 [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        {
                            arr_17 [4] [i_2] [i_4] [i_5] [4] = ((/* implicit */signed char) ((unsigned char) min(((+(((/* implicit */int) (unsigned char)50)))), (((/* implicit */int) (unsigned char)189)))));
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_14 |= ((/* implicit */int) ((((/* implicit */int) arr_2 [(signed char)11] [(signed char)12])) >= (((/* implicit */int) arr_12 [i_2] [i_2] [6LL]))));
                                arr_20 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)50)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (min((0LL), (((/* implicit */long long int) (_Bool)1))))))));
                                var_15 += ((/* implicit */signed char) min((((/* implicit */int) var_2)), (var_5)));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_16 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((min((((/* implicit */long long int) (unsigned char)60)), (arr_21 [i_2] [i_2 - 1] [i_2 - 1] [i_2]))) * (((/* implicit */long long int) ((arr_15 [i_2] [i_2 + 1] [(_Bool)1] [i_3 + 4]) ^ (((/* implicit */int) (unsigned char)78)))))))) : (((/* implicit */signed char) ((min((((/* implicit */long long int) (unsigned char)60)), (arr_21 [i_2] [i_2 - 1] [i_2 - 1] [i_2]))) / (((/* implicit */long long int) ((arr_15 [i_2] [i_2 + 1] [(_Bool)1] [i_3 + 4]) ^ (((/* implicit */int) (unsigned char)78))))))));
                                var_17 = ((/* implicit */unsigned int) ((2725996239902978792LL) << (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 561719936)), (-1LL)))))))));
                                var_18 = ((/* implicit */short) arr_7 [i_7] [i_7]);
                                arr_28 [i_2] [i_7] [i_2] [i_8] [i_9] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 2; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) -149305347))));
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1])) & (((/* implicit */int) arr_16 [i_3 + 3] [i_3 + 1]))))), (max((max((((/* implicit */long long int) 149305346)), (arr_29 [i_11 - 1] [(signed char)4] [i_3] [i_2]))), (((/* implicit */long long int) arr_34 [i_2] [i_3] [i_10] [i_11] [i_2]))))));
                                var_21 = ((/* implicit */_Bool) (signed char)-64);
                                arr_39 [i_12] [(signed char)9] [i_10] [i_2] [i_3 + 4] [i_3 + 2] [i_2] = ((/* implicit */signed char) var_5);
                                arr_40 [1LL] [i_3 + 3] [i_3 + 3] [i_2] [i_12] = ((/* implicit */long long int) (-(((arr_27 [i_2] [i_2] [i_11 - 2] [i_2 + 2] [i_3 + 2]) & (((arr_0 [(signed char)0]) - (((/* implicit */int) (unsigned char)255))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 1) 
                    {
                        {
                            arr_46 [i_2 - 1] [(signed char)1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_3] [i_3 + 3] [i_3])) + (((/* implicit */int) arr_3 [(short)15] [i_3 - 1] [(_Bool)1]))))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) + (-1LL)))));
                            var_22 = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
}
