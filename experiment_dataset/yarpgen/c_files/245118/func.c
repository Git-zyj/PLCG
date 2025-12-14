/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245118
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
    var_20 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) 2498428615U));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                        arr_12 [i_0] [i_3] [i_3] [11] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)56955)) == (((/* implicit */int) var_19)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)51682)) >= (arr_2 [i_0]))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_19))));
        }
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    arr_19 [i_4] [4LL] [i_5] |= ((((/* implicit */int) arr_14 [i_0])) / (arr_1 [i_0]));
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 + 1]))) : (arr_0 [i_4])));
                        arr_23 [i_0] [i_4] [i_5] [i_4] [i_0] [(unsigned short)4] = ((arr_13 [i_0] [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)27338)))) <= (((/* implicit */int) var_19))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) (+(-487895913)));
                    }
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */_Bool) (~(arr_1 [i_0])));
        var_25 = ((/* implicit */signed char) (!((!(var_19)))));
    }
}
