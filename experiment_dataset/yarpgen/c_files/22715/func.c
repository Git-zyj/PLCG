/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22715
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
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 += ((/* implicit */int) (!(((/* implicit */_Bool) -3LL))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_8))));
                            var_16 = ((/* implicit */long long int) var_7);
                            var_17 = ((/* implicit */unsigned short) max((((((14822970495236446100ULL) & (6097047713949514955ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            arr_16 [i_4] [i_4 + 2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3631148781U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756))) : (min((0ULL), (6097047713949514932ULL)))));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 19; i_6 += 3) 
            {
                for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min(((-(var_11))), (((((/* implicit */_Bool) var_1)) ? (arr_15 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            var_19 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) arr_24 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_5] [i_5]);
            var_21 = ((/* implicit */unsigned short) var_8);
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) && ((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (-898653711184779287LL))))))));
                        arr_30 [i_4] [i_5] [i_9] [i_10] = ((/* implicit */unsigned short) ((short) (!(var_7))));
                    }
                } 
            } 
        }
        for (unsigned char i_11 = 2; i_11 < 20; i_11 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_12 = 3; i_12 < 21; i_12 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                var_25 ^= ((/* implicit */unsigned char) var_9);
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_32 [i_12 - 2] [i_4] [i_12]))));
                var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_17 [i_4 - 1] [i_4] [i_12 + 1]))));
            }
            var_28 = ((/* implicit */int) ((12349696359760036661ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (295403232U)))))));
        }
        var_29 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_4))))), (max((295403232U), (((/* implicit */unsigned int) ((unsigned char) 285833825U)))))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) var_2)) ^ (var_11))))) >> (((((/* implicit */int) ((short) (unsigned short)7844))) - (7844))))))));
    }
    var_31 += ((/* implicit */long long int) var_10);
}
