/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49375
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)175))))) : (((((/* implicit */_Bool) var_6)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (short)-20926))))))) > (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (signed char)-7))) - (((arr_2 [i_0]) - (((/* implicit */int) (short)-6429)))))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((int) arr_3 [i_1 - 1] [12])) >> ((((~(arr_6 [i_1 - 2] [i_1] [i_1 + 1] [i_1]))) + (7111463508000163026LL))))))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (2185283731U))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 925515219U)) ? (((/* implicit */int) (short)21759)) : ((+(((/* implicit */int) var_11))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_3]))))));
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1564829519)) != (((unsigned long long int) (!(((/* implicit */_Bool) -1LL)))))));
    }
}
