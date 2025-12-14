/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5383
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_21 = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))) || (((/* implicit */_Bool) arr_0 [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_22 -= ((((/* implicit */_Bool) 5170306726168790484LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)144)));
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (unsigned char)193);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(-5170306726168790483LL))))));
                            arr_19 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_2] [i_2] [2LL] [i_4 - 1] [i_5] [i_1])) != (((/* implicit */int) arr_16 [i_5] [i_2] [i_4 + 1] [i_2] [i_2] [i_1]))));
                            var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_5] [i_4 - 1] [i_4] [i_4 + 1] [i_1]))));
                            var_26 += ((/* implicit */unsigned char) ((arr_6 [i_4 - 1] [i_1] [i_1]) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        }
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (short)-16846))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-3615884219059850156LL))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */int) -3615884219059850172LL);
        var_29 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_30 |= ((/* implicit */signed char) ((((/* implicit */int) var_16)) == ((((+(((/* implicit */int) (unsigned char)81)))) << ((((+(((/* implicit */int) var_1)))) - (44645)))))));
    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)16842))))))))));
}
