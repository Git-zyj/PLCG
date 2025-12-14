/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/393
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
    for (int i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_20 -= ((/* implicit */signed char) -1627136547);
            var_21 = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)31)) && (((/* implicit */_Bool) arr_1 [i_1 - 2]))))));
        }
        var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((-1627136537) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (int i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)17181), (((/* implicit */unsigned short) max((arr_2 [i_2] [i_2] [i_2]), ((short)8192))))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) (unsigned char)243))))));
        arr_6 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)94)), (-1293789151)))) && (((/* implicit */_Bool) max((arr_5 [i_2]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 585998271))))))))));
    }
    var_24 = ((/* implicit */long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) 1627136547))))))), (var_11)));
}
