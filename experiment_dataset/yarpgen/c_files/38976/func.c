/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38976
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) 3864021430U);
            var_14 = ((/* implicit */short) max((((/* implicit */int) arr_4 [(unsigned char)0])), (((((/* implicit */int) var_8)) >> ((((~(((/* implicit */int) var_10)))) + (41603)))))));
        }
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) > (1238667161U))))) ? (7705604750402182406ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (var_3)))))));
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (((~(var_11))) == (697371091382450398LL))))) < (max((((((/* implicit */long long int) 1238667162U)) & (-1171548951599118594LL))), (-1171548951599118591LL)))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
