/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204522
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
    var_14 = ((/* implicit */unsigned short) (signed char)16);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_4))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : (var_0)))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_16 -= ((/* implicit */unsigned long long int) var_3);
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((short) 2685889616U))))), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)-29432)))))))))));
                    arr_9 [13U] [(short)17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [20LL] [(unsigned char)2] [i_0]), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1] [i_1 + 1])) : (((/* implicit */int) (signed char)-16)))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [24] [i_1 + 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_1 + 2] [(unsigned char)10])), (arr_2 [i_1 + 2] [i_1 + 3] [i_1 + 2]))))))));
                    arr_10 [(signed char)5] [(signed char)5] [(signed char)5] [16U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((3089652502460887886LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (3097717846U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [7U] [i_2]))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [19U] [(_Bool)1] [i_2]))) : (3089652502460887886LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> ((((~(((/* implicit */int) var_1)))) + (15))))))));
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    var_19 = ((/* implicit */int) min((var_19), ((-(((/* implicit */int) var_12))))));
                    arr_13 [8LL] [(_Bool)1] [(short)9] [8LL] = ((/* implicit */unsigned int) arr_11 [(unsigned short)23] [(unsigned short)23] [(unsigned short)23]);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (arr_6 [i_1 + 4]) : (arr_6 [i_1 - 1])));
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        var_21 *= ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1]))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((-3089652502460887886LL) + (3089652502460887888LL)))))), (6556846747248005875LL)))));
                        var_22 -= ((/* implicit */long long int) arr_11 [4U] [4U] [i_0]);
                        arr_19 [i_0] [i_0] [2U] [i_4] [2U] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_5] [i_1 + 3])), (max((((/* implicit */unsigned long long int) arr_3 [i_5 - 1] [i_1 + 2])), (arr_2 [(short)2] [0] [i_5])))));
                        var_23 = ((/* implicit */_Bool) (short)28178);
                    }
                    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63987)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) || ((!(((/* implicit */_Bool) (short)28178)))))))) : ((~(2355037230U)))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 652479826U))));
                    }
                    var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 4]))) / (1939930066U)))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_28 [i_7] [(short)1] [i_4] [i_7 + 1] [(short)18] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) arr_15 [i_7 - 2] [(signed char)9] [i_1 + 4]))));
                                arr_29 [i_0] [i_0] [i_1 - 1] [i_8] [(short)0] [i_1 - 1] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3089652502460887886LL)) ? (var_9) : (((/* implicit */unsigned long long int) arr_6 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_9) - (var_10))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
