/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190829
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
    var_19 = ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(arr_3 [i_0] [(short)13] [i_0 + 3]))), (((/* implicit */long long int) ((int) (-2147483647 - 1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_0 [i_0 + 3]), (arr_0 [i_1])))) - (((/* implicit */int) arr_1 [i_0] [i_0 - 2]))))) : (min((((/* implicit */unsigned long long int) (signed char)69)), (0ULL)))));
                arr_5 [i_1] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) ((unsigned char) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 18446744073709551607ULL))) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (_Bool)0))))) < (arr_6 [i_2])));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_23 [i_2] = (_Bool)1;
                                var_23 = var_12;
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_4 [i_4]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_24 = arr_31 [i_2] [i_3 - 2] [(unsigned char)6] [i_8] [i_9] [i_9];
                                arr_34 [9LL] [9LL] [i_7] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [12U] [i_3 - 2] [(unsigned char)5] [i_3 - 2] [i_3] [i_3 + 1])) / (((/* implicit */int) arr_31 [i_9] [i_8] [i_7] [i_3 - 2] [i_3 + 1] [i_2])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((3658388453U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_3 - 1] [i_7] [i_8]))))))) : ((-(0LL)))));
                                arr_35 [17LL] [i_3] [17LL] [17ULL] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))));
                                arr_36 [i_2] = min((((/* implicit */long long int) ((unsigned int) arr_2 [i_3 - 2] [i_3] [i_8]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) ^ (-6768970081386846194LL))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) 11155953288440838361ULL))), ((~(((/* implicit */int) (signed char)68))))));
                arr_37 [i_3] [i_2] = ((/* implicit */unsigned long long int) var_13);
            }
        } 
    } 
}
