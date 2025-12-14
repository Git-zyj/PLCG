/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200123
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)5486)))))));
    var_13 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) var_8)) - (((/* implicit */int) var_5)))), (((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_14 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1662436714)) ? (-1662436731) : (431615244)))) * (min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0 + 2] [i_0 + 1])))));
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)231)) ? (2925104994291558669LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))));
        var_16 = ((/* implicit */unsigned long long int) (short)-1560);
        var_17 = (+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    {
                        var_18 += ((/* implicit */unsigned long long int) ((_Bool) (signed char)-113));
                        var_19 += ((/* implicit */short) (~(-1662436688)));
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) (~(-1662436719)));
            arr_18 [i_2] [i_2 - 1] [i_3] = ((/* implicit */_Bool) ((long long int) arr_7 [i_2]));
        }
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_21 = ((/* implicit */long long int) var_8);
            var_22 = ((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_2] [i_2]);
        }
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_23 = ((/* implicit */short) ((unsigned long long int) -431615244));
            var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)768))) & (arr_21 [i_2 - 1])));
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)31)) <= (((/* implicit */int) (signed char)-110))));
            /* LoopNest 3 */
            for (signed char i_8 = 1; i_8 < 24; i_8 += 3) 
            {
                for (long long int i_9 = 3; i_9 < 24; i_9 += 3) 
                {
                    for (int i_10 = 1; i_10 < 21; i_10 += 2) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned int) (~(var_7)));
                            arr_31 [i_2] [i_10] = ((/* implicit */signed char) var_9);
                            arr_32 [i_2] [i_2] [1ULL] [i_8] [i_9] [i_10 + 1] = ((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_8 - 1] [i_10]);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))));
        }
        arr_33 [i_2] [4LL] = ((/* implicit */unsigned short) arr_30 [i_2 - 1]);
    }
}
