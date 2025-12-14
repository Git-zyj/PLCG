/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196015
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) (_Bool)0);
        var_16 = ((/* implicit */short) (-(((long long int) var_12))));
        var_17 = ((/* implicit */signed char) (-(405694617U)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (-((+((+(-1LL)))))));
                    var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)-17748))));
                    var_20 = ((/* implicit */_Bool) var_4);
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_3)) ? (var_3) : (var_3))))), ((unsigned short)49132)));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 945593118U))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((signed char) arr_1 [i_3])), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_12)))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 405694617U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    }
    var_24 = ((/* implicit */_Bool) min((((((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) << (((max((((/* implicit */unsigned int) var_14)), (945593118U))) - (945593118U))))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0)))))));
    var_25 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) min((3349374177U), (((/* implicit */unsigned int) var_3))))))));
}
