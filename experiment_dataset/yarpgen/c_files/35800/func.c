/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35800
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-61))));
                    var_18 = ((/* implicit */unsigned long long int) ((3893719272U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_3] [i_4] [i_0] [i_6] = ((/* implicit */long long int) ((((arr_15 [i_0] [i_3] [i_4] [i_5 - 2]) | (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6353)) - (((/* implicit */int) (signed char)-112)))))));
                                var_19 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_3] = ((/* implicit */unsigned char) (~(7912761375533705082ULL)));
                    arr_22 [(unsigned short)4] [i_3] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-27504))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 4; i_7 < 14; i_7 += 4) 
        {
            var_20 += ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_9 [i_0] [i_0]))))));
            arr_25 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 541959803U))));
        }
    }
    var_21 = ((/* implicit */signed char) var_3);
}
