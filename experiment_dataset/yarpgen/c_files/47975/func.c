/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47975
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((arr_0 [i_0]) <= ((+(var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((var_10) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (short)(-32767 - 1))))))))));
        arr_4 [12LL] [16LL] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])) << (((((/* implicit */int) arr_3 [0LL] [i_0])) - (4421))))) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-((~(((/* implicit */int) var_10)))))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))) != (((/* implicit */int) (_Bool)1))));
            var_17 += ((/* implicit */long long int) (~(((/* implicit */int) (!(var_3))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */int) arr_9 [i_0] [i_2])) != (((/* implicit */int) var_8))))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0]))))) - (4434ULL)))));
            arr_13 [6LL] [6LL] [i_0 - 1] = ((/* implicit */long long int) (~(((15120712988907505769ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 3] [i_0 + 3])))))));
            arr_14 [(unsigned char)0] = (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) 1290300944U)), (18446744073709551615ULL))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_24 [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (signed char)91)))) : (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */int) (signed char)106))))))));
                            arr_25 [11LL] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (+(((arr_0 [i_0 + 4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                arr_26 [i_0] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_4)))) << (((((/* implicit */int) ((short) (-(var_6))))) - (7472)))));
                var_18 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_6 [12U]), (var_6)))), ((~(((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_3] [i_2] [i_2] [(_Bool)1])) ? (12132505836579409018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            }
        }
        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            arr_37 [i_9 + 1] [i_7] [i_7] [i_8 + 1] [i_9] = ((/* implicit */signed char) var_5);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (arr_10 [i_0 + 2] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_18 [i_7] [i_7] [5ULL] [5ULL] [i_9]))))))) ? ((((!(((/* implicit */_Bool) var_2)))) ? (arr_7 [i_7] [i_0] [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_7] [i_7] [(short)1] [i_8]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_7])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_13)) : (var_7))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)22)))))))));
                            var_20 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_9 [i_8 - 1] [i_0 - 3])) | (((/* implicit */int) arr_9 [i_8 - 1] [i_0 - 3]))))));
                            arr_38 [i_0 - 1] [i_7] = ((/* implicit */signed char) arr_34 [(unsigned char)0] [i_6 - 2] [i_7] [i_6 - 2] [i_8 - 1] [i_9 + 1]);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (signed char)-104)) + (118)))))) ? (((((/* implicit */_Bool) min((246838565), (((/* implicit */int) var_5))))) ? ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_6 + 1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((15120712988907505759ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(signed char)0] [i_0] [(signed char)0]))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
        }
        arr_39 [i_0] = ((/* implicit */long long int) ((var_13) ^ (max((((/* implicit */int) arr_3 [i_0 - 1] [i_0])), ((~(((/* implicit */int) (_Bool)1))))))));
    }
    for (int i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    {
                        var_22 -= ((/* implicit */signed char) var_2);
                        var_23 += ((/* implicit */signed char) max((((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) ((short) var_7))) : ((~(((/* implicit */int) var_10)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_13] [i_12] [(_Bool)1] [i_10])))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_2)))) == (arr_47 [i_10] [i_10] [i_10] [i_10])));
    }
    var_25 = var_12;
}
