/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2759
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(var_4)));
        var_18 = ((/* implicit */short) 7458233491351689851LL);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((int) var_8));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((((/* implicit */int) (unsigned char)145)) - (145))))) >> (((arr_4 [i_2 + 2]) - (7330279524619458652ULL)))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-114)) - ((-(((/* implicit */int) (short)-1023)))))) - (((/* implicit */int) var_6))));
    var_21 &= ((((((/* implicit */_Bool) min((5039270770056233683LL), (((/* implicit */long long int) (signed char)109))))) || ((!(((/* implicit */_Bool) 4577478900552262590LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)103)) || (((/* implicit */_Bool) ((-9088086711983894531LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)16456))))))))) : (((((/* implicit */int) var_16)) / (max((((/* implicit */int) var_10)), (-532226499))))));
    var_22 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) -9088086711983894520LL)))));
    var_23 = ((/* implicit */long long int) max((max((max((((/* implicit */int) var_7)), (-1339468247))), (1637211992))), (((/* implicit */int) (short)28825))));
}
