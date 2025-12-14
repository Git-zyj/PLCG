/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53910
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
    var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
    var_11 = ((/* implicit */long long int) (+(var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) var_0);
                var_12 *= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (_Bool)1))))) ^ (arr_1 [i_0])))) : (17880352798187272500ULL)));
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)34547));
                                var_13 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) -1871560311)), (3980826751U))))));
                                arr_17 [i_2] [i_2] [i_2] [i_3] [(unsigned short)3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (4163495489U) : (((/* implicit */unsigned int) arr_9 [i_4] [i_3] [i_2]))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) (~(arr_5 [i_0] [i_1]))));
                }
                for (long long int i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    arr_22 [i_1] [i_5] = ((/* implicit */short) ((unsigned short) arr_19 [8ULL] [i_1] [i_5]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((((((unsigned long long int) (_Bool)1)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (((/* implicit */unsigned long long int) var_6))));
                                arr_27 [i_5] [i_1] [i_5] = ((unsigned int) 131471807U);
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_1] [2ULL] [i_5] = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) arr_25 [i_5] [i_5] [i_1] [i_0] [i_0] [i_0])), (var_6))) & (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) < (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)8)), (arr_2 [i_5])))))))));
                    arr_29 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned char) min(((((_Bool)1) ? (17880352798187272501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))))), (((/* implicit */unsigned long long int) (unsigned char)64)))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-1))));
}
