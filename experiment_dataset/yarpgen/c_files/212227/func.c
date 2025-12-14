/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212227
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
    var_18 = ((/* implicit */int) var_11);
    var_19 = ((/* implicit */int) ((var_14) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1940643615) : (((/* implicit */int) var_2))))) ? (-40148014) : (min((-40148014), (-40148014))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = max((max((4087425149797106558LL), (((/* implicit */long long int) 40148002)))), (((/* implicit */long long int) ((_Bool) (_Bool)0))));
                arr_5 [i_1] [6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 40148014)) ? ((+(-40147997))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)50893))))));
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) == (1779483349))))));
            }
        } 
    } 
}
