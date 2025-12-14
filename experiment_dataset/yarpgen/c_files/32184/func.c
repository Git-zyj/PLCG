/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32184
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
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_13))) == (((/* implicit */int) max((((/* implicit */short) var_13)), ((short)-1)))))))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((+(-457082102))), ((-(((/* implicit */int) var_6))))))), (max((((/* implicit */unsigned long long int) max((1372570997U), (((/* implicit */unsigned int) (short)24285))))), (var_8)))));
    var_17 = ((/* implicit */signed char) max(((+(min((11955721441019886258ULL), (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) max((3372962U), (((/* implicit */unsigned int) ((signed char) var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [0LL] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3340035810U)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4 - 1])) : (((/* implicit */int) arr_6 [19] [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [19LL] [i_2] [19LL] [i_2] [i_0] [i_0]))) - (8361322288277985381ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)3167)))))));
                                arr_17 [i_0] [12ULL] [i_0] [i_0] [12U] = ((((((/* implicit */_Bool) (+(3340035810U)))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 954931487U)))) + (((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)24309)) / (((/* implicit */int) var_7)))), (2147483647)))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3340035823U)) ? (((/* implicit */int) arr_8 [(signed char)15])) : (((/* implicit */int) (short)-1))));
            }
        } 
    } 
}
