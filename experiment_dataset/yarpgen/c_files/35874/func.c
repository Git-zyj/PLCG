/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35874
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (-(max((min((arr_2 [3LL] [(unsigned short)8]), (arr_2 [(unsigned short)8] [i_0]))), (((/* implicit */unsigned long long int) ((long long int) arr_2 [(unsigned short)10] [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (-(-1))));
                    var_21 -= ((/* implicit */unsigned short) ((_Bool) (-((-(((/* implicit */int) arr_5 [i_0] [i_0])))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min(((~(-1070047072))), ((~(((/* implicit */int) ((signed char) arr_2 [i_3] [9LL]))))))))));
        var_23 = arr_9 [i_3];
        arr_12 [(short)10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_5 [i_3] [(unsigned short)1])))), (((/* implicit */int) arr_9 [6U])))))));
        arr_13 [4U] &= ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3] [i_3] [8LL] [8U]))))))));
        arr_14 [i_3] = ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_3] [i_3]));
    }
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned char) var_14))))))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned int) max((min((((unsigned long long int) arr_0 [i_4])), (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [i_4 + 1])))), (((/* implicit */unsigned long long int) max(((~(arr_11 [(unsigned char)2] [(unsigned char)7]))), (((/* implicit */long long int) arr_18 [i_4] [(signed char)7] [(_Bool)1])))))));
                arr_20 [0] = ((/* implicit */long long int) max(((~((~(arr_7 [(unsigned short)0]))))), (arr_3 [i_5])));
                var_26 = ((/* implicit */unsigned int) (~((-(max((arr_11 [i_4] [(_Bool)0]), (arr_1 [i_4])))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((max(((~(arr_2 [(unsigned short)6] [(unsigned short)6]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [1ULL])), (arr_16 [(signed char)5])))))), (((/* implicit */unsigned long long int) arr_6 [(short)2] [(short)2] [i_5] [i_5])))))));
                arr_21 [i_4] = ((/* implicit */long long int) arr_3 [i_4 + 1]);
            }
        } 
    } 
}
