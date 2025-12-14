/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204011
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [0U] [i_1] [0U] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((short) 13507580652877793686ULL))) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) var_4))))));
                            arr_12 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) 3133676635744204908LL)));
                        }
                    } 
                } 
                var_10 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-57)) && (((/* implicit */_Bool) (signed char)52)))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                            {
                                var_11 = ((/* implicit */signed char) ((((long long int) ((((/* implicit */long long int) var_5)) - (var_3)))) <= (min((((/* implicit */long long int) min((((/* implicit */signed char) var_4)), ((signed char)56)))), (3133676635744204908LL)))));
                                arr_19 [i_1] [2U] [i_4] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)40)) || (((/* implicit */_Bool) (signed char)24)))))) | (max((((/* implicit */unsigned int) (unsigned short)16352)), (0U)))));
                                var_12 = ((/* implicit */_Bool) (unsigned short)49234);
                                var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (454575354775695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))))) : (((/* implicit */unsigned long long int) var_7))));
                                arr_20 [14] [i_6] &= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-25)), ((unsigned char)254)))) && (((/* implicit */_Bool) (unsigned char)0))))), (((int) (unsigned char)0))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                            {
                                arr_23 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_3)) ? (5908006740594719180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40)))))));
                                var_14 &= ((/* implicit */short) (~(((/* implicit */int) (signed char)-24))));
                            }
                            /* vectorizable */
                            for (signed char i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                            {
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                                var_16 = (~(2147483647));
                                arr_26 [i_8] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) (+(18446744073709551615ULL))));
                                var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32310))) : (var_0)))));
                                arr_27 [i_1] [i_5] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43395))) % (18ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)16301))))) : (8200964831228640341LL)));
                            }
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7)))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min(((signed char)53), ((signed char)8))))));
                            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)27691))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)47)), (var_3)));
                var_22 = ((/* implicit */unsigned int) ((max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)235)))) > (((/* implicit */long long int) ((/* implicit */int) ((short) var_9))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (unsigned char)52);
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
    {
        var_24 = var_0;
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) + (((/* implicit */int) (signed char)-88))))) ? ((-(8214506175850223803LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-19)))))));
                    arr_36 [i_9] [i_10] [i_10] = ((/* implicit */signed char) 15674958977606295311ULL);
                }
            } 
        } 
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned char) (((+(4569600309837776982ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1885783758)) && (((/* implicit */_Bool) (signed char)25))))))));
    }
    var_26 = ((/* implicit */int) ((-8214506175850223803LL) + (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_27 = ((/* implicit */int) ((long long int) var_9));
}
