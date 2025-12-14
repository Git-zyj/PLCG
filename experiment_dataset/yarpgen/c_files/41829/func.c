/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41829
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
    var_18 = ((/* implicit */signed char) var_10);
    var_19 = ((/* implicit */short) ((unsigned int) min((((/* implicit */int) (signed char)117)), ((-(((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_8 [(_Bool)1] [(short)10] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)117)) < (((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_2]))));
                        arr_9 [i_0] [i_1] [3] [i_3] = ((/* implicit */int) (-(262144U)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 1487923793)) ? (262144U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17329)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_13))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_5])) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (signed char)-118))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)10))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 1487923770)) ? (var_12) : (((/* implicit */int) (short)8067))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (0U)))) ? (var_8) : (((/* implicit */unsigned int) (-(1592519075))))))));
                    arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((short) (_Bool)1));
                }
            } 
        } 
    } 
}
