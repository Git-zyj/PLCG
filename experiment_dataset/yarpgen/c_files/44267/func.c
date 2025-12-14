/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44267
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((int) var_4))) ? (var_2) : (((/* implicit */long long int) arr_5 [i_0] [i_1])))) / (arr_7 [i_0])));
                                var_16 = ((/* implicit */unsigned int) arr_7 [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1] [i_1] [i_1])) >= ((-(arr_4 [i_6] [i_6] [i_6] [i_6]))))))));
                                var_18 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1]))) : (((((/* implicit */_Bool) -5228617245985892430LL)) ? (1260618450U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17250)))))))), (min((((/* implicit */long long int) (short)-31557)), (-544964149961365937LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        for (short i_8 = 4; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_2 [i_0]) ? (arr_19 [i_2] [i_1] [i_0] [i_7] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) 1))))), (max((arr_10 [i_8] [i_1] [i_2] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_7] [i_8 + 4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [0LL] [0LL]))) : (((unsigned int) var_0))))));
                                var_20 = ((/* implicit */int) max((min((arr_17 [i_7] [i_8] [i_7 - 1] [i_7]), (arr_17 [i_7] [i_8] [i_7 + 1] [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_17 [i_7] [2LL] [i_7 - 3] [i_7])) >= (arr_9 [i_7] [i_7] [i_7 + 1] [i_7]))))));
                                var_21 = ((/* implicit */long long int) (short)31574);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_7] [i_8 - 3])) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_6 [i_0] [i_1] [(unsigned short)2] [i_8 + 3])) | (arr_7 [i_0])))) ? ((~(arr_6 [i_1] [i_1] [i_7] [i_8]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)1647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31551))) : (arr_17 [i_7] [i_1] [i_7] [i_7]))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7))))))))))));
                                var_23 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)48756))));
}
