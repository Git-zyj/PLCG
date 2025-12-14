/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223696
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) (signed char)79);
                arr_5 [i_0] = ((signed char) arr_3 [i_0] [i_1]);
                var_19 = ((/* implicit */short) max((((arr_0 [i_0]) ^ (arr_0 [i_1]))), (((/* implicit */int) (unsigned char)187))));
                arr_6 [i_1] |= ((/* implicit */int) ((((long long int) max((610545358), (((/* implicit */int) (signed char)8))))) - (((/* implicit */long long int) -610545346))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) 0);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -610545345)) ? (-807578031) : (((/* implicit */int) (unsigned char)254)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) (unsigned char)65)))) && (arr_10 [i_2] [i_2])))) : (((arr_7 [i_2] [i_2]) ? (610545346) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) (signed char)-22)))))))));
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_2] [i_2])) & (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) (signed char)13))))) ? (((/* implicit */int) ((-610545345) < (((/* implicit */int) arr_8 [i_2]))))) : (((((/* implicit */_Bool) -1487542980)) ? (((/* implicit */int) arr_8 [(unsigned char)17])) : (((/* implicit */int) (signed char)8))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-10)) % (((/* implicit */int) (unsigned char)65))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) 2147483637))), ((unsigned char)187))))));
    }
    var_22 = ((/* implicit */short) ((min((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_9)))))) | ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
}
