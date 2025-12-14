/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204969
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
    var_10 = ((/* implicit */int) var_3);
    var_11 = ((/* implicit */long long int) max((((/* implicit */short) var_2)), (var_9)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_8))));
                            var_13 += ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned int) var_2);
            /* LoopNest 3 */
            for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */int) var_9)))), (((/* implicit */int) var_3))));
                            var_16 = ((/* implicit */unsigned int) var_7);
                            var_17 -= ((/* implicit */_Bool) var_6);
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (max((var_0), (((/* implicit */unsigned int) var_6))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned char) var_3);
        }
        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_9)), (var_0))), (((/* implicit */unsigned int) var_3))))), (max((max((((/* implicit */unsigned long long int) var_6)), (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_0))))))));
                        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_6)), (var_5)));
                        var_22 = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) var_3);
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            var_24 = ((/* implicit */signed char) min((min((max((((/* implicit */int) var_9)), (var_7))), (((/* implicit */int) max((var_3), (var_9)))))), (((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (short i_12 = 3; i_12 < 9; i_12 += 3) 
            {
                var_25 = ((/* implicit */int) var_2);
                var_26 = ((/* implicit */unsigned long long int) var_4);
                var_27 = ((/* implicit */_Bool) var_8);
            }
        }
        var_28 += ((/* implicit */unsigned int) var_1);
        var_29 = ((/* implicit */_Bool) var_9);
    }
    var_30 = var_3;
}
