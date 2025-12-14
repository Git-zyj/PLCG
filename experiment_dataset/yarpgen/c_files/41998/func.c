/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41998
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) + (max((var_10), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2 + 1] [i_1])))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) var_13));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-5287)), (((var_7) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 8; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-5287))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), (min((((/* implicit */unsigned long long int) arr_23 [i_5] [i_4 - 1] [i_5] [i_5])), (arr_1 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 2] [i_6] [i_7])))));
                                arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_5] [i_6] [i_5] [i_5]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) (signed char)-105);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 4) 
                {
                    arr_33 [i_8] [i_9] [i_9] [i_10 - 3] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)56)) ^ (((/* implicit */int) ((_Bool) arr_27 [i_8]))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(min((((/* implicit */long long int) var_11)), (arr_3 [i_8] [i_10 - 3] [i_8]))))))));
                    arr_34 [i_8] [i_9] [i_10] [i_8] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) max((arr_7 [i_8] [i_9]), (((/* implicit */int) arr_9 [i_8] [i_9]))))) : (((var_10) & (((/* implicit */long long int) ((/* implicit */int) (short)-5287)))))))));
                }
                for (unsigned short i_11 = 2; i_11 < 18; i_11 += 1) 
                {
                    var_20 += ((/* implicit */unsigned char) ((long long int) max((-6209863389029749412LL), (((/* implicit */long long int) (unsigned short)1321)))));
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) (unsigned char)53)), (arr_30 [i_9]))))))));
                    arr_37 [i_8] [i_8] = (_Bool)0;
                }
                var_22 = (!(((((/* implicit */_Bool) (unsigned char)191)) && ((_Bool)1))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((unsigned long long int) ((signed char) ((1549123603) | (((/* implicit */int) var_6))))));
}
