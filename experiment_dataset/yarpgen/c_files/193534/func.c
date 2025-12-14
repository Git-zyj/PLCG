/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193534
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_3)), (max((((var_12) >> (((var_14) - (10540354054175218608ULL))))), (((/* implicit */unsigned long long int) ((int) var_12)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((arr_0 [i_0 - 1] [i_0]), (((/* implicit */long long int) var_11))));
        var_17 = (-(min((((/* implicit */unsigned long long int) ((long long int) 3303124209342284132LL))), ((-(var_12))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) -7892469119287482148LL)), (10549732042662370458ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4418242249546409021LL)) ? (-2877704745549565238LL) : (-4418242249546409021LL))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)24))))) : (((((/* implicit */_Bool) 4418242249546409021LL)) ? (12698402109424965087ULL) : (((/* implicit */unsigned long long int) 1738669845))))))));
        var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
        var_19 = ((unsigned long long int) (-(arr_1 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1237799768343097975LL))))))))));
                        var_21 = var_9;
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned long long int) 2985656814433383016LL);
        var_22 = ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_5] [i_5]) : (-3744665150417928522LL));
        arr_18 [i_5] = ((/* implicit */long long int) var_14);
        arr_19 [i_5] = ((((/* implicit */_Bool) (-(var_4)))) ? (arr_15 [i_5]) : (((/* implicit */unsigned long long int) 451208120201475790LL)));
    }
    var_23 ^= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)33)) % (((/* implicit */int) (unsigned char)67))))) | (((long long int) 451208120201475784LL)))), (var_2)));
    var_24 ^= ((/* implicit */long long int) var_1);
}
