/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206184
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3166121828020812710LL)) ? (((arr_4 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10))) : (var_0)));
                    arr_9 [i_2] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (+(var_4)))) || (var_11));
                    var_14 = ((long long int) var_8);
                }
                for (long long int i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_3]))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? ((~(((/* implicit */int) (unsigned char)136)))) : (((/* implicit */int) var_3))))) ? (var_12) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))), ((~(var_5))))))));
                }
                var_17 = min((var_4), (((/* implicit */long long int) var_2)));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) (signed char)85)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_11))))))) < (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((((/* implicit */_Bool) -8695933501078379385LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))) << (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6)))) ? (var_10) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5))))) - (2776919812U)))));
}
