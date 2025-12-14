/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207649
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
    var_20 = ((/* implicit */unsigned char) max((var_13), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))));
    var_21 |= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [0] = ((/* implicit */int) min((max(((((_Bool)1) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9000)) > (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (_Bool)0))));
                    var_22 = (~(min(((-(743766607705862178ULL))), (((/* implicit */unsigned long long int) 1992424527)))));
                    arr_7 [6] |= ((/* implicit */unsigned int) ((_Bool) 330847413));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), (arr_3 [5]))))));
        var_23 += ((/* implicit */unsigned long long int) (short)-9000);
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_18 [i_5] [i_5 + 1] [i_4] [10])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            arr_25 [i_4] [i_4] [i_5 - 1] = ((/* implicit */_Bool) (((+(max((arr_3 [2ULL]), (((/* implicit */unsigned long long int) (_Bool)1)))))) << (((((/* implicit */int) (unsigned char)124)) - (71)))));
                            arr_26 [i_4] [i_4] [i_3] [6U] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_5 + 2] [i_6] [i_7 + 1] [i_4])) ? (((/* implicit */unsigned long long int) arr_15 [i_7] [i_7] [i_5] [i_6 - 1])) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((arr_9 [i_3]), (arr_9 [i_3]))))));
                            arr_27 [i_4] [i_4] [8ULL] [i_6 - 1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? ((+(((((/* implicit */_Bool) arr_23 [(short)10])) ? (arr_23 [i_3]) : (((/* implicit */unsigned long long int) 332613694U)))))) : (min((((/* implicit */unsigned long long int) 1043983U)), (34357641216ULL)))));
                            var_25 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1615383149)) ? (14756786022064849518ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19)))))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 8; i_9 += 3) 
                        {
                            var_26 = ((arr_3 [i_9 + 2]) & (arr_20 [i_5 - 1]));
                            var_27 = ((/* implicit */_Bool) (~(arr_0 [i_5 + 2])));
                            var_28 |= ((/* implicit */unsigned long long int) 0);
                        }
                        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (arr_28 [i_3])));
                    }
                }
            } 
        } 
        arr_32 [i_3] [i_3] |= ((((/* implicit */_Bool) arr_23 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_18)) * (var_4)))) : (((arr_20 [i_3]) >> (((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) (_Bool)1))))))));
    }
    /* LoopSeq 2 */
    for (short i_10 = 2; i_10 < 7; i_10 += 1) 
    {
        var_31 = arr_0 [i_10 + 1];
        var_32 |= 18446744073709551615ULL;
        /* LoopNest 3 */
        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_30 [i_13] [i_11] [i_11] [i_10 - 1])), (var_17)))) ? (((/* implicit */int) ((_Bool) arr_39 [i_10] [(short)4]))) : (((/* implicit */int) (short)18)))) + ((~(((/* implicit */int) (short)1))))));
                        var_34 = var_8;
                        arr_42 [i_10] = ((/* implicit */_Bool) min(((~(var_1))), (((unsigned long long int) 0))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned int i_16 = 3; i_16 < 10; i_16 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_17 = 2; i_17 < 9; i_17 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((max((var_9), (arr_22 [4ULL] [i_17] [i_17] [i_16] [0ULL] [i_16 - 1]))) & (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_13 [i_14])))))))));
                            var_36 = ((/* implicit */int) var_14);
                            arr_52 [i_16 - 3] [i_16] [i_16 - 1] [i_16] [i_16] [i_16] [i_16] = max((((/* implicit */unsigned long long int) ((((var_13) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))), (arr_22 [i_10] [i_14] [i_14] [i_16 - 3] [i_14] [i_14]));
                        }
                        for (short i_18 = 2; i_18 < 10; i_18 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) max((min((8479334152132956621ULL), (arr_53 [i_10] [i_14 - 2] [i_15] [3ULL] [i_15]))), (((((/* implicit */_Bool) arr_53 [i_10] [i_14 - 2] [i_15] [i_16] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_33 [i_10 - 2]))))))));
                            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16703745918269015416ULL)) ? (((/* implicit */int) (short)-9011)) : (((/* implicit */int) (unsigned char)101)))))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            arr_59 [i_10] = ((/* implicit */int) ((short) ((unsigned long long int) arr_44 [i_10 + 3] [i_14 - 2] [i_16 - 1])));
                            arr_60 [i_10] [i_14 + 2] [i_15] [i_16 - 3] [i_19] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(2101385250U)))))) + ((((((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) & (((unsigned long long int) -99133892)))));
                        }
                        arr_61 [i_16 + 1] [i_15] [i_14] [0U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_10 + 3])))))) * (((((/* implicit */_Bool) ((15692955067783228192ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32454)))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (0ULL)))));
                        var_39 = (!(((/* implicit */_Bool) 16438324531740608108ULL)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            arr_67 [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (2147483647))) % (((/* implicit */int) ((_Bool) 2753789005926323416ULL)))));
            arr_68 [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) (-(2684465800U)));
            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_11)))));
            arr_69 [i_20] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1120887318)))))) - (((((/* implicit */_Bool) (short)21517)) ? (((/* implicit */unsigned long long int) var_4)) : (2008419541968943534ULL))));
        }
        var_41 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (unsigned char)116))));
    }
}
