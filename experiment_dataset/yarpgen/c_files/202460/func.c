/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202460
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((15798837701989160576ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)8081), (((/* implicit */short) arr_0 [i_0]))))))))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_14))));
                    var_20 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [0ULL] [i_2]))) % (4329135340641091343ULL))))) | (min((4329135340641091356ULL), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_8)))))))));
                }
                for (int i_3 = 4; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_10 [i_0] [i_0])))) | (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0])))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) 4556165322176692151LL))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1LL)), (var_0)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-4440))))))) : (((/* implicit */int) arr_5 [(short)2] [(short)2] [i_0]))));
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    var_22 = (((_Bool)1) ? (4611686018427387903ULL) : (17318542565551298992ULL));
                    var_23 = ((/* implicit */short) 9223372036854775802LL);
                    arr_15 [i_1] = ((/* implicit */unsigned char) 7587665681520958533ULL);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_1])))))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_4] &= ((/* implicit */int) -4556165322176692151LL);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14024327774929865241ULL)) ? (((/* implicit */int) arr_18 [i_0] [i_6])) : (((/* implicit */int) var_8))))) == (1961762508929202238ULL))))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) ((arr_17 [9LL] [i_1] [i_1] [i_1] [i_1]) < (((/* implicit */int) var_14))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4 + 2] [i_7]))) : (arr_12 [(unsigned char)2] [i_4 + 2] [i_7])));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) arr_5 [i_4 - 4] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) arr_5 [i_4 - 3] [i_4 + 1] [i_4 - 3])))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((var_16) + (var_16))))));
                    }
                }
                for (int i_8 = 4; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_1] [i_1] [i_0] [i_10] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4ULL))))) : (((/* implicit */int) arr_18 [i_1] [i_1]))));
                                var_31 = (~(((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_1] [i_9])), (var_2)))));
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(-1LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */signed char) var_15)), ((signed char)8))), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (6678098398270042273ULL)))) ? (((/* implicit */unsigned long long int) arr_20 [i_10] [i_9] [i_8 - 3] [i_1] [3ULL])) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                                arr_36 [i_1] [i_8] [i_1] [i_1] = ((_Bool) var_5);
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min((5889526027659798802ULL), (13835058055282163712ULL)))) ? (((/* implicit */unsigned long long int) var_10)) : (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15350))) : (var_7))))));
                }
                arr_38 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -551827675002793271LL)) || (arr_27 [i_0] [i_1] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) arr_29 [8LL] [i_1] [8LL] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) ((17192843376029258236ULL) < (var_6)))))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) var_14);
}
