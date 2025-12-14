/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29012
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
    var_20 = ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-20459)));
    var_21 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) (short)32)) ? (((/* implicit */int) (short)20459)) : (((/* implicit */int) (short)20460))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_11 [i_0 + 1] [i_0] [(unsigned short)13] = ((/* implicit */unsigned short) var_14);
                    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4535271252579796348LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) : (3401202603U)));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) (((((_Bool)1) ? (arr_9 [13LL] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)768)) == (((/* implicit */int) (unsigned short)12288))))))))) << ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [10LL])))))))));
                        var_24 = ((/* implicit */unsigned short) (+(min((var_8), (-421108895)))));
                    }
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((((((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_2])))) || (((/* implicit */_Bool) var_15)))), (((((/* implicit */_Bool) -7586990579867494081LL)) || (((/* implicit */_Bool) (unsigned char)145)))))))));
                    var_26 += ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) -2147483647)))))) == (min((max((arr_3 [i_0]), (((/* implicit */int) (short)4032)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_3 [i_1 - 2])))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) (+((+(var_19)))));
    }
}
