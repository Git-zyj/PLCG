/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46688
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
    var_18 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)20944)))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((var_1) + (9223372036854775807LL))) >> (((((/* implicit */int) var_16)) - (15752)))))) || (((/* implicit */_Bool) var_14)))))));
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)2143))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_10)))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) var_5)))) % (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_2 [i_0]))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) : ((+(arr_0 [13LL]))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 43189808U)) ? (((/* implicit */int) (short)-32090)) : (((/* implicit */int) (short)127))))));
                        arr_12 [(short)12] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20944)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_17) | (-6799741916784342644LL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-12386))))) : (-3365827705860774862LL)));
                    }
                    for (unsigned int i_4 = 4; i_4 < 21; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_16)))) == ((-(((/* implicit */int) var_7))))))) : (((/* implicit */int) var_9)))))));
                        var_22 += ((/* implicit */short) 268295319U);
                        arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(2372373924U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(short)11])))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-4215)) ? (1921853869U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((/* implicit */int) (short)29944))));
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((long long int) var_6)) * (((/* implicit */long long int) (+(((/* implicit */int) var_13))))))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_23 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) * (((7705310271215216417LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_24 -= ((/* implicit */short) arr_16 [i_0] [i_1] [i_0]);
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) min((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) var_5)))))) : (min((1048576U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) ((_Bool) arr_1 [i_0])))));
    }
    for (long long int i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_6 - 1] [i_6 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6 + 1] [18U] [i_6] [i_6 + 2] [18U])))))) && (((/* implicit */_Bool) var_13))));
        arr_24 [i_6] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_5 [i_6] [i_6 - 1] [i_6 - 1])))));
        var_27 &= ((/* implicit */short) (+(((((((/* implicit */int) var_12)) | (((/* implicit */int) var_3)))) * (((/* implicit */int) arr_6 [i_6] [i_6 + 1] [i_6 + 1]))))));
    }
    var_28 += (+((-(var_17))));
}
