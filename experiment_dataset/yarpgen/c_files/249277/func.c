/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249277
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
    var_16 = ((/* implicit */long long int) var_14);
    var_17 = max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)1)))))), ((+(((var_3) | (1299828606))))));
    var_18 &= ((/* implicit */unsigned int) var_10);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = (+(((-1839362372) + (((/* implicit */int) (unsigned char)63)))));
        arr_3 [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] = ((unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) * (((4294967292U) * (arr_4 [i_1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_8 [i_1] [i_1 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2])), (750592500))) <= ((~(((/* implicit */int) (unsigned short)26331)))))))) : ((-(((((/* implicit */_Bool) arr_4 [i_1])) ? (2788268803187583734ULL) : (((/* implicit */unsigned long long int) 386480270))))))));
    }
    for (short i_2 = 4; i_2 < 11; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((int) var_12))) : ((-(6144U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) -558567948)))) : ((-(6144U)))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_3 - 1])) ? (2148787796479735515LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))))) : (((/* implicit */long long int) arr_11 [i_3 + 1] [i_2 - 4]))))))));
        }
        /* LoopSeq 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) var_1);
            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 558567925)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_5)))));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            arr_19 [i_2] [i_5] [i_2] = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) var_10)))) ? (((arr_4 [i_2]) ^ (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 4])))))));
            arr_20 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_5] [i_2]))))) ? (((/* implicit */unsigned long long int) (+(6135U)))) : (0ULL))))));
            var_23 *= ((/* implicit */_Bool) arr_18 [i_5] [11U]);
        }
        for (unsigned char i_6 = 4; i_6 < 11; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_2 + 1] [i_6 - 3])) / (-558567960)))), (arr_13 [i_2])));
            var_25 *= ((/* implicit */unsigned int) var_6);
            var_26 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (((_Bool)1) ? (var_14) : (2147483637)))))));
        }
    }
    for (unsigned short i_7 = 3; i_7 < 14; i_7 += 3) 
    {
        var_27 = ((/* implicit */signed char) min((max((((/* implicit */int) (_Bool)0)), (max((((/* implicit */int) arr_26 [i_7 + 2] [(short)1])), (var_14))))), (((((/* implicit */int) arr_25 [i_7 - 2])) * (((int) (unsigned short)19219))))));
        arr_27 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 896U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19219))))) : (((/* implicit */int) (unsigned char)241))))) ? (((/* implicit */int) ((unsigned char) arr_25 [i_7 - 3]))) : (((((/* implicit */_Bool) arr_25 [i_7 - 3])) ? (((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_5 [11U] [i_7])) : (((/* implicit */int) (unsigned short)65504)))) : (((/* implicit */int) arr_5 [i_7] [i_7 + 2]))))));
    }
}
