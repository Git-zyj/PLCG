/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24794
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_18 |= ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (-978825266))) > (((/* implicit */int) ((var_7) < (arr_7 [1] [i_0 + 1] [i_0 + 1] [1] [i_3])))))))));
                            arr_9 [i_0] [i_1] [(unsigned short)3] [(_Bool)1] [(unsigned short)3] [i_0] = ((/* implicit */unsigned short) (((-(var_1))) != (((/* implicit */long long int) (~(-978825265))))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_5 [i_3 - 3] [5] [i_3 - 3] [i_3])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_19 = (+(min((((/* implicit */long long int) (signed char)47)), (arr_16 [i_0] [i_1] [i_4 - 2] [i_5] [9]))));
                            arr_17 [i_4] = ((/* implicit */unsigned short) (signed char)127);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) arr_18 [i_1]);
                            var_21 |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_4 [i_6]))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 8; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (unsigned char)192);
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) arr_3 [i_10 + 1] [i_10 - 2] [i_10 + 1])) : (((/* implicit */int) arr_3 [i_10 + 3] [i_10 + 2] [i_10 - 1]))))) || (((/* implicit */_Bool) ((int) arr_31 [i_1] [i_1] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 9; i_13 += 3) 
                        {
                            {
                                arr_39 [i_12] = ((((((/* implicit */_Bool) arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_7 [i_13 + 2] [i_11 + 1] [i_1] [i_12] [i_13]))) & (arr_36 [i_1]));
                                var_24 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7852449186886794745LL)), (((8725724278030336ULL) * (((/* implicit */unsigned long long int) -978825266))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    for (int i_17 = 4; i_17 < 21; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_25 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_48 [i_17]))));
                                var_26 = ((/* implicit */signed char) ((unsigned int) arr_41 [i_16] [i_15]));
                                var_27 = min((((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_14] [i_17 - 1] [i_17] [i_18] [i_18] [i_14]))) % (arr_49 [i_17 - 1]))), (((/* implicit */long long int) ((var_16) ^ (((/* implicit */int) max((arr_40 [i_18]), (var_17))))))));
                                arr_52 [i_14] [i_14] [i_16] [i_17] [i_18] [i_15] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_12))))));
                                arr_53 [i_14] [i_15] [i_15] [i_17 - 1] [i_17 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_19 = 1; i_19 < 21; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 22; i_21 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) arr_43 [i_14] [i_15] [i_19]);
                                var_29 -= ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_55 [i_15] [i_19 - 1] [i_20])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_22 = 2; i_22 < 20; i_22 += 3) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (unsigned char i_24 = 2; i_24 < 21; i_24 += 2) 
                        {
                            {
                                arr_71 [i_14] [i_15] [i_15] [i_23] [i_23] [i_24] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8725724278030336ULL)) ? (978825265) : (-762430204)))) ? (815380176U) : (((/* implicit */unsigned int) 510)))))));
                                arr_72 [i_14] [i_24] [i_15] [i_22] [i_23] [i_14] |= ((/* implicit */_Bool) var_0);
                                var_30 = ((/* implicit */unsigned char) (+(min((var_10), (((/* implicit */long long int) arr_56 [i_15]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 22; i_26 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) var_15);
                            arr_77 [i_15] [i_14] [i_15] [(unsigned char)11] = ((/* implicit */int) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
}
