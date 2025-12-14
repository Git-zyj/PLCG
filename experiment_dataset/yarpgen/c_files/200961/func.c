/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200961
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = max((-2941859157062249717LL), (((/* implicit */long long int) ((int) (unsigned char)236))));
                var_18 = ((/* implicit */signed char) (unsigned char)3);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */long long int) var_17);
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    {
                        arr_18 [13LL] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) -2941859157062249717LL))) || (((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 + 1]))))) == (((/* implicit */int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_8 [i_4])))) < (((/* implicit */int) arr_13 [i_4] [i_3 - 1] [i_3 - 2])))))));
                        var_20 = ((/* implicit */_Bool) (short)32767);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) (((+(((/* implicit */int) var_11)))) != (((/* implicit */int) ((((/* implicit */int) var_5)) < (var_8))))))) * (max((((/* implicit */int) ((((/* implicit */_Bool) 8589932544LL)) || (((/* implicit */_Bool) var_5))))), (((int) var_13))))));
        var_22 = ((/* implicit */unsigned long long int) (-(((unsigned int) var_15))));
        var_23 = ((/* implicit */int) min(((+(-2941859157062249717LL))), (((max((((/* implicit */long long int) (unsigned short)0)), (-2941859157062249715LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6])))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) var_4);
        var_25 = ((/* implicit */unsigned short) var_3);
    }
    var_26 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13865))))))) != (max((((/* implicit */unsigned long long int) (short)-18741)), (min((var_10), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
}
