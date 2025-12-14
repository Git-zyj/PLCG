/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1934
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
    var_12 &= ((/* implicit */unsigned int) ((unsigned short) var_9));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) arr_12 [i_1] [i_1] [i_4 - 3])))));
                                var_14 = (~(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))) % (2062614574306230105LL))));
                                var_15 = ((((/* implicit */int) arr_7 [i_1] [i_1])) | ((~(-1313994524))));
                                var_16 = ((/* implicit */int) min((var_16), (-1313994524)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_2 [(unsigned short)2] [i_1]))));
                                var_18 ^= ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_16 [i_0] [9U] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) == (2767474297U)));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2062614574306230105LL)) ? (1117708667) : (((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), ((-(((/* implicit */int) arr_19 [i_9]))))));
                                arr_27 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) (unsigned short)41445)) - (41434))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -1117708668))))));
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_7] [i_8])) || (((/* implicit */_Bool) 1117708667)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)63273)))) : (980439028U)));
                                arr_28 [i_7] [i_1] [i_0] = ((/* implicit */long long int) arr_9 [i_9] [i_8] [i_1] [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_29 [i_1] = ((/* implicit */unsigned int) ((arr_9 [i_1] [18] [i_1] [i_1] [i_1] [i_1]) ? (arr_11 [i_7] [i_1] [i_7] [i_1] [i_1] [(_Bool)1]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                }
                arr_30 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(524287)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4338))) / (14U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((_Bool) (((-(var_7))) % (((long long int) var_2)))));
}
