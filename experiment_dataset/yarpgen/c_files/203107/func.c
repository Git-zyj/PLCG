/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203107
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */short) min((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)176)) && (((/* implicit */_Bool) (unsigned char)17))))) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) : (arr_1 [i_1]))) - (151LL))))), (((((/* implicit */int) (unsigned char)80)) & (((/* implicit */int) (unsigned char)90))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((4787425020932427577LL), (((/* implicit */long long int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))) : (((/* implicit */int) arr_2 [i_1] [i_1]))));
        }
        arr_6 [i_0] = arr_1 [i_0];
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 7; i_3 += 1) 
        {
            {
                arr_12 [8LL] [i_3 + 1] [i_3 - 3] = ((/* implicit */unsigned short) var_10);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_19 [i_4] [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (unsigned short)65535);
                            var_19 = ((/* implicit */signed char) (~((-(((((/* implicit */int) (short)23612)) ^ (((/* implicit */int) (signed char)-3))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (long long int i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (var_1)));
                            arr_26 [i_7 + 1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) 2954573212813265006LL);
                        }
                    } 
                } 
            }
        } 
    } 
}
