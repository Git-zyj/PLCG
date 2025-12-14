/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46261
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
    var_10 = ((/* implicit */int) var_1);
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((-(3898151151U))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 396816143U)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) (~(arr_0 [(short)5]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) arr_4 [(signed char)1] [9] [(signed char)1]))))) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1]))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))))), (max((((/* implicit */int) var_7)), (var_8)))))));
            }
        } 
    } 
    var_13 += var_2;
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_10 [i_2 + 1] [9] [i_3])), ((signed char)-54)))) : (((var_7) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_4))))))), (((((/* implicit */long long int) arr_4 [i_3] [i_3] [4ULL])) ^ (max((arr_8 [i_2] [i_3]), (((/* implicit */long long int) arr_2 [i_3]))))))));
                var_15 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_2] [i_2] [i_2])), (arr_5 [i_3])))) ? (((/* implicit */int) ((arr_3 [i_2 - 1] [i_2] [i_3]) && (((/* implicit */_Bool) arr_11 [i_2]))))) : (max((arr_11 [i_3]), (((/* implicit */int) arr_10 [i_3] [(_Bool)1] [i_2])))))), (((/* implicit */int) (!(var_7))))));
                var_16 = ((/* implicit */unsigned char) arr_11 [i_2 + 1]);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (max((var_3), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_4 [i_2] [i_3] [i_2])) : (396816140U))))))) ? (((/* implicit */unsigned long long int) (~(max((arr_15 [i_2 - 1] [i_4]), (arr_15 [i_4] [i_3])))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) | (var_5))) | (((/* implicit */unsigned long long int) arr_8 [i_3] [i_4]))))));
                    var_18 = var_0;
                }
            }
        } 
    } 
}
