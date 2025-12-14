/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229516
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_11 [5U] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (unsigned char)63);
                                arr_12 [i_4] [i_4] [i_3 - 2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) 1582337501);
                                arr_13 [i_4 - 1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) -2631929862026486039LL));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2631929862026486058LL)) && (((/* implicit */_Bool) arr_7 [i_3 + 2] [i_3] [i_3] [i_3])))))) : (((long long int) ((((/* implicit */_Bool) 2631929862026486034LL)) ? (arr_7 [i_3] [i_3] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_18 [9LL] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)35956)))));
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1748738336)) ? (((/* implicit */unsigned int) -1339779312)) : (1659980875U))))));
                            arr_19 [i_6] [i_5] [i_1] = ((/* implicit */unsigned int) (~((-(var_4)))));
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_19 = ((/* implicit */_Bool) -1339779318);
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (~(2631929862026486041LL))))) ? (min((((var_14) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_6] [i_5] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) 1582337476))))))) : (min((((arr_15 [i_0] [i_0] [i_5] [i_6]) >> (((((/* implicit */int) (signed char)-18)) + (25))))), (((/* implicit */int) var_5))))));
                            }
                        }
                    } 
                } 
                arr_22 [i_0] [i_1] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_1 - 2] [i_1] [9] [i_0])) : (((/* implicit */int) var_13))))), (var_9));
            }
        } 
    } 
    var_21 += (((-((+(((/* implicit */int) var_2)))))) / ((~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)15798)) : (((/* implicit */int) var_15)))))));
    var_22 = ((/* implicit */unsigned short) var_3);
    var_23 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned short)25938))))))));
}
