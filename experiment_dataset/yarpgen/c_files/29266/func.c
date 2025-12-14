/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29266
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (var_12)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */unsigned char) ((long long int) ((arr_0 [i_0] [i_0]) << (((((/* implicit */int) ((unsigned short) (unsigned short)30609))) - (30580))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((unsigned char) arr_1 [i_1]));
                var_18 += ((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) (_Bool)1))), (min((arr_7 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned short) arr_2 [i_0] [i_1]))))));
            }
            for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_1] [i_1])) & (((/* implicit */int) (unsigned short)56473)))) ^ (((/* implicit */int) min((arr_10 [i_1] [i_1]), (arr_10 [i_1] [i_1]))))));
                var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1]))) < (((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3 + 1])))));
            }
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * ((+(arr_19 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6 - 2])))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))))));
                            var_23 += ((/* implicit */_Bool) (((~(arr_14 [i_6 + 2] [i_6] [i_6 - 2] [i_6 + 2]))) << (((min((((/* implicit */unsigned int) arr_18 [i_6 + 2] [i_6 + 2] [i_6 + 3])), ((-(arr_6 [i_4] [i_1]))))) - (1773605977U)))));
                            arr_21 [i_1] [i_1] [(unsigned char)6] [i_5] [i_6] = ((/* implicit */unsigned short) ((signed char) ((long long int) arr_4 [i_5])));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [i_7] [i_7])))))));
        var_25 = ((/* implicit */_Bool) (+((-(arr_24 [i_7])))));
    }
    var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9)))))) < (var_1)));
    var_27 = ((/* implicit */unsigned long long int) var_7);
}
