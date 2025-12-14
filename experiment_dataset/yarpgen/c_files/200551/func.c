/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200551
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) 
                {
                    arr_6 [i_1] = ((/* implicit */long long int) arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [10LL] [i_0] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)5))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_8 [i_0] [(short)2] [i_2] [i_3]))));
                                arr_13 [(unsigned short)11] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */long long int) var_13);
                                arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [(short)2])) ? (((/* implicit */int) arr_4 [8LL] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_0] [i_2 - 3] [i_1] [i_4] [i_4 - 1] [i_2 - 3])))))));
                                var_21 += ((/* implicit */short) min((((/* implicit */long long int) arr_2 [i_2] [i_2 - 1])), ((-(-6112795070581801988LL)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_7 [(unsigned short)6] [i_1 + 1] [i_1 + 1] [i_2 - 1] [(unsigned short)10]))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_10 [(short)10] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min(((short)8), ((short)-29)))) : ((-(((/* implicit */int) arr_2 [i_1] [i_1]))))))) : (((((/* implicit */_Bool) min((var_10), (arr_5 [i_5] [i_1] [i_1] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))) : ((+(var_2)))))));
                        var_24 = ((((/* implicit */_Bool) var_0)) ? ((-(arr_10 [i_1] [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_5]))))));
                        arr_17 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-23))));
                    }
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [(unsigned short)1] [i_1 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1]))))));
                    var_26 += ((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_10 [i_1 + 1] [10LL]));
                    var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (3205241252552512274LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27807))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_8 [i_6] [i_1] [i_6] [i_6]))))) : (((((/* implicit */int) (short)27807)) + (((/* implicit */int) (short)27807)))))) : (((/* implicit */int) var_15))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_13))))), (var_1)))))));
                    arr_22 [i_1] = ((/* implicit */short) min((max((((/* implicit */unsigned short) (short)-23357)), ((unsigned short)65535))), (var_17)));
                }
                arr_23 [i_1] [(unsigned short)6] = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    var_29 = ((/* implicit */short) max((var_19), (((long long int) var_12))));
    var_30 = ((((/* implicit */_Bool) (-(((((/* implicit */int) var_3)) - (((/* implicit */int) var_5))))))) ? (var_1) : (var_18));
}
