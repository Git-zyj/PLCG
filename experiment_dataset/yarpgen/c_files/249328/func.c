/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249328
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
    var_17 = ((/* implicit */short) 6151221227068544839ULL);
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) (signed char)-34);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 455360297U)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (signed char)4))));
                }
                for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    var_21 = ((/* implicit */short) (signed char)-124);
                    var_22 = max((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0] [9ULL])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)151))))) : ((~(var_8))))), (((/* implicit */unsigned int) (-(arr_3 [i_0 + 1] [i_3 - 1])))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned short) var_14));
                }
                for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    var_24 -= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                    var_25 = ((/* implicit */unsigned short) (unsigned char)11);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((unsigned int) arr_9 [i_5]))))));
                                arr_17 [i_4] [i_1] = ((/* implicit */short) var_2);
                                var_27 = ((/* implicit */signed char) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) 5831979422756278950ULL))))), ((~(((/* implicit */int) arr_7 [i_4] [3LL] [(unsigned short)4] [i_5]))))))));
                                var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_9 [i_0 - 2])) : ((-(((/* implicit */int) arr_9 [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */short) (-((+(arr_19 [i_8 + 3] [i_1])))));
                                var_30 = ((/* implicit */signed char) ((((unsigned long long int) ((signed char) (unsigned short)34022))) * (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_2 [i_0 - 2])))), (((int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((~(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])))))) << (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_21 [i_0] [i_1])))))))))));
                    var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_14 [(short)13] [i_1] [i_7])))))), (var_7)));
                    var_33 = ((/* implicit */long long int) (signed char)7);
                    var_34 = ((/* implicit */long long int) (_Bool)1);
                }
                var_35 = ((/* implicit */_Bool) -1181941493);
                var_36 = ((/* implicit */unsigned long long int) ((unsigned int) arr_7 [4] [i_1] [i_0 + 1] [i_0]));
                var_37 = ((/* implicit */signed char) ((((arr_3 [i_0 + 1] [(unsigned short)16]) | (arr_3 [i_0 - 1] [i_1]))) >= (max((((/* implicit */int) (signed char)64)), (var_3)))));
            }
        } 
    } 
}
