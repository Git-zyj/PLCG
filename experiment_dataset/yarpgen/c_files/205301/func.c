/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205301
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)46942)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)57)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)199)), ((short)7962))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)31172)) >= (((/* implicit */int) (unsigned char)57))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31163)) && (((/* implicit */_Bool) (unsigned char)21))))), ((unsigned char)21))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (var_7))), (((/* implicit */int) ((signed char) var_5)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) / (var_7)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_1])) : (var_12)))))) : (((/* implicit */int) ((((((/* implicit */int) (short)32767)) & (arr_7 [i_0] [i_1] [i_1] [(short)3]))) >= ((~(1937881206))))))));
                        arr_13 [i_1] [i_0] [i_0] [i_1] [5LL] [i_3 + 2] = ((/* implicit */signed char) (~(((/* implicit */int) min((((unsigned char) (short)743)), (((/* implicit */unsigned char) (signed char)-89)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4 - 1] [i_4] = -1937881228;
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3762291013U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15871)))))))) >= (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_10))))), (((var_3) ^ (((/* implicit */long long int) var_7))))))));
        var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) (signed char)-69)))))) : (((((/* implicit */_Bool) (unsigned short)31163)) ? (((/* implicit */int) (unsigned char)51)) : (max((1937881228), (((/* implicit */int) (unsigned short)15890))))))));
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
    {
        var_17 |= ((/* implicit */short) (unsigned short)34344);
        var_18 &= ((/* implicit */int) ((short) 18328875180171091941ULL));
        arr_19 [i_5] [12U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_5]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))));
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned short)31192))))) : (((/* implicit */int) var_4))));
        var_20 ^= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_5)))) != (((/* implicit */int) (signed char)125))));
    }
    for (short i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_3)))) && (((/* implicit */_Bool) var_8)))));
        var_22 = ((/* implicit */int) min((((long long int) -7829565704158147451LL)), (((/* implicit */long long int) ((short) (short)-1)))));
        arr_22 [i_6] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 5518476086117472193ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_10)))))) : (2523496064U))));
        var_23 = ((/* implicit */long long int) (unsigned char)77);
    }
    var_24 = ((/* implicit */short) min((((((var_11) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))) * (var_6))), (((/* implicit */unsigned long long int) ((long long int) var_9)))));
    var_25 &= var_0;
}
