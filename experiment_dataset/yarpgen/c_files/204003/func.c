/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204003
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [(signed char)8] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((max((((/* implicit */int) var_16)), (var_10))), ((~(((/* implicit */int) var_14))))))), (max((((/* implicit */long long int) var_3)), (var_4)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_20 = ((/* implicit */int) max((var_20), ((~((~(((/* implicit */int) var_16))))))));
            var_21 ^= ((/* implicit */short) var_12);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_16 [(signed char)13] [(signed char)13] [i_2] [i_4] [4ULL] [i_2] = (-(var_12));
                            var_22 = ((/* implicit */int) (-((-(6937061095273879148ULL)))));
                            var_23 = (!((!(((/* implicit */_Bool) var_8)))));
                            var_24 = ((/* implicit */unsigned long long int) var_17);
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            arr_23 [i_5] [i_6] = ((/* implicit */signed char) var_8);
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) var_17)), (0ULL))), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) var_0))));
                        var_26 = ((/* implicit */unsigned short) var_2);
                        arr_30 [i_5] = ((/* implicit */signed char) max((((/* implicit */int) var_3)), ((~(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_14)))))))));
                        var_27 = ((/* implicit */short) min((var_0), (((/* implicit */unsigned int) (+(max((((/* implicit */int) var_19)), (var_12))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            var_28 = ((/* implicit */int) var_11);
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) var_6))));
            var_30 = ((/* implicit */int) var_9);
        }
        arr_35 [i_5] = ((/* implicit */signed char) (!(min(((!(((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) var_8))))))));
        arr_36 [i_5] = ((/* implicit */unsigned short) min((max((((/* implicit */short) var_15)), (var_2))), (((/* implicit */short) var_6))));
    }
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            for (short i_12 = 3; i_12 < 10; i_12 += 4) 
            {
                {
                    arr_48 [i_10] [0ULL] [(signed char)0] [i_12] |= ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_14))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~(29426675))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */short) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (+((-(var_18))))))));
}
