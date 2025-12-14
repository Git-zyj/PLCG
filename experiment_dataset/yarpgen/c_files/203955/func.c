/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203955
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) var_10)), (var_12)));
    var_19 = (-(((/* implicit */int) var_1)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116))))) % (((/* implicit */int) var_4))));
        var_21 = ((/* implicit */int) var_15);
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_11))))) * (((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)97)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                for (short i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_17) + (((/* implicit */int) arr_6 [i_4] [i_1]))))) ? (max((((/* implicit */int) (unsigned char)176)), (var_12))) : (((((/* implicit */int) (unsigned char)25)) - (((/* implicit */int) (short)32767))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (max(((unsigned char)230), (((/* implicit */unsigned char) (signed char)28)))))))));
                            var_24 = ((/* implicit */unsigned char) arr_6 [i_1] [i_2]);
                        }
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)17)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) var_12)))))));
                        var_26 *= ((/* implicit */unsigned char) (signed char)117);
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [0]))))));
        var_27 ^= ((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [i_1]);
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [0LL] [i_1])))))) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-32761)), (arr_12 [i_1] [i_1]))))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned int) ((unsigned char) max((arr_9 [i_7 - 1] [i_8] [i_8] [i_10]), (arr_9 [i_7 + 1] [i_8] [9U] [i_10]))));
                                arr_35 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) * (((/* implicit */int) ((((unsigned long long int) 3607423772U)) == (((/* implicit */unsigned long long int) ((var_0) >> (((((/* implicit */int) (short)13025)) - (12994)))))))))));
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((unsigned long long int) ((((((/* implicit */_Bool) (short)32760)) ? (arr_15 [i_6] [1U] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) max((((/* implicit */int) var_14)), (var_8))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_31 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))));
                        var_32 = ((/* implicit */unsigned short) arr_32 [i_11] [(_Bool)0] [i_7] [i_6]);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        var_33 = ((unsigned long long int) ((unsigned short) (_Bool)1));
                        var_34 ^= ((/* implicit */long long int) var_16);
                    }
                }
            } 
        } 
        var_35 -= ((((/* implicit */int) ((((((/* implicit */_Bool) arr_42 [i_6])) ? (((/* implicit */int) var_13)) : (var_2))) == (((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) | (((/* implicit */int) ((unsigned char) ((unsigned short) var_12)))));
    }
}
