/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214550
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((max((max((-792267036), (((/* implicit */int) var_10)))), (((/* implicit */int) max((var_0), ((unsigned char)179)))))), (((/* implicit */int) var_7)))))));
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 978708837422651073LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_11) ? (((/* implicit */unsigned long long int) var_1)) : (arr_1 [i_0] [2LL]))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (short)0))))))));
        var_18 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) (unsigned char)186)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-56);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] = ((/* implicit */int) max(((-(3101880514U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) (short)18)) : (((/* implicit */int) (unsigned char)37))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */unsigned int) ((short) 1193086777U));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_23 [i_5] = 3101880526U;
                        arr_24 [i_5] = ((unsigned int) var_10);
                    }
                } 
            } 
        } 
        arr_25 [i_4] = (unsigned char)186;
        arr_26 [i_4] [2ULL] = (!(((/* implicit */_Bool) arr_1 [i_4 - 2] [i_4])));
        var_21 = ((/* implicit */unsigned int) (short)-20217);
    }
    var_22 = ((/* implicit */short) var_9);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((3101880514U), ((-(1193086781U)))))));
}
