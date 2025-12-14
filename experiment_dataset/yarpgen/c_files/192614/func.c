/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192614
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((arr_1 [i_0 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))));
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (unsigned char)19))));
        var_21 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (var_13)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 15696704753515667606ULL);
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), (((((/* implicit */int) var_3)) < (((/* implicit */int) var_2))))))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32115))))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)(-32767 - 1))))) : ((+(-1999297570)))))));
    /* LoopSeq 3 */
    for (short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (unsigned short i_4 = 4; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_14 [i_1 + 1] = ((/* implicit */unsigned char) (+(9223372036854775807LL)));
                        var_23 = ((/* implicit */signed char) ((long long int) 15696704753515667606ULL));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)52))))) == (((13693576620326803966ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37411)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_2)), (2750039320193884009ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((2750039320193884010ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))))));
        arr_15 [i_1] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)32115))))));
        arr_16 [i_1] |= ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)1024)), (-6163604860476868495LL)));
    }
    for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        arr_19 [i_5 + 1] = ((/* implicit */_Bool) arr_1 [i_5 - 1]);
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 15298945248574265605ULL))));
        var_27 = ((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_5]);
    }
    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned long long int) ((2311019203U) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6 + 2] [i_6]))) ^ (((((/* implicit */unsigned int) (-2147483647 - 1))) * (arr_20 [i_6 + 2])))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 3; i_8 < 21; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            {
                                arr_35 [i_6] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
                                arr_36 [i_6] [11LL] [i_8 - 2] [11LL] [i_9] [i_9 + 4] [i_8] = ((/* implicit */unsigned char) (~(min((3837806367U), (((/* implicit */unsigned int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_37 [6U] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [17U] [i_6] [i_6 + 3] [i_8 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_31 [i_7] [i_7] [i_6 + 2] [i_8 - 1])))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 3) 
    {
        for (signed char i_12 = 3; i_12 < 18; i_12 += 1) 
        {
            {
                arr_44 [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15696704753515667606ULL)) ? (2750039320193884010ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) && ((!(((/* implicit */_Bool) var_1))))));
                arr_45 [i_11] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-104)) >= (((/* implicit */int) (unsigned char)63))));
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)124)) ? (arr_32 [i_11] [i_12 - 2] [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 3] [i_11 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20706))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))))))));
                arr_46 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_25 [i_11 + 3] [i_11 + 3] [i_11])) >> (((((/* implicit */int) (unsigned short)33456)) - (33448))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2750039320193884010ULL)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) max(((unsigned char)236), ((unsigned char)19)))))))));
            }
        } 
    } 
    var_29 -= ((/* implicit */signed char) (~(var_9)));
}
