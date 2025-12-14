/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211187
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6329953565459392008LL)) || (((/* implicit */_Bool) (short)24))));
    var_18 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_3));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */unsigned long long int) var_10)))), (max((var_4), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) (signed char)105)))))) : ((-(219668372U)))));
                            arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24))) : (18446744073709551615ULL)))))) ? (min((((/* implicit */unsigned long long int) -7175261009143888850LL)), (15392381394757750372ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            arr_15 [i_0] [i_1 + 1] [i_2] [i_2] [i_1] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-100)) <= (((/* implicit */int) var_7)))))) ^ (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) >> (((((((/* implicit */_Bool) (signed char)-123)) ? (2097151) : (((/* implicit */int) var_16)))) - (2097148)))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = (~(var_4));
                                arr_18 [i_0] [(unsigned short)4] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_13);
                                var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4067627929U)))) ? (((/* implicit */int) var_5)) : (((var_13) ^ (((/* implicit */int) var_10))))))));
                                var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */int) ((18446744073709551609ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85)))))) - (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) + (2147483647))) >> (((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8814686836244108739ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (2523400605U)))) : (((var_4) >> (((/* implicit */int) var_0)))))) - (16482380711786049630ULL)))));
                            }
                            for (long long int i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7500)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1)))) ? (max((var_8), (((/* implicit */unsigned long long int) (short)-28562)))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))) : (var_4)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)99)) && (((/* implicit */_Bool) var_7))))))))));
                                arr_21 [i_1] [i_1] [i_2 - 1] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) >= (8922657598190940996LL)))) > (((/* implicit */int) (short)(-32767 - 1))));
                                arr_22 [i_1] = (~(((/* implicit */int) (unsigned short)19)));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                            {
                                arr_26 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-100)) ? (var_8) : (var_8))) | (var_4)));
                                var_24 = (_Bool)0;
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_16))));
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-123))));
                                arr_27 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) var_11))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        arr_32 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((var_12) - (14913964860331654272ULL)))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_9))));
                            arr_35 [i_0] [i_1] [i_7] [i_1] [i_8] [i_1] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (unsigned short)34839)))))));
                            arr_36 [i_1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))) >= (((((/* implicit */_Bool) (signed char)-123)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        }
                        var_29 = ((/* implicit */int) (~(var_8)));
                    }
                    arr_37 [i_1] = ((/* implicit */short) (-(var_8)));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)26809)))))));
                    arr_41 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (short)19736);
                    var_31 += ((/* implicit */signed char) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_16))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 130023424)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 19; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            {
                                arr_47 [i_0] [i_1] [i_10] [i_1] [i_12] [i_10] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)30696)) : (((/* implicit */int) (unsigned short)30697)))) - (((/* implicit */int) max((((/* implicit */short) var_11)), ((short)21))))));
                                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3283)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (short)32751)))))));
                                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (2261184385139800564ULL)))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_8))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((var_8) - (5893375372334578564ULL))))))));
                                var_34 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) ^ (((/* implicit */int) (short)32753))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
