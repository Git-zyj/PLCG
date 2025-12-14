/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23226
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) var_0);
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 + 2] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 1])) || (((/* implicit */_Bool) arr_0 [i_2] [i_1]))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_1] [i_2 + 2] [i_2] [i_1] [i_2 - 1])))) == (arr_3 [i_1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                            {
                                var_16 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [(short)11] [i_5 + 1] [i_0] [i_0]))))));
                                var_17 = ((/* implicit */int) 21U);
                                var_18 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) + (arr_14 [i_0] [i_0] [i_4] [19LL] [9]))));
                                var_19 = ((/* implicit */short) min((var_7), (((/* implicit */unsigned char) (_Bool)1))));
                                var_20 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_9))))));
                            }
                            for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                            {
                                var_21 = ((/* implicit */long long int) var_8);
                                var_22 = ((((/* implicit */_Bool) min((arr_13 [i_0] [i_1] [i_4] [i_1] [i_7] [i_7]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned char) (~(arr_4 [i_4] [i_1] [i_0 - 1])));
                                var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)65521)) ? (((((/* implicit */_Bool) var_4)) ? (0) : (var_12))) : ((~(((/* implicit */int) arr_17 [i_0] [22] [i_4])))))) : ((~((~(((/* implicit */int) arr_1 [i_8]))))))));
                                var_25 = ((/* implicit */long long int) min((var_25), (var_10)));
                            }
                        }
                    } 
                } 
                arr_22 [i_0 + 1] [(unsigned short)11] = min((((((/* implicit */_Bool) ((18357215373498517530ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521)))))) ? (((/* implicit */int) ((short) arr_12 [i_0] [i_1] [i_0 - 1]))) : ((+(403464114))))), (((/* implicit */int) ((-2026187702) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0 - 1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) (short)-20598);
    var_27 = ((/* implicit */long long int) (_Bool)1);
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_1)))))));
}
