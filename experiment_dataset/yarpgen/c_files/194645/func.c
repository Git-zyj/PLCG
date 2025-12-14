/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194645
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51646)) ? (((/* implicit */int) (unsigned short)43519)) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) (short)-24576)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) < (((/* implicit */int) (unsigned short)13890))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [(signed char)12] [i_0 - 1] &= ((/* implicit */unsigned short) 36024398972452864ULL);
                        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)51647), ((unsigned short)10693))))) : (((unsigned int) min((((/* implicit */unsigned int) (unsigned short)13889)), (3128613215U))))));
                        arr_14 [i_0] [i_0] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)60242)), (((((((/* implicit */int) (short)-15939)) + (2147483647))) << (((((/* implicit */int) (unsigned char)3)) - (3)))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2911803132U))))) ? (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])) == (((/* implicit */int) (unsigned short)51646)))))) : (0U)))) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (short)15939)));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] |= ((/* implicit */unsigned char) (unsigned short)13890);
        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) (_Bool)0))))) ? (((-1877074283) & (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */int) (unsigned char)30)) % (((/* implicit */int) (signed char)19)))))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    var_22 = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */short) min((((unsigned int) arr_6 [i_4] [i_5])), (((/* implicit */unsigned int) var_3))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)36)) ? (var_9) : (((/* implicit */int) (signed char)19)))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (var_7))))) ? ((~((+(((/* implicit */int) (unsigned short)7)))))) : (1877074282))))));
                var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5] [i_5])))))));
                var_26 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_4] [i_4] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_2 [i_4])))) != (((/* implicit */int) ((unsigned short) arr_9 [i_4] [i_5] [1ULL] [i_4] [i_4] [i_4]))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) 4662837664746214229ULL)) || (((/* implicit */_Bool) (unsigned short)61495))))), (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) (unsigned short)15826)) : (((/* implicit */int) arr_2 [i_4])))))) : (max(((-(((/* implicit */int) (short)-24557)))), (((/* implicit */int) ((unsigned char) (short)-7745)))))));
            }
        } 
    } 
}
