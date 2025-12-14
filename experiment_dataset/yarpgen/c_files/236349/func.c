/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236349
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
    var_17 = ((/* implicit */unsigned int) ((long long int) var_8));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_9 [i_3] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 2264666270U)))));
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */long long int) ((unsigned char) (+(arr_2 [i_0] [i_0]))));
                            arr_11 [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((unsigned long long int) (unsigned char)254)))))));
                            arr_19 [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) ((int) (signed char)-115)));
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_14 [i_4] [i_5 - 1] [i_4])))));
                            var_20 = ((/* implicit */short) ((signed char) (-(arr_4 [i_5 - 3] [5ULL] [i_4 - 1] [i_5]))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_7 [(signed char)12] [i_0] [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (signed char i_7 = 1; i_7 < 22; i_7 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (short)15))))));
                var_22 = ((signed char) (-(var_2)));
                arr_26 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47982)))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    for (int i_9 = 4; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_33 [(signed char)3] [i_7] [(signed char)3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)32256))));
                            var_23 = ((/* implicit */short) ((int) 8614360025958648610ULL));
                            arr_34 [(unsigned char)13] [i_7] [i_7] [i_6] = ((signed char) ((unsigned int) var_9));
                            /* LoopSeq 3 */
                            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(1265899134U))))));
                                arr_37 [i_6] [i_7] [i_6] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) (unsigned char)58)))));
                                arr_38 [i_7] [11ULL] [i_9] [i_10] [i_9 - 3] [3] = ((unsigned char) ((long long int) 3777828999U));
                            }
                            for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                            {
                                arr_42 [i_6] [i_7] [i_8 + 1] [i_7] [18LL] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) 1265899134U)))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((int) (-(2030301025U)))))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_8))))))));
                                var_27 *= ((signed char) (-(((/* implicit */int) (signed char)115))));
                            }
                            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                            {
                                arr_45 [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (short)29686)))));
                                arr_46 [i_12] [i_12] [i_7] [i_7] [i_7 - 1] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) arr_29 [i_7 + 1] [i_7 + 1] [i_8 + 1] [i_8 + 2])))));
                                var_28 = ((/* implicit */int) ((unsigned long long int) (-(3777828981U))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */int) ((signed char) var_5));
}
