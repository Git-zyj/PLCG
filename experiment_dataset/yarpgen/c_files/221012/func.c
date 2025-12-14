/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221012
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) ((_Bool) (unsigned char)76))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned int) (-(max((((/* implicit */unsigned int) arr_1 [(unsigned char)3])), (var_0)))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_14 = ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))) == (2181158025U))) ? (1410085820U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 2]))))) << (((min((var_4), (((/* implicit */long long int) arr_3 [i_1 + 1])))) + (4329215629441409680LL))));
        arr_5 [i_1] [i_1 + 1] |= ((/* implicit */short) ((((/* implicit */int) min((arr_3 [i_1 - 3]), (arr_3 [i_1 + 1])))) / (((int) (unsigned char)63))));
        var_15 = ((/* implicit */unsigned char) ((unsigned int) ((int) arr_4 [i_1 - 3] [i_1 - 3])));
        var_16 = ((/* implicit */short) arr_4 [i_1 + 1] [8ULL]);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_7 [i_3])))));
                var_18 = ((/* implicit */_Bool) 1423708650);
            }
        } 
    } 
}
