/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193306
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
    var_17 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_7 [i_1] [(_Bool)1] = ((/* implicit */short) (((-(((/* implicit */int) var_3)))) - (((/* implicit */int) max((((/* implicit */short) var_8)), (var_9))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [i_3] [1ULL] [i_3] = ((/* implicit */int) max((((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        var_18 -= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56618)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                        {
                            arr_15 [i_0 + 3] [i_0 + 3] [i_3] [i_0 + 3] [i_0 + 3] = var_1;
                            var_19 = ((/* implicit */unsigned short) var_13);
                            var_20 = ((/* implicit */_Bool) ((var_16) ^ (var_16)));
                            arr_16 [i_0 - 1] [i_1] [i_3] [3U] [3U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            var_21 = (~((~(var_10))));
                            var_22 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_5))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_23 = var_5;
                            var_24 ^= ((/* implicit */long long int) var_2);
                            arr_24 [i_0] [i_3] [i_2 + 1] [i_3] [i_6] = ((/* implicit */unsigned long long int) var_10);
                            var_25 ^= ((/* implicit */unsigned short) var_7);
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_7))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned char i_8 = 3; i_8 < 23; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_31 [i_7] [(signed char)14] [i_7] [i_7] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_8)), (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16)))))));
                            var_27 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_2)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_12)))), ((+(var_12)))))));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */unsigned short) var_11);
    }
}
