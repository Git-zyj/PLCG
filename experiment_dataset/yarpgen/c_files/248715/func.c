/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248715
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (arr_0 [i_0] [i_1 - 1]) : (arr_0 [i_1] [i_1 - 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_12);
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) ((signed char) var_0))), (max((var_9), (var_9)))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_4)))), (min((var_12), (10069702614412192148ULL))))) : (max((((((/* implicit */_Bool) 10069702614412192148ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_6))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8377041459297359474ULL))));
                var_16 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_6))))) ? (((/* implicit */int) arr_6 [(short)9] [i_3])) : ((~(((/* implicit */int) var_11))))))));
                var_17 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) arr_7 [i_2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            {
                arr_18 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_5 + 1] [i_4]))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    var_18 = ((/* implicit */int) min((var_18), ((-(((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_5] [i_6 - 3])) ? ((-(var_2))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_16 [i_4] [(short)19]))))))))));
                    var_19 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [(short)15] [i_5 - 1])) || (((/* implicit */_Bool) ((signed char) var_3))))) ? (((arr_19 [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_11 [i_6 + 2])) : (((/* implicit */int) ((_Bool) var_7))))) : (((/* implicit */int) max((arr_16 [i_5] [i_4]), (max((arr_16 [i_6] [(signed char)8]), (var_8))))))));
                    arr_22 [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((arr_21 [i_4] [i_4] [i_6]), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])))), (((/* implicit */unsigned long long int) arr_20 [i_6 + 1] [i_6] [i_6] [i_6]))))) ? (min((((/* implicit */unsigned long long int) ((_Bool) var_9))), (max((84347538493766017ULL), (((/* implicit */unsigned long long int) arr_17 [i_4] [(signed char)12])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_5 - 2] [i_5 - 2]), (((/* implicit */unsigned short) arr_16 [i_6 - 3] [(unsigned short)1]))))))));
                }
                var_20 &= ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
            }
        } 
    } 
}
