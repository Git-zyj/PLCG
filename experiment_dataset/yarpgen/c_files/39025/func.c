/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39025
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) 7U))));
        arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))) ? (-251754830) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0])))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) (unsigned short)13644)), (251754829)))));
        var_19 = ((/* implicit */_Bool) max((67108736), (251754829)));
    }
    var_20 = ((/* implicit */signed char) 251754829);
    var_21 = ((((/* implicit */_Bool) ((((251754829) & (((/* implicit */int) var_17)))) << (((((((/* implicit */int) (unsigned short)35077)) | (-1362415217))) + (1362380405)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -67108751)) && ((_Bool)1)))) > (max((251754837), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((var_5) && (((-67108736) < (((/* implicit */int) (unsigned short)65523))))))));
}
