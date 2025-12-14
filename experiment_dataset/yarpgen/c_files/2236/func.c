/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2236
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) >= (((((/* implicit */unsigned long long int) var_1)) * (var_9)))));
    var_15 = var_11;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)30370))))) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) <= (((/* implicit */int) (unsigned char)5)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (short)32767)))) / (((/* implicit */int) var_2))));
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)32208)))) * (((/* implicit */int) (short)32764))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_8))));
                        arr_18 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)28365)))) - (23)))));
                        var_20 *= ((/* implicit */short) ((long long int) arr_11 [i_2 + 1] [i_2 - 1]));
                        var_21 -= ((((/* implicit */_Bool) 0ULL)) ? (var_9) : (262016ULL));
                        arr_19 [i_4] [i_3] [i_4] [i_2] = ((/* implicit */signed char) (short)(-32767 - 1));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_6] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_2 - 1])) | (var_9)));
                        var_22 = ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */unsigned long long int) var_11)) : (var_3)));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_25 [i_2] [i_2] [i_2] [i_7] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_7), ((short)(-32767 - 1)))))))), (((((/* implicit */_Bool) (signed char)31)) ? (min((var_3), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)23975)) : (((/* implicit */int) (short)-23975))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)17204)), (((var_8) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (signed char)46))))) : (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))))))))));
                    }
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 64576176U)))))) / (12582912U)));
                }
            } 
        } 
    } 
}
