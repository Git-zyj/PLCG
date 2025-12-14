/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220206
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) var_11);
                var_18 = max((((long long int) max((14ULL), (7ULL)))), (max((((/* implicit */long long int) (unsigned short)23578)), (1LL))));
                arr_5 [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) max((((29U) >> (((((/* implicit */int) (unsigned char)70)) - (66))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 3666561714U)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6703))) : (((unsigned int) -1LL))))));
                arr_6 [i_0] = ((unsigned short) var_16);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (628405574U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-14871)) && (((/* implicit */_Bool) 628405594U))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_10);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3865594297U)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 3666561729U)) : (var_4)))));
                            arr_20 [i_0] [i_1] [i_0] [i_3] [24] [i_1] = ((/* implicit */unsigned short) ((arr_8 [i_0] [i_3 + 1] [i_0] [19LL]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3] [4U]))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((long long int) (unsigned short)22));
                            arr_24 [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) -1LL);
                            arr_25 [i_5] [i_0] [22ULL] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) arr_15 [i_0] [i_3 + 1] [i_2] [i_3 + 1] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_3 + 1] [i_2] [(_Bool)1] [i_5])) : (((/* implicit */int) arr_15 [i_0] [i_3 + 1] [i_0] [i_3] [i_3])));
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_15);
                        }
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12979890882112363854ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (628405581U) : (((/* implicit */unsigned int) 8388604))))) : (arr_21 [i_3 - 1] [i_0] [i_3] [i_3 - 1] [i_6 - 2])));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [(unsigned char)17])) : (((/* implicit */int) (_Bool)1))))) : (3666561696U)));
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        arr_31 [(unsigned short)16] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0)) ? (6430456144562793759LL) : (((/* implicit */long long int) var_13)))) ^ (var_1)));
                        arr_32 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)6703))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_7 [i_7] [i_1] [i_0]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_35 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2915928180U)) ? (4649137438607279084ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29110)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (var_7))) : (var_7)));
                        arr_36 [i_0] = ((/* implicit */_Bool) var_14);
                        arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) var_7));
                    }
                    var_24 = ((/* implicit */signed char) ((unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_25 = ((/* implicit */short) ((unsigned int) (unsigned short)11428));
                    /* LoopSeq 2 */
                    for (short i_10 = 1; i_10 < 24; i_10 += 3) 
                    {
                        arr_43 [i_0] [i_1] [0ULL] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (3ULL) : (((/* implicit */unsigned long long int) var_13)))) < (((/* implicit */unsigned long long int) -1142513745200008355LL))));
                        arr_44 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (11880615540344031725ULL) : (((/* implicit */unsigned long long int) 1232375795))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [20U] [i_1] [(unsigned short)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (628405586U)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_47 [i_0] [i_0] [18LL] = ((/* implicit */long long int) var_6);
                        var_27 = ((/* implicit */_Bool) (-(arr_3 [i_0] [i_1] [i_9])));
                        arr_48 [i_0] [i_9] [i_0] [i_0] [i_1] [13U] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (9223372036854775807LL) : (17LL));
                    }
                }
                /* vectorizable */
                for (long long int i_12 = 1; i_12 < 24; i_12 += 3) 
                {
                    arr_52 [i_0] [i_0] = ((unsigned long long int) 18446744073709551613ULL);
                    arr_53 [i_0] [i_0] [i_12] = ((/* implicit */long long int) (unsigned char)166);
                    arr_54 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) (unsigned short)5209));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_5);
    var_29 = ((/* implicit */unsigned char) var_7);
}
