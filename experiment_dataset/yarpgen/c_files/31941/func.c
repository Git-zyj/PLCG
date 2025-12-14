/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31941
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-27197)), ((-(var_9)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~((~(((/* implicit */int) (short)27205))))))) | (((max((((/* implicit */long long int) (_Bool)0)), (arr_2 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)27205)), (var_7)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28017)) && (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_1 - 2]))))));
            var_14 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27192)) ? (33409823) : (((/* implicit */int) (unsigned char)121))))));
            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1] [i_0 - 1]) : (((/* implicit */int) (unsigned short)65535)))))));
            var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((-1940543336) != (((/* implicit */int) (short)30434)))));
        }
        for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) 6114353895688473546LL);
            var_18 = ((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_0 + 1] [i_0]);
        }
        var_19 ^= ((/* implicit */unsigned int) ((signed char) arr_4 [i_0] [i_0] [(signed char)5]));
    }
    var_20 = ((/* implicit */signed char) ((short) (short)-27192));
}
