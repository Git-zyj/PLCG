/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198631
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) 891936740U);
                arr_5 [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 891936757U)) & (4173850996712538442ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [i_1]) : (-2147483637))))))));
            }
        } 
    } 
    var_11 = max((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) -1118741431)), (var_1))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & (((((/* implicit */_Bool) -1118741413)) ? (-1118741433) : (134152192))))));
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((((/* implicit */_Bool) ((var_5) % (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(1118741419)))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) + (-404850801040506619LL)))) ? (((/* implicit */long long int) min((var_2), (134152202)))) : (((((/* implicit */long long int) 4294967284U)) - (1645027781610908517LL))))));
}
