/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242992
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((max((1114062503463836032LL), (var_1))) << (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -3951740929731108677LL))))))) >= (var_6))))));
    var_13 -= ((/* implicit */long long int) 1296559012U);
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8745403170613566097LL)) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) (short)31750)) ? (2729580231755249447LL) : (2729580231755249435LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)2737))) % (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5554))) > (1114062503463836036LL)))), (var_7)))));
            }
        } 
    } 
}
