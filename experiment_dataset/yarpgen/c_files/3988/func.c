/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3988
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) min((min((arr_0 [3LL]), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))))), (((/* implicit */long long int) arr_4 [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_2]))))), (arr_6 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_7 [i_0]))));
                    var_17 = ((/* implicit */_Bool) arr_0 [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = arr_3 [i_1] [i_1] [i_1];
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] = ((/* implicit */short) 2039094581);
                    var_18 *= ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
                    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0 - 2] [i_0]))));
                    arr_13 [i_0] [i_0] = max((((unsigned int) arr_6 [i_0] [i_0 - 2])), (min((((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0])), (arr_6 [i_0] [i_0 + 1]))));
                }
                for (long long int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_11 [i_0] [i_0] [(short)1] [i_1])))))))));
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_4] [i_4]);
                }
                var_20 &= ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])), ((-(((/* implicit */int) (_Bool)1))))));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_0]), (arr_14 [i_1] [i_1] [i_1]))))))), (arr_1 [i_0])));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))) / (var_4))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))))));
    var_23 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            {
                var_24 += ((/* implicit */unsigned int) (_Bool)1);
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((max((arr_20 [i_6] [i_5]), (arr_20 [i_5] [i_5]))), (((arr_19 [i_6]) ? (arr_20 [i_6] [i_5]) : (((/* implicit */int) arr_19 [i_5])))))))));
            }
        } 
    } 
}
