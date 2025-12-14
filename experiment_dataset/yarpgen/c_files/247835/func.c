/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247835
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
    var_20 = var_2;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_2] &= ((/* implicit */unsigned long long int) ((var_18) + (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)49))))));
                    var_21 = ((((2282232102U) | (((/* implicit */unsigned int) ((/* implicit */int) ((2115648509U) == (2012735184U))))))) % (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 4029385759U)) || (((/* implicit */_Bool) 265581536U))))) & (((/* implicit */int) (unsigned char)49))))));
                    var_22 = ((/* implicit */unsigned int) ((int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (short i_4 = 4; i_4 < 8; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_23 = var_13;
                    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) & (var_3)))), (var_2)));
                    arr_15 [i_4] [i_4] &= ((/* implicit */unsigned int) var_4);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((int) ((unsigned short) (unsigned char)233))))));
                }
            } 
        } 
    } 
    var_26 = var_13;
    /* LoopSeq 3 */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
    {
        arr_18 [i_6] [i_6] = ((/* implicit */unsigned int) ((4294967275U) < (((/* implicit */unsigned int) -1482521991))));
        var_27 ^= ((unsigned long long int) var_18);
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (unsigned int i_9 = 3; i_9 < 21; i_9 += 1) 
                {
                    {
                        arr_28 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) & (((((var_8) >> (((var_6) - (10381872875302194333ULL))))) | (((/* implicit */unsigned long long int) var_10))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((signed char) max((((short) var_2)), (((/* implicit */short) ((((/* implicit */int) var_19)) < (((/* implicit */int) var_4)))))))))));
                        arr_29 [i_6] = ((4128768U) | (1642518801U));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
    {
        var_29 &= ((/* implicit */unsigned char) ((max((var_8), (var_0))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_19))))));
        var_30 = ((/* implicit */signed char) var_15);
        var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) >= (((unsigned int) var_0)));
        arr_32 [i_10] = ((((/* implicit */unsigned int) var_10)) + (var_2));
        arr_33 [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (var_8))) <= (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_17))))))));
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        arr_37 [i_11 + 1] = ((/* implicit */signed char) ((((var_18) + (2147483647))) >> (((((/* implicit */int) var_4)) - (44798)))));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 2012735193U)) <= (var_0)))) * (((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) var_3)))))));
        var_33 = ((/* implicit */long long int) min(((unsigned char)46), ((unsigned char)49)));
    }
}
