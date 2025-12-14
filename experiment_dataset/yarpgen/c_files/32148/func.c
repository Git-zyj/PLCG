/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32148
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)53))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) - ((+(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
        var_20 = (-(var_12));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) - (((/* implicit */unsigned int) (+(var_11))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                arr_9 [i_2] = (-(((/* implicit */int) var_15)));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (3646087846U));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_11) : (var_11)))) != (var_14)));
                    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                    var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                }
                for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    arr_14 [i_3] [i_2] [i_3] [i_5] [(unsigned char)6] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((var_5) ? (var_12) : (var_4))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_27 = (((_Bool)1) ? (3646087846U) : (3646087853U));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) var_8);
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (~(((/* implicit */int) var_8)))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((var_12) << (((var_9) - (110792813U))))))));
                    }
                }
                arr_21 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_11);
            }
            var_31 ^= ((/* implicit */signed char) var_3);
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 19; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1788907154)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((var_3) << (((3646087849U) - (3646087827U))))), (((/* implicit */unsigned long long int) var_1))))));
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_0))));
                var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) (((-(((/* implicit */int) var_10)))) == (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_10 = 3; i_10 < 9; i_10 += 3) 
    {
        var_35 = ((/* implicit */_Bool) (-((~(var_12)))));
        arr_30 [i_10 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_8)) / (((/* implicit */int) var_16)))))))));
        /* LoopSeq 4 */
        for (unsigned int i_11 = 1; i_11 < 7; i_11 += 1) 
        {
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_9))))) : (var_9))))))));
            arr_33 [i_11] [i_11] = ((/* implicit */unsigned int) var_10);
        }
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */short) var_9);
            arr_38 [i_10] [i_12] = (~((+(648879450U))));
            var_38 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 648879447U)), ((+(16313789253581064964ULL)))));
            var_39 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
            var_40 = (+(((/* implicit */int) ((var_14) <= (((/* implicit */long long int) var_9))))));
        }
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
        {
            arr_41 [i_10] [i_13] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (var_0))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))) : ((~(1952845322U)))))));
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)39008)) != (((/* implicit */int) (unsigned short)22927))));
        }
        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
            {
                arr_47 [i_10] [i_14] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (3751494245U) : (1966466779U)));
                var_42 = max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (var_14)))), (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_10)))))));
                var_43 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))));
            }
            for (short i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
            {
                arr_50 [i_16] [i_14] = ((/* implicit */unsigned int) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1)))));
            }
            var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((var_7), (var_15))))));
            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_3))) / (((/* implicit */unsigned long long int) (+(var_1))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (min((var_12), (((/* implicit */unsigned int) var_6)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    {
                        var_47 -= ((/* implicit */unsigned char) (((-(var_4))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3205736104780812302LL))))))));
                        var_48 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
            arr_57 [i_14] = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))))));
        }
    }
    var_49 |= ((/* implicit */unsigned int) (+(((var_14) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_13) : (var_0))))))));
}
