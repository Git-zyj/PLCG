/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208353
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 = 0ULL;
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))) : (var_5))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                                var_17 = arr_12 [i_0] [i_0] [i_0] [13] [i_0] [13] [i_0];
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_19 |= ((/* implicit */signed char) (_Bool)0);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) + (arr_14 [i_0] [i_1] [i_5] [i_6])));
                                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 + 1] [i_1] [i_5]))) % ((~(6724985272512849809ULL)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [i_1] [i_1]));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(signed char)11] [i_1] [i_1])) ? (arr_6 [(unsigned char)20]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))))));
                }
                var_24 *= ((/* implicit */unsigned short) 0LL);
                /* LoopNest 3 */
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) -2LL);
                                var_26 = ((/* implicit */signed char) min((arr_27 [i_0] [i_8] [i_9] [i_10]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) var_4)))))));
                                var_27 = ((/* implicit */signed char) ((((((/* implicit */int) arr_21 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_1])) << (((var_2) - (648507589U))))) > ((~(((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 2147483647))))), (var_14)));
    var_29 = ((/* implicit */unsigned char) min((0LL), (2LL)));
}
