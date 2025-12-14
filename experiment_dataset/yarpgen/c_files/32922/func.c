/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32922
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))));
        var_16 = ((/* implicit */unsigned int) ((arr_1 [i_0]) ? (1350364001) : (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */short) (~(((/* implicit */int) (!(arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned short) ((min((4294967272U), (((/* implicit */unsigned int) (_Bool)1)))) != (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_5)))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) arr_3 [i_2] [i_1]);
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                arr_10 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-10498)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2240))) : (13U))) >> (((((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1] [i_1 - 1])) * (13075543960819656384ULL))) - (6705174417408921150ULL)))));
                var_20 = var_14;
                var_21 += ((/* implicit */_Bool) (~(((/* implicit */int) ((short) (-(((/* implicit */int) arr_4 [i_1]))))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 3; i_4 < 24; i_4 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_2] [i_2])) != (max(((~(((/* implicit */int) var_3)))), (((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) arr_11 [i_1 - 1] [i_2] [i_2] [i_4]))))))));
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4U)) ? (321539435U) : (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) var_13))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)8128)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10498))) : (((((/* implicit */_Bool) 31U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (0ULL)))))));
                    var_24 += ((/* implicit */unsigned char) min((268434432), (2147483647)));
                    var_25 = ((/* implicit */unsigned char) -1011990498);
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_1 - 2]))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 31U)))))));
                        var_27 = ((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1 + 1]);
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) arr_4 [(unsigned char)22])) : (((/* implicit */int) (unsigned short)65514))))) || (((/* implicit */_Bool) arr_17 [6] [(short)13] [i_3] [i_2])));
                    }
                }
                var_29 = ((/* implicit */unsigned char) (+(-1186210091)));
            }
            for (short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
            {
                arr_20 [5U] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_12 [i_1 - 2] [i_2] [i_1 + 1] [i_2]), (arr_12 [i_1 + 1] [i_2] [i_1 - 2] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_12 [i_1 - 2] [i_2] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_12 [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2]))))) : (((unsigned long long int) arr_12 [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 1]))));
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)49))))) ? (min((1073733632U), (((/* implicit */unsigned int) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7])))) : (min((arr_9 [i_7] [i_8]), (((/* implicit */unsigned int) var_7)))))))));
                    var_31 *= var_13;
                    var_32 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)15360)), (31U)))) ? ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))) : (1048575)))) * (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (16777088)))) : (24U)))));
                }
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_33 = ((/* implicit */_Bool) arr_18 [i_7] [i_2] [(short)19]);
                    var_34 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1 - 2] [i_2])) ? (arr_7 [i_2] [i_1 - 2] [i_2]) : (((/* implicit */int) (unsigned short)24026))))), (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */unsigned int) arr_5 [i_1 - 2])) : (4294967285U)))));
                }
                for (unsigned char i_10 = 1; i_10 < 24; i_10 += 1) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((4294967264U) >> (((((/* implicit */int) arr_17 [i_1] [i_2] [i_7] [i_10])) - (63782)))))) ? (((((/* implicit */_Bool) (short)27784)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (511U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) >= (min((11ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                }
                var_37 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_25 [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) var_13)))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (unsigned char)0))))));
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (_Bool)1))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_39 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_27 [i_1] [i_11] [5U] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_11] [i_2] [(unsigned char)24])) : (-299257139)))));
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 24; i_12 += 2) /* same iter space */
    {
        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) 5U))));
        arr_33 [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18855)) ? (((/* implicit */int) var_9)) : (-2147483647)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967291U)) || (arr_11 [(signed char)12] [i_12] [i_12] [i_12])))) : (((/* implicit */int) var_6)))), ((+(((/* implicit */int) arr_29 [i_12] [i_12] [i_12] [i_12]))))));
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))), (var_14)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) (unsigned short)62)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned short)4] [i_12] [i_12] [i_12] [i_12]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (18446744073709551615ULL)))))));
        var_43 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)26111)), (((((/* implicit */_Bool) 748623832689030685ULL)) ? (((/* implicit */unsigned int) var_7)) : (arr_19 [i_12] [i_12] [i_12] [i_12]))))) >> (((max((((/* implicit */unsigned int) arr_30 [i_12] [i_12] [i_12 + 1] [i_12] [(unsigned short)18] [i_12])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12))))) - (4294967211U)))));
    }
    var_44 = ((/* implicit */unsigned int) (_Bool)0);
    var_45 = ((/* implicit */int) max((((/* implicit */long long int) 5U)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_14)))) ? ((+(-1845218656015124326LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
}
