/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206943
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) > (3781911961U)))) <= (((/* implicit */int) ((4636081845486237048ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((max((((/* implicit */unsigned long long int) var_7)), (var_10))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((13810662228223314575ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) 13810662228223314560ULL))));
                arr_6 [i_0 - 3] [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_7)) >> (((var_3) - (1602914199118656053LL))))) <= (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_10))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -361186990)), (var_10)))) ? (((((/* implicit */_Bool) (short)1353)) ? (3241661776543019070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1155249651U)) ? (((/* implicit */int) (short)31230)) : (-2038746774))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (max((((long long int) var_6)), (max((((/* implicit */long long int) var_5)), (var_0))))) : (((/* implicit */long long int) ((517749936) & (((/* implicit */int) ((arr_5 [i_0] [i_1]) > (((/* implicit */int) var_2)))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19604))))) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_7))));
}
