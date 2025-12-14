/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249804
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
    var_13 = ((/* implicit */long long int) -1);
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_8))));
    var_15 = var_12;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (unsigned short)13022)) - (13016))))) >= (((/* implicit */int) ((139611588448485376ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))));
        var_17 = ((/* implicit */long long int) var_10);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4 + 3] = ((/* implicit */unsigned int) var_11);
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_9 [i_1] [i_0] [(unsigned short)22] [i_1 + 2] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1] [i_0] [i_0] [21U] [i_1 + 3] [i_1 + 2]))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */_Bool) (signed char)0);
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned int) var_9);
                        arr_15 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [(short)22] [(short)22] [i_5 + 3]);
                    }
                    for (long long int i_6 = 2; i_6 < 23; i_6 += 3) 
                    {
                        arr_19 [i_0] [22U] [i_0] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4294967295LL)))) ? (((var_4) + (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_21 = ((/* implicit */int) (+(((268434944U) + (((/* implicit */unsigned int) 0))))));
                        var_22 = ((/* implicit */short) ((unsigned long long int) var_0));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 1) 
                        {
                            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83)))))) || (((/* implicit */_Bool) var_9))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)13017)) : (((/* implicit */int) (unsigned short)52541))));
                            var_25 = ((/* implicit */signed char) ((arr_7 [i_0] [i_1 - 1] [i_2] [i_2]) | (arr_7 [i_0] [i_1 + 3] [i_2] [i_6])));
                            var_26 ^= var_5;
                        }
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (524288U)))) ? (max((((/* implicit */int) var_7)), (101100561))) : (((/* implicit */int) ((_Bool) var_6)))))));
}
