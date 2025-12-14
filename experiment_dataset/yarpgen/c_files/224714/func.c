/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224714
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
    var_11 -= ((/* implicit */signed char) ((1602615482U) | (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)26692)))))))));
    var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)6)) > (((/* implicit */int) (signed char)-113))))))));
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24155))) : (2832071182268436292ULL))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) 12710229638699282476ULL))))) == (((/* implicit */int) (short)24874))));
                                arr_13 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)24149)) < (((/* implicit */int) (signed char)-124)))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)20] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24134)) ^ (((/* implicit */int) var_1))))) <= (2832071182268436292ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    arr_21 [13] [i_0] [i_6] = ((/* implicit */long long int) (signed char)38);
                    arr_22 [i_6] [i_5] [(signed char)12] &= ((/* implicit */int) ((((/* implicit */_Bool) 18010000462970880ULL)) || ((!(((/* implicit */_Bool) var_9))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
}
