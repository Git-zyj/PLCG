/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235290
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */int) max((var_12), ((~(((((((/* implicit */int) var_3)) > (((/* implicit */int) var_7)))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) (unsigned char)1);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_7 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)234))))) ^ (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) - (arr_2 [i_0])))));
                    arr_8 [10ULL] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1])) || (((/* implicit */_Bool) 261243072U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)224)) >> (((arr_0 [i_0]) - (3820332563U)))))) : ((~(var_4)))))) ? (((/* implicit */long long int) ((unsigned int) min(((_Bool)1), (var_2))))) : (((arr_2 [i_2]) / (arr_2 [i_0])))));
                    arr_9 [i_0] [i_2] [i_2] = ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) (signed char)112)) : (arr_5 [i_0] [i_0] [(unsigned char)18] [i_2]))) >= (((/* implicit */int) (signed char)117)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_1] [i_2] [8LL] [(unsigned char)8] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_11 [i_2] [i_1] [i_2] [i_3] [i_3] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-8600053040569725811LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (short)-19321))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_21 [i_0] [i_0] [i_0] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) & (max((((/* implicit */unsigned long long int) var_9)), (17451698817922816715ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_0] [i_2] [i_5]) : (((/* implicit */int) (unsigned char)253)))))));
                        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)19)) ^ (((/* implicit */int) (short)-17807)))), (((/* implicit */int) ((((/* implicit */_Bool) max((849601649U), (((/* implicit */unsigned int) var_9))))) || (((((/* implicit */int) (short)-9783)) != (((/* implicit */int) var_0)))))))));
                    }
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) min((arr_21 [(unsigned char)6] [(short)18] [i_2] [i_6]), (755523452U)))) : (arr_11 [i_6] [i_6] [i_6] [i_1] [18U] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (arr_14 [i_0] [i_1] [i_1] [i_6] [i_6]))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_19 [i_6] [i_1] [i_2] [i_2] [i_6] [i_2])))) ? ((+(((/* implicit */int) arr_25 [i_0] [2] [i_0] [i_0])))) : (((/* implicit */int) var_10)))))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) (!((_Bool)1)))) : ((~(((/* implicit */int) var_9))))));
                        var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
                        var_20 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned short)21001)), (min((((/* implicit */int) var_0)), (var_8))))) > (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)32531)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_7)))))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        var_21 = (!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_0] [i_2])));
                        var_22 = ((/* implicit */unsigned long long int) min((((arr_0 [i_0]) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))), ((!(((/* implicit */_Bool) var_4))))));
                    }
                }
                arr_29 [i_0] [i_1] [i_0] = ((/* implicit */short) var_0);
                arr_30 [(unsigned char)2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2100035681U)) ? (((/* implicit */unsigned int) -1)) : (2194931610U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_11 [(short)2] [i_0] [14U] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(signed char)16])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 849601659U))))))))));
            }
        } 
    } 
}
