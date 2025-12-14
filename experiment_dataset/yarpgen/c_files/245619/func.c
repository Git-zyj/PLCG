/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245619
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) var_1);
                                var_20 = ((/* implicit */unsigned char) var_13);
                                arr_18 [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) arr_6 [i_1 + 1] [i_1 + 2])))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */signed char) (((((+((+(-32888420))))) + (2147483647))) << (((((min(((~(((/* implicit */int) (unsigned short)16384)))), (((/* implicit */int) max((arr_3 [11ULL] [i_1 + 2]), (((/* implicit */signed char) (_Bool)1))))))) + (16390))) - (5)))));
                arr_20 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1 + 2]))))), (max((arr_4 [i_1 + 1]), (((/* implicit */signed char) var_6))))));
                arr_21 [i_1] = ((/* implicit */signed char) (~((+(-7932079528299519931LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
    var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15))))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (signed char i_6 = 4; i_6 < 12; i_6 += 4) 
        {
            {
                arr_28 [i_6] [i_6] [i_6 + 3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5])) || (((/* implicit */_Bool) min((((/* implicit */int) arr_24 [i_5] [i_5])), (var_4)))))))));
                var_23 = ((/* implicit */long long int) arr_26 [i_5] [i_6] [10LL]);
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                            {
                                arr_39 [i_9] [i_8] [i_7] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */signed char) ((max((((/* implicit */long long int) min((var_10), (var_10)))), (max((var_11), (((/* implicit */long long int) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)67))))));
                                arr_40 [(unsigned char)1] [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_12))), ((~(((/* implicit */int) arr_22 [i_7]))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 15; i_10 += 2) 
                            {
                                var_24 = (+(((/* implicit */int) var_15)));
                                arr_44 [i_10] [i_8] [i_7] [i_7] [4] [i_5] = ((/* implicit */unsigned int) var_4);
                                arr_45 [i_7] [i_5] [(signed char)5] [(signed char)5] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned short) arr_38 [(unsigned short)9] [i_10] [i_10] [i_10] [i_10] [i_6 + 2]));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                            {
                                var_25 = ((/* implicit */_Bool) var_16);
                                var_26 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_6))))));
                                arr_48 [i_8] [i_7] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(0)))) && ((!(((/* implicit */_Bool) var_18))))));
                                arr_49 [i_7] [i_6 + 2] [i_6 + 2] [i_7] [i_7] [i_6] [i_6 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((+(18446744073709551613ULL))) : (((arr_46 [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            }
                            /* vectorizable */
                            for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                            {
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_11))));
                                var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_47 [i_7] [i_6 - 4] [i_6 - 2] [i_6 - 2] [i_6 - 4] [i_7]))));
                                var_29 = ((/* implicit */unsigned long long int) var_12);
                                var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) ((unsigned short) arr_51 [(short)4] [i_6] [i_12] [i_6] [i_12])))))));
                                arr_52 [i_12] [i_7] [8LL] [i_7] [i_5] [i_7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6 - 2] [i_6 - 1])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_30 [i_6] [i_12] [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)56))))));
                            }
                            arr_53 [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_6 + 3] [i_6 - 1] [i_7] [i_6] [i_6 - 1]))) | (var_11)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((/* implicit */int) ((((11864881545595970914ULL) << (((/* implicit */int) var_8)))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (var_4))))))), (((max((var_4), (var_14))) / (((/* implicit */int) ((var_3) >= (((/* implicit */int) var_17))))))))))));
}
