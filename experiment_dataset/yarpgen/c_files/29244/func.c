/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29244
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
    var_19 = ((/* implicit */short) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_2] = ((unsigned int) arr_6 [i_2] [i_1] [9U]);
                    var_20 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 2])) != (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1])) >= (((/* implicit */int) var_11)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 7; i_4 += 4) 
        {
            {
                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) > ((-(65536U)))));
                var_22 = var_12;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((int) var_18)))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 4294967295U)) / (arr_15 [(_Bool)1] [8ULL]))))))));
                    arr_21 [i_3] [i_3] [i_5] = ((/* implicit */short) ((unsigned int) arr_14 [i_4 + 4] [i_4] [i_4 - 1]));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_1 [i_3]))));
                    arr_25 [i_3] = arr_18 [i_4];
                }
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (+((-(4294967292U))))))));
            }
        } 
    } 
    var_27 = ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (4294967292U)));
    var_28 = ((/* implicit */int) ((0U) >> (((((/* implicit */int) (unsigned char)87)) - (83)))));
}
