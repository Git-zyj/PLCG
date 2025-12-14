/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249942
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
    var_11 = ((/* implicit */signed char) (unsigned char)255);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) var_1);
        var_13 = ((/* implicit */unsigned char) arr_0 [(signed char)4] [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) var_8);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_5)) << (((var_9) + (1656491948))))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (arr_1 [i_1]))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) max((min((arr_10 [i_3]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_6)) - (72))))))));
                        var_16 = ((/* implicit */unsigned char) var_1);
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) var_9)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_18 = 18446744073709551604ULL;
                            arr_22 [i_1] [i_2] [i_2] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) arr_17 [i_1] [i_2] [i_5] [i_7]);
                            arr_23 [i_1] [i_2] [i_2] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((unsigned int) arr_7 [i_1] [i_7])))))));
                            var_20 = ((/* implicit */unsigned short) (~(((int) var_7))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_1)))), (((int) arr_15 [i_2] [(short)3] [23ULL])))))));
        }
    }
}
