/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239705
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
            arr_7 [i_1] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = var_0;
                        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (short)-5467))));
                    }
                } 
            } 
        }
        for (int i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            arr_15 [i_4 + 1] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_4 + 3] [i_0]))))) ? (((((arr_10 [i_4 + 2] [6LL] [i_4 - 1] [i_4] [i_0] [i_0]) >= (((/* implicit */int) var_0)))) ? (var_7) : (((((/* implicit */int) (signed char)-59)) - (((/* implicit */int) (signed char)-63)))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_8)), (var_6)))))));
            var_11 = ((/* implicit */long long int) (+(max((((/* implicit */int) ((990807279) < (-990807280)))), ((~(((/* implicit */int) var_0))))))));
            var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
            var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), ((((+(3204588336206645664LL))) % (((/* implicit */long long int) (+(((/* implicit */int) (signed char)59)))))))));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) arr_0 [i_0]));
    }
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3204588336206645646LL))));
}
