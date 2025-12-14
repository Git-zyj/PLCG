/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191193
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
    for (long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((unsigned long long int) -2527706497172965471LL));
        var_15 = ((/* implicit */unsigned int) arr_1 [5U]);
        arr_2 [i_0] = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_7))) ? (arr_12 [i_1] [i_2] [i_3] [i_1]) : (((((/* implicit */_Bool) (signed char)73)) ? (arr_7 [i_1 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                                var_17 = ((int) var_2);
                            }
                        } 
                    } 
                    arr_21 [i_1] [3ULL] [i_1] = ((/* implicit */signed char) (-(arr_9 [i_1 - 2] [i_1 + 2] [i_1 - 1])));
                    arr_22 [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [10ULL] [i_2]))));
                    var_18 = arr_17 [i_1] [i_2] [i_2] [i_2] [i_3];
                    var_19 = ((/* implicit */unsigned long long int) (~(arr_19 [i_1 - 2] [i_1 - 1])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (long long int i_8 = 3; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) -2119442204);
                        var_21 = ((/* implicit */unsigned short) var_11);
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned long long int) var_9);
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_3)))))) : (max((((((/* implicit */int) (unsigned short)13149)) >> (((((/* implicit */int) var_13)) - (19))))), (((/* implicit */int) (signed char)-74))))));
}
