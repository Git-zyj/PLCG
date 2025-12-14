/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43013
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) << (((var_4) - (8337528558939742787LL)))))))) ? ((~(((((/* implicit */_Bool) (unsigned short)24)) ? (-7527483046606770556LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (min((var_4), (((/* implicit */long long int) (signed char)-123))))))));
    var_13 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+((~(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (+(8738160936153154913LL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_15 = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_0])), (arr_6 [i_0])))) ? (((/* implicit */long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) : (min((((/* implicit */long long int) arr_10 [i_0] [i_3] [i_2] [i_2] [i_2])), (7527483046606770543LL))))) <= ((+(((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (3167804635191952575LL)))))));
                        var_17 ^= arr_8 [i_2] [i_1] [i_2] [i_3];
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_4] [i_5] [i_5] |= ((/* implicit */short) ((long long int) min((arr_3 [i_1] [i_4] [i_6]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (175024095021299362LL)))))));
                            var_18 = var_11;
                        }
                    } 
                } 
                var_19 &= ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_4])) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_4] [i_4])))))) % (((/* implicit */int) (signed char)-108))));
                var_21 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) 7527483046606770558LL)) ? (9777833196299374464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) << ((((+(((/* implicit */int) var_11)))) + (48))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
            }
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (signed char i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        {
                            var_22 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_9] [i_8]))) : (arr_23 [i_0] [i_8])))) + (((arr_12 [i_0] [i_1] [i_7] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_7] [i_8] [i_9])))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-82))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)246))))))) : (((((/* implicit */long long int) ((int) arr_26 [i_0]))) % (((((arr_30 [i_9] [i_8] [i_7] [i_1] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)149)) - (111)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 18; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-96)), ((unsigned char)234))))) > (((unsigned long long int) arr_22 [i_10 - 2]))));
                            var_25 = (~(((/* implicit */int) ((arr_14 [i_11] [i_7]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) != (1518265811)))))))));
                            var_26 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -8149431831451217037LL)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) var_10))))), (arr_23 [i_1] [i_1]))))));
                        }
                    } 
                } 
            }
            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */unsigned long long int) -3053529237472239797LL)) : (((unsigned long long int) 7527483046606770528LL))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_1)))));
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 17; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    {
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_12 - 1] [i_12] [i_13] [i_13])) ? (arr_17 [i_13] [i_12 + 2] [i_12] [i_1] [i_0]) : (arr_17 [i_1] [i_12 + 3] [i_12] [i_13] [i_13])))) && (((/* implicit */_Bool) ((arr_0 [i_12 + 3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_12 - 2]))) : (arr_17 [i_0] [i_12 + 1] [i_13] [i_13] [i_12]))))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 3; i_14 < 19; i_14 += 2) 
                        {
                            arr_48 [i_12] [i_1] [i_12] [i_13] [i_14] [i_12] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 36028797018963968ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) >> (((arr_5 [i_13] [i_13] [i_13]) + (3816595267355500749LL)))))), ((~(arr_13 [i_0] [i_12] [i_13] [i_14]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_12] [i_13] [i_14]))) + (((long long int) arr_3 [i_0] [i_1] [i_14])))))));
                            arr_49 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_24 [i_0] [i_0] [i_1] [i_12] [i_13] [i_14])), (9223372036854775807LL)))) + ((+(arr_13 [i_0] [i_1] [i_12] [i_13])))))));
                            var_29 = ((/* implicit */short) (~(((/* implicit */int) min((arr_41 [i_14 + 1] [i_14] [i_14] [i_14] [i_12 + 3] [i_12 + 2]), (((/* implicit */unsigned short) arr_40 [i_14 - 2] [i_12 - 2])))))));
                            var_30 = (~(((((/* implicit */_Bool) (+(arr_22 [i_0])))) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_0] [i_12] [i_13] [i_14]))))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            var_31 ^= ((/* implicit */short) arr_15 [i_0] [i_15] [i_15] [i_15] [i_15]);
            arr_53 [i_0] [i_0] [i_15] = ((/* implicit */unsigned short) ((unsigned long long int) 9223372036854775807LL));
            arr_54 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
    {
        arr_58 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_3)))) || (((/* implicit */_Bool) (+(-703861229))))));
        arr_59 [i_16] = arr_56 [i_16];
        /* LoopNest 2 */
        for (unsigned char i_17 = 2; i_17 < 10; i_17 += 4) 
        {
            for (long long int i_18 = 1; i_18 < 10; i_18 += 1) 
            {
                {
                    arr_64 [i_16] [i_17] [i_16] = ((/* implicit */_Bool) arr_51 [i_18]);
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_16] [i_16] [i_17] [i_17] [i_18])) ? (arr_14 [i_16] [i_17]) : (arr_3 [i_16] [i_17] [i_18])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned char)218)))))) : (arr_30 [i_16] [i_16] [i_16] [i_17] [i_18 - 1])));
                }
            } 
        } 
        var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-7527483046606770546LL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))));
        var_34 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)254)) - (((/* implicit */int) arr_24 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) > (((((/* implicit */int) arr_41 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) * (((/* implicit */int) var_10))))));
    }
    var_35 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((min((((/* implicit */unsigned long long int) var_3)), (9777833196299374439ULL))), (((/* implicit */unsigned long long int) var_5))))));
}
