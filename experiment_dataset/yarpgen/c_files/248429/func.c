/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248429
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
    var_18 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6039287163043768599LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_11)))))) || (((/* implicit */_Bool) (-(((-6039287163043768620LL) / (((/* implicit */long long int) -11687617)))))))));
    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) 3857557022U)) ? (((/* implicit */unsigned int) -574412123)) : (11U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) (+((-(262143U)))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_21 |= max((((/* implicit */long long int) min((1522359211U), (4294967285U)))), (((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1] [i_2 - 1])) ? (arr_3 [i_2] [i_2] [i_2 - 1]) : (((/* implicit */long long int) 262137U)))));
                            var_22 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (1522359211U))))))), (0U)));
                            var_23 = ((/* implicit */int) arr_2 [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 ^= (!(((/* implicit */_Bool) var_0)));
}
