/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205175
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (var_5)))))));
    var_14 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_15 |= var_6;
        arr_3 [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)24433)) ? (14909070296178853774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)4])))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (-(14228755615014831142ULL))))) ? ((-(14909070296178853774ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((((/* implicit */_Bool) -2701573026827000769LL)) ? (-1144674893751127927LL) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) arr_1 [i_0] [1LL])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10875))) : (3537673777530697841ULL))))), (((/* implicit */unsigned long long int) var_11))));
        var_17 -= min(((~(((/* implicit */int) ((signed char) var_11))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (var_8) : (arr_5 [i_1] [i_1]))))));
        var_18 = ((long long int) ((short) (unsigned char)255));
    }
    for (short i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_3)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])))))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_1)))))));
                        var_20 = ((/* implicit */unsigned short) arr_17 [i_3] [i_2 + 1] [i_4 - 1] [i_4 - 1]);
                    }
                } 
            } 
        }
        arr_18 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-104))))) ? (((/* implicit */int) ((signed char) arr_17 [(_Bool)1] [i_2 + 1] [i_2] [(_Bool)1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1])) && (((/* implicit */_Bool) (unsigned short)29710))))))), (((((/* implicit */_Bool) arr_13 [i_2 + 1] [1LL] [i_2] [i_2 - 1])) ? ((~(((/* implicit */int) arr_0 [i_2 - 1])))) : ((+(((/* implicit */int) var_11))))))));
    }
}
