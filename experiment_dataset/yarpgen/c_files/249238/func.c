/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249238
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 398587893484477867ULL)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) min(((unsigned short)45272), ((unsigned short)20252)))))))));
                    var_13 = min((max((((((/* implicit */_Bool) (unsigned short)9082)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0)))), (((((/* implicit */_Bool) (unsigned short)20264)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)45257)))))), (min(((-(((/* implicit */int) (signed char)-87)))), (((/* implicit */int) arr_0 [i_1])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_3))))))) ? (((/* implicit */int) max((var_9), (((/* implicit */signed char) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (unsigned short)45277)) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (signed char)-97)))))));
}
