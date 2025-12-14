/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249687
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)-49))))))) ? (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_12)))), (((((((/* implicit */int) (signed char)-96)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 21; i_2 += 2) 
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = var_10;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_7 [i_4 + 2] [i_1] [i_1] [i_0]))));
                                arr_15 [i_4] [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1] = (+((+(2106836980))));
                                var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 3] [i_1 - 1])) ? (((((/* implicit */int) (unsigned short)0)) | (var_7))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_4]))))));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4] = ((/* implicit */int) ((unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (arr_2 [i_0] [i_0]))) || (((((/* implicit */int) arr_12 [i_0] [i_0])) != (((/* implicit */int) (signed char)-32)))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] = ((long long int) (signed char)47);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((((_Bool)0) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_2])))) / (((/* implicit */int) var_14))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) arr_4 [i_1]);
                                arr_26 [i_0] [i_1 - 1] [i_1] [i_2] [i_2] [i_5 - 1] [i_6] &= ((/* implicit */unsigned long long int) arr_3 [i_5 - 1]);
                            }
                        } 
                    } 
                }
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            {
                arr_34 [i_7] = ((/* implicit */long long int) ((((var_8) > ((((_Bool)1) ? (-1829371847) : (((/* implicit */int) var_12)))))) ? ((+(min((((/* implicit */int) var_12)), (arr_30 [i_7]))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)242))))));
                var_19 -= (signed char)64;
                var_20 = ((/* implicit */int) arr_22 [i_7] [i_8]);
                arr_35 [i_8] |= ((/* implicit */_Bool) ((unsigned long long int) var_5));
            }
        } 
    } 
}
