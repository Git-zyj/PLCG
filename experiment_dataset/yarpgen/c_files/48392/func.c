/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48392
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = (+(min((((unsigned int) var_0)), (((/* implicit */unsigned int) (!(var_5)))))));
                arr_4 [i_0] |= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))), ((-(((/* implicit */int) ((_Bool) var_9)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            {
                arr_9 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_3 - 2]))));
                arr_10 [11U] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 3847802709203100585LL)) ? (((/* implicit */int) (short)19935)) : (((/* implicit */int) (unsigned char)249))))));
                arr_11 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) arr_3 [i_2] [17U])) : (arr_6 [i_2]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_5 [i_3])), (var_8)))))))))));
                var_13 = ((/* implicit */unsigned int) 1065151889408ULL);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_0))))))) : (((/* implicit */int) var_6))));
    var_15 &= ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_10))))));
    /* LoopNest 3 */
    for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
    {
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_19 [i_4 - 1] [i_4 - 1] [10] |= ((/* implicit */signed char) (((-(arr_18 [i_4 + 2] [(short)14] [i_5 + 2]))) % ((~(var_7)))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) arr_15 [i_4 - 2] [i_5] [i_4 - 2]))))));
                    var_17 = ((/* implicit */short) var_7);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((arr_1 [i_4] [(signed char)22]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [6U])))))), (((int) (signed char)27)))) >= (((/* implicit */int) (!(var_5))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_6] [i_4 - 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_6] [i_6] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
