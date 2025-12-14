/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45298
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
    var_15 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) var_11)) - (396))))));
    var_16 = ((/* implicit */long long int) ((max((((/* implicit */long long int) max((var_6), (((/* implicit */short) (unsigned char)4))))), (((long long int) (_Bool)1)))) <= (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((8388607LL) * (((/* implicit */long long int) (+(((/* implicit */int) (short)3638))))))) / (min((((/* implicit */long long int) ((unsigned int) var_1))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) : (var_13))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [10U] |= ((/* implicit */long long int) 6899767395257818163ULL);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (short)1022);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (short)1022)) == ((-(((/* implicit */int) arr_3 [i_2] [i_0 - 3])))))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)36213)))) % (arr_2 [(short)1] [i_1] [i_1]))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((_Bool) var_10))))))));
}
