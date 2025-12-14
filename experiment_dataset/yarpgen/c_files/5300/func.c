/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5300
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_1 [4])) != (((((/* implicit */_Bool) (short)-32738)) ? (var_8) : (((/* implicit */unsigned int) arr_1 [(signed char)0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_3] [i_4]))));
                                var_15 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1)) >= (((/* implicit */int) arr_0 [i_4 + 1] [i_4]))))), ((-(13758264407628061980ULL)))));
                                var_16 &= ((/* implicit */unsigned short) ((max((min((var_4), (((/* implicit */unsigned long long int) var_10)))), (min((((/* implicit */unsigned long long int) var_8)), (var_11))))) >> (((((max((4688479666081489635ULL), (((/* implicit */unsigned long long int) 2189951161U)))) << (((((4688479666081489636ULL) << (((4688479666081489652ULL) - (4688479666081489630ULL))))) - (15752003220739719106ULL))))) - (13835058055282163694ULL)))));
                                var_17 = ((/* implicit */unsigned short) ((2168975570U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32763)))));
                                arr_13 [i_0] [i_0] = (~(max((var_2), (((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (var_5) : (var_8)))));
}
