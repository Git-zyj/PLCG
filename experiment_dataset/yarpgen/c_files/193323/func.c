/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193323
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) max((((var_0) << (((((/* implicit */int) arr_3 [i_0])) - (53820))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(unsigned char)8])) >= (((/* implicit */int) arr_3 [i_0])))))));
        var_16 += ((/* implicit */int) var_6);
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) arr_7 [14LL] [i_1 - 1] [i_2 + 2]);
                    var_18 -= ((/* implicit */unsigned short) (-(((long long int) var_8))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_15 [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned long long int) ((int) 20U)));
                        var_19 = arr_11 [i_3] [i_0] [i_3];
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (min((min((((/* implicit */unsigned long long int) arr_4 [i_5] [i_4])), (arr_13 [i_4] [i_3] [i_4] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            arr_18 [i_5] [i_5] [(signed char)2] [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_11)))));
                            var_21 |= ((/* implicit */unsigned short) var_7);
                            var_22 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)2])) ? (var_12) : (arr_4 [i_5] [i_5]))) >> (((var_10) + (4947347932107246038LL)))));
                            var_23 *= ((/* implicit */signed char) ((arr_10 [(signed char)6] [i_3] [i_4] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_4])))));
                        }
                    }
                } 
            } 
        } 
    }
    var_24 -= ((/* implicit */unsigned long long int) var_3);
    var_25 = ((/* implicit */signed char) max((var_25), (var_7)));
    var_26 = ((/* implicit */int) var_4);
    var_27 = ((/* implicit */unsigned short) var_6);
}
