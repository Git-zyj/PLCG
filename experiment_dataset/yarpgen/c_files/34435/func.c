/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34435
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
    var_14 = ((((((/* implicit */_Bool) 1767156625)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)198)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16882))))))) ? (((/* implicit */long long int) (((((_Bool)1) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) 1767156625)))) << (((((450041496866016362LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57273))))) - (450041496865959083LL)))))) : (min((((/* implicit */long long int) ((signed char) var_13))), (((-1222387242395471637LL) / (((/* implicit */long long int) 3257965863U))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : ((~(((/* implicit */int) var_3)))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_6);
}
