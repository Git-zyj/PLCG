/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44491
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
    var_12 -= ((/* implicit */unsigned int) 1047416833);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((1047416833) + ((-(((/* implicit */int) (unsigned short)877)))))) & (((/* implicit */int) (unsigned short)64531))));
        var_13 = ((/* implicit */long long int) ((299963481) + (-818339343)));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((-177267023), (1047416837))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)49))))) ? (((/* implicit */int) var_5)) : (((-1047416834) + (((/* implicit */int) arr_14 [i_3] [i_3] [i_3 - 2] [i_2] [i_3] [i_3]))))));
                        var_15 ^= ((/* implicit */unsigned long long int) arr_11 [i_2 + 3] [i_2 + 3]);
                        var_16 *= ((((/* implicit */int) arr_7 [i_4] [i_3] [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)67))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -818339343))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) 
    {
        var_17 = ((/* implicit */int) var_0);
        var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (unsigned short)7154)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) : (3029644435U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4716))) != (6ULL))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_5] [i_5] [i_5 + 1])) & (((/* implicit */int) arr_7 [i_5] [i_5 + 2] [i_5 + 2])))))));
        arr_20 [5ULL] = max((((/* implicit */int) arr_7 [i_5] [i_5] [i_5])), (1551130689));
        arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [8LL] [8LL] [8LL])) ? (((/* implicit */long long int) arr_10 [i_5] [i_5 - 1] [(unsigned char)20] [i_5])) : (arr_13 [(signed char)6] [i_5] [(signed char)6])))) | ((~(10410099612045548958ULL)))));
        var_19 -= ((/* implicit */short) arr_1 [i_5]);
    }
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned short) arr_22 [i_6]);
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (short)32766))))) ? (((/* implicit */int) ((13850856869934817912ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6])))))) : ((-(((/* implicit */int) (unsigned short)2047))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_6])) < (((/* implicit */int) ((short) (_Bool)1))))))) : (arr_22 [i_6]));
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) 65535U)), (var_2))) : (((/* implicit */unsigned long long int) 1047416837))))) ? (((((/* implicit */unsigned long long int) -715736389605150250LL)) ^ (((((/* implicit */unsigned long long int) 65535U)) & (arr_22 [i_6]))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_23 [i_6])))));
        arr_25 [i_6] [i_6] |= arr_23 [i_6];
    }
    var_22 |= ((/* implicit */int) ((((/* implicit */int) var_8)) == ((~(((/* implicit */int) (signed char)-46))))));
}
