/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40065
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
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((/* implicit */int) var_12)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) (unsigned char)153))))) : (((unsigned long long int) -8589380342631251266LL))));
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_8), ((unsigned short)46393))))))) ? ((~(arr_0 [(signed char)2] [(signed char)2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [8ULL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))));
        arr_4 [i_0] [i_0] = (((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)28063)) : (((/* implicit */int) arr_1 [i_0])))))) != (((((/* implicit */int) (signed char)-81)) & (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-9223372036854775807LL - 1LL)))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (signed char i_4 = 4; i_4 < 20; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] = ((/* implicit */int) ((unsigned int) (unsigned short)42117));
                        arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 18128400446991781750ULL))) - (((/* implicit */int) var_7))));
                        arr_18 [i_2] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6699)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (361664809U)));
                        arr_19 [i_1] [i_1] [i_2] [i_4 - 3] = ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        } 
    }
}
