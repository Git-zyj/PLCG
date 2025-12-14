/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33369
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
    var_12 = (!(((/* implicit */_Bool) var_5)));
    var_13 = ((/* implicit */unsigned char) var_7);
    var_14 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
                    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) >= (((((/* implicit */_Bool) 2708068247293726966ULL)) ? (arr_1 [(signed char)7]) : (-787094079542214408LL)))))) <= (((/* implicit */int) (((-(arr_8 [i_2] [i_1 + 2] [i_0 + 1]))) > ((+(-787094079542214387LL))))))));
                    var_17 = ((/* implicit */unsigned char) (+(((((unsigned int) var_11)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((int) var_5))))) ? (((int) var_1)) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))) >= (4095ULL)))) + (((/* implicit */int) (_Bool)1))))));
                                var_19 = ((/* implicit */unsigned char) 787094079542214386LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
