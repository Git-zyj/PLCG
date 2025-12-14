/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3674
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
    var_10 = ((/* implicit */int) var_1);
    var_11 = ((/* implicit */unsigned short) min((var_9), (var_4)));
    var_12 -= var_1;
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_13 = (+(min((((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))), (min((((/* implicit */int) var_3)), (var_8))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -322764765))));
                        var_15 = ((/* implicit */unsigned long long int) min((min((1263803956), (((/* implicit */int) (signed char)-112)))), (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)1))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (_Bool)0);
                    var_17 = ((/* implicit */_Bool) arr_16 [20U] [i_0 + 2] [20U] [i_5]);
                    var_18 = ((/* implicit */unsigned long long int) ((signed char) (signed char)-1));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 8; i_7 += 4) 
        {
            for (long long int i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                for (int i_9 = 3; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)49))));
                        var_20 = ((/* implicit */long long int) var_6);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (-(0U)));
        var_22 = ((/* implicit */int) (unsigned short)34334);
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_6 + 2] [i_6 + 1]))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) var_1);
                                var_25 = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_16] [i_10] [i_12] [i_10] [i_10] [i_10]))));
                                var_27 = ((/* implicit */unsigned short) (signed char)110);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [i_10] [i_11] [i_10]));
                }
            } 
        } 
        var_29 = ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10] [i_10] [i_10] [i_10]))) % (var_5)));
        var_30 = (!(((/* implicit */_Bool) arr_28 [i_10])));
    }
    for (int i_17 = 1; i_17 < 12; i_17 += 4) 
    {
        var_31 = 2830541155U;
        var_32 ^= ((/* implicit */short) min((17927263552031460858ULL), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 10638460474918159871ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_17] [i_17] [i_17])))))))));
    }
}
