/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243320
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) min(((+(((/* implicit */int) min((var_8), (var_3)))))), (((((/* implicit */int) (_Bool)1)) / ((~(((/* implicit */int) (_Bool)1))))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-32763)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        arr_15 [i_3] [i_5] [i_0] = ((/* implicit */_Bool) ((min((arr_4 [i_3] [i_4 - 1] [i_5]), (((/* implicit */unsigned long long int) var_13)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_0)) > (((/* implicit */int) (short)26866))))), (arr_2 [i_5])))))));
                        arr_16 [i_0] [i_0] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26866)) > (((/* implicit */int) (_Bool)1))))), ((~(var_10))))))));
                        arr_17 [i_0] [(short)0] [(unsigned char)19] [i_4] = ((/* implicit */unsigned char) arr_12 [(_Bool)1] [i_3] [i_4] [i_5] [i_5]);
                    }
                } 
            } 
        } 
        arr_18 [i_0 + 1] = ((/* implicit */short) (signed char)-23);
        var_17 += ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)0));
    }
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-26867)))))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_9))));
}
