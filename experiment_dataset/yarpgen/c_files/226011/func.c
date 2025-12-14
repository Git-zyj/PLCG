/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226011
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_1])) : (var_3)))))));
                var_14 = ((/* implicit */unsigned char) ((signed char) var_3));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) (_Bool)1);
                                var_16 = arr_13 [i_2];
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_3]), (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)10] [(unsigned char)10] [(unsigned short)11]))))) ? (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_2] [i_3] [i_2]), (var_8)))) : ((-(1538438828)))))) ? (((((/* implicit */_Bool) ((short) (signed char)115))) ? (((/* implicit */int) arr_10 [i_2] [i_1])) : (((/* implicit */int) (short)-25988)))) : (((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -1538438836))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [(short)2] [i_0])))))))))));
                                var_18 *= ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    var_20 = (unsigned char)7;
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */_Bool) max((((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_13)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) max((arr_14 [i_5]), (((/* implicit */short) arr_16 [i_5])))))));
        var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) (-(-1538438827))))));
    }
    var_22 &= ((/* implicit */unsigned char) 1538438845);
}
