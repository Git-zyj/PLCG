/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44348
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
    var_19 = ((/* implicit */signed char) (_Bool)1);
    var_20 = ((/* implicit */unsigned char) max((max((var_18), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) var_13);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_22 = (!(((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_2 [i_0])))));
                                arr_13 [i_0] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-83)) ? (3144353534U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (signed char i_8 = 2; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_0 [i_5]))));
                        var_25 -= ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 14; i_9 += 2) 
    {
        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
        {
            {
                var_26 = ((/* implicit */unsigned char) var_4);
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_29 [i_9] [i_9] [i_9 + 1]), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : (var_10)))));
                var_28 ^= arr_1 [i_10];
            }
        } 
    } 
}
