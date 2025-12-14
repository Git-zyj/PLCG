/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21101
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
    var_11 = ((((/* implicit */_Bool) ((var_2) >> (((var_6) - (3712764529489330534ULL)))))) ? (max((var_1), (max((3583368581245106980ULL), (var_6))))) : ((~(15849880752086780676ULL))));
    var_12 = var_0;
    var_13 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (max((((((/* implicit */_Bool) var_1)) ? (var_6) : (var_6))), (((((/* implicit */_Bool) 1495169405279928280ULL)) ? (6635170602809978328ULL) : (var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [19ULL] [i_2] [i_0] = ((((max((14863375492464444661ULL), (5480427294709108542ULL))) * (((0ULL) >> (((3207877797400125675ULL) - (3207877797400125636ULL))))))) >> (((unsigned long long int) (!(((/* implicit */_Bool) var_1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] [i_0] = max((min(((+(var_2))), (((((/* implicit */_Bool) var_0)) ? (12209269275799476283ULL) : (14095801498943225488ULL))))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (arr_6 [19ULL] [i_1] [19ULL]))));
                                var_14 = ((/* implicit */unsigned long long int) ((1ULL) != (14863375492464444635ULL)));
                                var_15 = 15238866276309425928ULL;
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((min((var_4), (((((/* implicit */_Bool) var_5)) ? (var_3) : (16997650170239088468ULL))))) != (3583368581245106954ULL)));
                            }
                        } 
                    } 
                    var_16 = (+((+(var_5))));
                }
            } 
        } 
    } 
    var_17 = var_5;
}
