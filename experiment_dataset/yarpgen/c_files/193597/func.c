/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193597
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (+(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) min((arr_0 [i_0] [11U]), (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) 4095U))))));
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 4294705152U)) > (arr_0 [i_0] [i_0 - 1]))))) | (arr_0 [i_0] [i_0 - 1])));
    }
    for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((arr_1 [i_1]) ? (((/* implicit */int) (short)-2625)) : (arr_6 [i_3] [i_3])));
                        var_22 += ((/* implicit */short) ((2569597047123605025ULL) >> (((/* implicit */int) (_Bool)1))));
                        arr_12 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+((-(arr_8 [i_3])))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_9 [i_2] [(unsigned short)2]))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) arr_8 [12LL]);
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 663991003U))));
        var_26 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_9 [16] [16])))) | ((-(((/* implicit */int) ((unsigned short) (unsigned short)47073)))))));
    }
    var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (var_15) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))));
}
