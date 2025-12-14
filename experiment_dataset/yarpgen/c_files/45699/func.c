/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45699
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483638)) ? (max(((((_Bool)1) ? (var_18) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)243)))) : (var_9)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_18)), (max((((/* implicit */long long int) (~(var_3)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8818355038840906440LL)))))));
                                arr_11 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) min((min((-7589846707536480839LL), (9223372036854775807LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7589846707536480838LL)) ? (((/* implicit */long long int) 1560852944)) : (7589846707536480838LL)))) ? (((var_12) ? (((/* implicit */long long int) var_7)) : (-7589846707536480827LL))) : (min((var_16), (((/* implicit */long long int) var_1))))))));
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */int) var_12)) : (((int) min((7908031060940300141ULL), (((/* implicit */unsigned long long int) 7589846707536480838LL))))));
                    arr_12 [i_2] [8] [i_0] = ((/* implicit */unsigned int) -7589846707536480827LL);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (signed char)-41)))), (max((((/* implicit */int) (unsigned char)204)), (744977583)))))) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)12))))) : (((((/* implicit */_Bool) -3721934158735991428LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-7589846707536480839LL))))) : (((((/* implicit */long long int) min((-1772129648), (var_9)))) / (max((var_16), (((/* implicit */long long int) (unsigned char)45))))))));
}
