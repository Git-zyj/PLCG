/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230438
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */short) ((unsigned short) ((short) arr_8 [i_0])));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)-19385))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-66))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        arr_15 [i_0] [i_3] = ((/* implicit */unsigned char) ((var_7) - (((/* implicit */unsigned long long int) ((max((-3246413808564706052LL), (((/* implicit */long long int) (unsigned char)52)))) ^ (((/* implicit */long long int) -530346950)))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (min((max((var_15), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0])))))))));
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((-2095298827099712245LL) - (-8712689726447993264LL)));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((short) ((((int) var_4)) / ((~(((/* implicit */int) (short)-22322))))))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min(((~(((/* implicit */int) (short)-22339)))), (max(((-(((/* implicit */int) (unsigned short)45790)))), (((/* implicit */int) max((((/* implicit */short) var_10)), ((short)32767))))))));
    var_19 = var_2;
    var_20 = ((min((((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (8712689726447993263LL))), (((/* implicit */long long int) (signed char)-62)))) & (((/* implicit */long long int) ((/* implicit */int) (short)32750))));
}
