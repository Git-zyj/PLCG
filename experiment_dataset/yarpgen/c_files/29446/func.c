/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29446
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
    var_17 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 1] [i_0])))), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))) + (4223864536U)))))));
        arr_3 [i_0] = ((/* implicit */signed char) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))) : (var_10)))))))));
    }
    for (long long int i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((3296228848U), (((/* implicit */unsigned int) (unsigned char)15))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_15 [i_2 + 1])), ((unsigned short)32451))))));
                                arr_17 [i_4] [i_4] [i_3] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_1 + 1] [i_2 + 2] [i_3]), (((/* implicit */unsigned char) arr_9 [i_5] [i_2 + 3]))))) ? (3296228843U) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1] [i_3]))) & (var_15)))))) ? (((/* implicit */long long int) max((((unsigned int) 71102760U)), (arr_13 [i_2 + 2] [i_4] [i_3] [i_1 - 1])))) : (((arr_7 [i_1]) / (((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_4] [i_4] [i_3] [i_3] [i_3])) + (2147483647))) << (((arr_4 [i_1]) - (4261409588258390709LL))))))))));
                                var_20 = ((/* implicit */unsigned char) var_16);
                                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4468947782868956868LL)) ? (arr_4 [i_1]) : (arr_4 [i_3])))) ? (((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_14 [i_1] [i_1 + 2] [i_2] [i_3] [i_4] [i_5] [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned short) arr_12 [i_1 + 1] [20ULL] [i_1 - 1] [i_1] [i_1]))))), (arr_13 [i_1 + 1] [(_Bool)1] [i_1] [(_Bool)1]))) + (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        arr_19 [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1])))))) : ((~(arr_6 [i_1 - 1] [i_1])))));
    }
}
