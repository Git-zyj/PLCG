/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198437
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_4 [(short)0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) (unsigned short)24368))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))))));
        /* LoopSeq 4 */
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) > (991818798U)))) >> (((((((arr_2 [i_1]) + (2147483647))) >> (((arr_1 [i_0] [i_0]) + (302861470))))) - (179287136)))))) ? (var_1) : (((/* implicit */unsigned int) min((arr_2 [i_0 - 1]), (((/* implicit */int) ((arr_2 [i_0 - 2]) > (((/* implicit */int) arr_6 [i_0 + 1] [i_1]))))))))));
            var_10 -= ((/* implicit */short) arr_0 [i_0]);
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_12 [i_0] [i_0] [i_2] = 2803123774U;
            var_11 = ((unsigned long long int) max((((/* implicit */long long int) ((unsigned short) arr_1 [i_0 - 2] [i_0 + 1]))), (((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0 - 2]) : (((/* implicit */long long int) var_1))))));
            arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_4) | (((/* implicit */int) arr_5 [i_2] [i_2]))))))) ? ((-(((arr_10 [i_0] [i_0] [i_2]) >> (((((/* implicit */int) var_5)) - (118))))))) : (arr_10 [i_0] [i_0] [i_0])));
        }
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)14587)) ? (((/* implicit */int) var_2)) : (arr_1 [i_0] [i_0]))) - ((~(arr_1 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2])) << (((arr_15 [i_0 + 1] [i_0 + 1] [(short)8]) - (7913087382480736763LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_15 [i_0 - 2] [i_3 + 2] [i_3])))))))) : (arr_10 [i_0] [i_3] [i_0 - 1]))))));
            arr_18 [i_0] [i_3] = ((/* implicit */int) ((unsigned short) ((min((((/* implicit */unsigned long long int) (unsigned short)14587)), (16383ULL))) >= (1922442102550511136ULL))));
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) arr_15 [i_4] [i_0] [3ULL]);
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)114)) + (1940835133)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 1] [i_4]))))) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0 - 2])) | (((/* implicit */int) var_6))))) & (arr_19 [i_0] [i_0] [14U])))));
            var_15 = ((signed char) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_4] [i_4])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -8682294369466060881LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_9 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_26 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_5]))) - (-8682294369466060866LL)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (1922442102550511136ULL)))))) ? (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) arr_5 [i_5] [i_5])))) : ((-(((/* implicit */int) (_Bool)1))))));
        arr_27 [i_5] [i_5] |= ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (4173248929U)));
    }
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (_Bool)1))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (-(((((/* implicit */_Bool) ((8934048509985554543ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)10017)), (-1922884648)))) : (((unsigned int) var_3)))))))));
    var_18 = ((/* implicit */short) (((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9)))))) && (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) == (((/* implicit */int) var_6))))));
}
