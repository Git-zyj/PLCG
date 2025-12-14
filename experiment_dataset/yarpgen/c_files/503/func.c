/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/503
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((-1LL) / ((+(min((var_12), (((/* implicit */long long int) 460476365U))))))));
        var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_20 = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) 6402872828933452861LL)) ? (((((/* implicit */_Bool) ((signed char) (unsigned char)155))) ? (687573969U) : (7376606U))) : (3284334429U));
            var_21 = var_3;
        }
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */signed char) arr_16 [i_2 - 1] [i_2] [i_2 - 1] [i_3] [i_3] [i_5]);
                        var_23 = ((/* implicit */unsigned long long int) (signed char)2);
                        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1230461886U)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29774)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_3])))))) && (((/* implicit */_Bool) var_14))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] [i_2] = ((/* implicit */int) (unsigned char)250);
    }
    for (long long int i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
    {
        arr_22 [(_Bool)1] = ((/* implicit */unsigned short) (+(364500777310997745LL)));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6402872828933452861LL))));
    }
    var_26 = ((/* implicit */long long int) 653691984);
    var_27 = ((/* implicit */unsigned short) max((min(((~(var_16))), (((/* implicit */unsigned long long int) min((1622041909), (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((_Bool) -1045571090)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
}
