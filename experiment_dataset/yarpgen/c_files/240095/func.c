/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240095
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
    var_15 &= ((/* implicit */short) 4294967295U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        var_16 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -4456712082003495685LL)), (4831873258777457488ULL)));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned long long int) 7U)), (9493691938347887860ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */int) (signed char)-17)), (var_2))))))));
                        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                        arr_10 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -321412426)) ? (((/* implicit */int) (unsigned short)31725)) : (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_6 [i_0] [7] [i_2])))) : (((/* implicit */int) var_5))))));
                }
                var_20 = ((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [15U] [13ULL] [i_0])) > (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [5U] [11] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))))))));
                var_21 = ((/* implicit */unsigned short) ((var_2) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (arr_2 [i_0])))) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) > (arr_0 [i_1 + 1]))))))) - (13525648028269908607ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_22 = ((/* implicit */int) ((15496824519387607914ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16)))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_1 [(short)8]))));
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (var_14)))) + (3126369671U)));
                }
                var_24 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (signed char i_7 = 3; i_7 < 22; i_7 += 4) 
            {
                {
                    arr_23 [7LL] [i_6] [(short)0] [i_5] = ((/* implicit */signed char) min((((var_14) - (((/* implicit */int) arr_17 [i_5] [i_6] [i_7 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) | (arr_16 [i_5 + 2])))) || (((/* implicit */_Bool) -1134176406)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_30 [i_6] [i_6] = ((/* implicit */long long int) var_0);
                                var_25 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)65535))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)96), (((/* implicit */short) var_9))))) ? (((/* implicit */int) (short)14625)) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 6813245510398848215LL)) != (((((/* implicit */unsigned long long int) 6633170252108383039LL)) % (15144945472729344159ULL))))))) : (((((_Bool) (_Bool)1)) ? (((((/* implicit */long long int) -86230196)) ^ (2784557942222123652LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))))));
                                arr_31 [2LL] [(unsigned short)13] [i_7] [i_8] [i_6] = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    arr_32 [i_6] = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((_Bool) ((unsigned char) min((((/* implicit */long long int) (signed char)-87)), (6813245510398848205LL))))))));
}
