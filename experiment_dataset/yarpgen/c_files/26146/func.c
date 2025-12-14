/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26146
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
    var_18 = (~(((min((5635376570547221943LL), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) ((2921080007U) <= (1373887290U))))))));
    var_19 = ((/* implicit */int) (unsigned short)65535);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)65535)))) ? (((((/* implicit */_Bool) 4247593583U)) ? (((/* implicit */unsigned long long int) 2921080005U)) : (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)24975)) : (((/* implicit */int) (unsigned short)18813))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 4; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            arr_14 [4LL] [4LL] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((9915782440458866682ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((_Bool) ((int) 1373887286U))))))));
                            var_22 = ((/* implicit */unsigned int) 3245659339107987823LL);
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) (+(1373887291U)));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-123)) && (((/* implicit */_Bool) var_2)))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [i_0 + 4] [i_0 - 2] [i_1 + 2] [i_1 + 1] [i_3 - 2])) != (((arr_7 [i_1] [i_3 - 4] [i_2]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_1 [i_3 - 3]), (arr_0 [i_0 + 4] [i_0 + 4])))) ? (65535LL) : (((/* implicit */long long int) 2108607830)))), (((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_1 - 1] [(unsigned short)14] [i_1 - 1] [i_0])) ? (((long long int) arr_9 [i_0 + 1] [i_1] [i_2] [10] [i_3 - 1] [5])) : ((-(var_14))))))))));
                        var_27 = ((/* implicit */short) max((max((max((arr_1 [i_3 - 3]), (((/* implicit */long long int) (short)32757)))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [1] [i_3 - 2])) + (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2] [i_2]))))))), (max((arr_4 [i_0 - 2]), (arr_4 [i_0 + 3])))));
                        arr_17 [11ULL] [11ULL] [i_2] [(signed char)4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_5 [i_0 + 4] [i_1 - 1] [i_3 - 1] [i_2]))))) ? (max((arr_0 [i_0] [i_1 + 2]), (((/* implicit */long long int) ((arr_11 [i_0] [i_1 + 2] [(short)9] [10] [i_2] [i_3 + 1]) != (((/* implicit */long long int) ((/* implicit */int) (short)-20618)))))))) : (arr_6 [i_0] [i_0] [i_0] [i_3])));
                        arr_18 [i_0 + 3] [i_1 + 1] [i_2] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (-2664105291534315563LL) : (arr_0 [i_1 - 2] [i_0 + 4]))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1 + 2] [i_0 - 2]) : (arr_0 [i_1 - 2] [i_0 + 3])))));
                    }
                } 
            } 
        } 
        arr_19 [i_0 + 3] [i_0 - 2] = ((/* implicit */int) ((_Bool) (signed char)105));
        var_28 &= ((/* implicit */int) arr_4 [i_0]);
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) 9915782440458866682ULL);
                        arr_32 [i_6] [i_7] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18813)) ? (9915782440458866666ULL) : (((/* implicit */unsigned long long int) 2921080006U))));
                        var_30 *= ((/* implicit */short) arr_0 [i_9 + 1] [i_7]);
                    }
                    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        var_31 = arr_15 [i_8] [i_7] [i_7] [i_8] [i_8] [i_10];
                        var_32 = ((/* implicit */unsigned long long int) arr_9 [i_10] [i_8] [i_8] [i_7] [i_6] [i_6]);
                    }
                    var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -4975229337978810624LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_35 [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) ((262143LL) > (-9223372036854775799LL)))) != (((/* implicit */int) ((arr_21 [i_6] [i_6]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))))))) ? (((((/* implicit */_Bool) max((arr_26 [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) (unsigned short)18813))))) ? (((var_7) ? (arr_12 [12LL] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6]))))) : (min((((/* implicit */long long int) 2198704194U)), (-2664105291534315563LL))))) : (max((((/* implicit */long long int) arr_5 [i_6] [i_6] [10] [i_6])), (max((var_10), (var_11)))))));
        arr_36 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [5]))))) : (((((/* implicit */_Bool) -9223372036854775792LL)) ? (((/* implicit */long long int) -2147483645)) : (8612858458049848602LL)))))) ? ((-(((var_3) >> (((arr_29 [i_6] [i_6] [2] [i_6] [i_6] [i_6]) - (2104228570))))))) : (min((((/* implicit */unsigned long long int) ((arr_3 [i_6] [i_6] [i_6]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9))))), (((var_15) >> (21ULL)))))));
        arr_37 [i_6] = ((/* implicit */long long int) arr_3 [i_6] [i_6] [i_6]);
    }
    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
    {
        arr_40 [i_11] = ((/* implicit */unsigned long long int) ((short) max((arr_27 [i_11] [i_11] [5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_11)))))));
        arr_41 [9U] [9U] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_22 [i_11])))));
    }
}
