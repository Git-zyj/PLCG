/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225628
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
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)15))))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((max(((~(var_5))), (((/* implicit */long long int) ((unsigned char) var_11))))) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    var_21 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((-551754705735609659LL) ^ (-551754705735609636LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) ((unsigned char) -551754705735609636LL)))))) : (4294967290U)));
        var_22 &= ((/* implicit */_Bool) (unsigned char)161);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 551754705735609623LL)) || (((/* implicit */_Bool) arr_1 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34765)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
    }
}
