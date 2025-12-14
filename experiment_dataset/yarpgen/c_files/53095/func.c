/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53095
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [(signed char)12] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [i_1 + 1] [i_2] [i_2 + 1]);
                        arr_13 [i_0] [i_0] [i_0] = min((((/* implicit */int) (unsigned short)16320)), ((-(((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_11 [(signed char)4] [i_3])))))));
                    }
                } 
            } 
        } 
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49202)) || (((/* implicit */_Bool) 574629926U))));
    }
    var_18 |= ((/* implicit */unsigned char) (unsigned short)663);
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_19 [i_4] [i_4] [i_6]);
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_26 [i_4] [i_6] = ((/* implicit */unsigned int) (unsigned short)16334);
                                var_20 = ((/* implicit */_Bool) 8439619595110116185ULL);
                            }
                        } 
                    } 
                    arr_27 [i_4] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_4]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_6))))) >> (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_16)))) - (100))))))));
}
