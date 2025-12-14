/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242252
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_12))))) >= (var_16)))) > (((/* implicit */int) (((~(((/* implicit */int) var_17)))) > (((((/* implicit */int) var_14)) >> (((var_5) + (4312640897108344512LL))))))))))));
    var_21 &= ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) var_6)))))))), (var_14)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((signed char) var_11))))) | (((/* implicit */int) ((((int) arr_4 [i_0])) == (((/* implicit */int) min(((signed char)68), ((signed char)85)))))))));
                var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((unsigned char) arr_4 [5ULL]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((((-1) + (2147483647))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (150))))))))));
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)77))) > (var_5)))) : (((arr_5 [i_0] [i_0] [i_0]) & (arr_7 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((-1506523713) / (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (signed char)114))));
                                var_25 -= ((/* implicit */int) ((signed char) (_Bool)1));
                                var_26 = ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) == (((((/* implicit */int) arr_3 [i_3])) << (((var_19) - (6637811589854628493ULL))))));
                                arr_17 [i_0] [i_2] [i_2] [i_3 - 3] [i_0] [i_1] = ((/* implicit */signed char) ((long long int) arr_6 [i_3 - 2] [i_2] [i_2] [i_1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) >= (-1LL))))));
                                arr_23 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) / (16231872956874607739ULL)));
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [i_1] [i_1] [i_1] |= ((((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) arr_0 [i_1])))) && (((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_7 [i_1])), (1175135248446058093ULL)))))));
                    arr_28 [i_7] [i_1] [i_1] [i_7] = ((/* implicit */short) max((((signed char) min((arr_21 [i_7] [i_1] [i_7] [i_7] [i_7] [i_1]), (((/* implicit */short) arr_10 [i_0] [i_7]))))), (((/* implicit */signed char) var_7))));
                    var_27 |= ((/* implicit */_Bool) (short)-26821);
                    var_28 = ((/* implicit */unsigned char) var_14);
                    var_29 = ((/* implicit */unsigned char) (((-(-1555146605))) ^ (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_7])) == ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_7])))))))));
                }
                arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1032192)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)90)) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((signed char) (signed char)63))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11ULL))))))) : (-1558081075)));
            }
        } 
    } 
}
