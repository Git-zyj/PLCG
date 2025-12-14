/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244538
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (var_5)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_2 [i_0 - 2])))));
                        var_17 = ((/* implicit */unsigned int) max((max((arr_8 [i_0 - 3]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((var_4), (var_11))))));
                        arr_10 [i_2] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) var_8)), (arr_5 [3ULL] [i_2] [i_2])));
                        arr_11 [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) var_10))) && (((/* implicit */_Bool) ((var_4) ? (arr_4 [4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221)))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))) : (arr_5 [i_3] [i_2] [i_0]))) : (((/* implicit */long long int) arr_4 [i_0 + 1]))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) 1185215923);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) 
        {
            var_18 = ((/* implicit */long long int) (-(arr_7 [i_4 - 3] [i_0 + 1])));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (short)-12280)) : (((/* implicit */int) arr_2 [i_4]))))));
            arr_15 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (1185215909)))));
            arr_16 [i_0] = ((/* implicit */unsigned char) arr_14 [i_4 + 3] [i_0 - 2]);
            var_20 = ((/* implicit */long long int) ((unsigned int) arr_14 [i_0 - 3] [i_4 + 1]));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_21 = ((arr_3 [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned long long int) arr_7 [i_6] [i_5]);
                    arr_28 [i_5] [i_5] [i_5] [i_8] = ((((/* implicit */_Bool) -6822853480076271054LL)) ? (-6846308271043727426LL) : (((/* implicit */long long int) 1185215916)));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_23 [i_5 + 1]))));
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) * (arr_4 [i_7 + 1])));
                }
                for (unsigned short i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    var_25 = (+(((unsigned int) var_14)));
                    var_26 = ((/* implicit */_Bool) arr_26 [i_9 + 2] [(unsigned short)6] [(unsigned short)7] [(unsigned short)6] [i_5]);
                }
                for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) (unsigned char)0);
                    var_28 = ((/* implicit */_Bool) 2168173607279361627LL);
                }
                var_29 = ((/* implicit */signed char) ((long long int) arr_26 [9] [9] [11LL] [9] [i_6 - 1]));
                var_30 = ((/* implicit */unsigned int) (unsigned short)60502);
                arr_33 [i_5] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_7 + 1]))));
            }
            for (int i_11 = 3; i_11 < 12; i_11 += 2) 
            {
                arr_36 [i_5] [(signed char)12] [i_11] = ((/* implicit */unsigned int) -1185215933);
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 4) 
                {
                    var_31 = ((/* implicit */signed char) -6822853480076271046LL);
                    arr_39 [i_6 + 3] [i_11] [i_6 + 3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1)));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_12 + 1] [i_11 - 1] [i_6 + 2] [i_5 + 2])) >= ((-(-1185215930)))));
                }
                for (signed char i_13 = 1; i_13 < 12; i_13 += 4) 
                {
                    var_33 -= ((/* implicit */long long int) arr_6 [12U] [i_6] [12U]);
                    var_34 = (+(((/* implicit */int) var_11)));
                    arr_42 [i_5] [9ULL] [i_11 - 2] [i_13 - 1] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_5] [i_6] [i_11 - 1] [i_5 + 1] [i_11 - 1] [i_5]))));
                    var_35 -= ((/* implicit */int) ((arr_37 [i_5] [i_6 - 2] [10LL] [i_13] [i_6] [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1024)))));
                    arr_43 [i_13] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) var_5)));
                }
                arr_44 [i_5] [(_Bool)1] = ((/* implicit */int) arr_29 [10U] [10U] [0U] [0U]);
                arr_45 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32571))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)1]))) / (var_12)))));
            }
            arr_46 [i_5] = 18446744073709551600ULL;
            arr_47 [i_6 + 1] [i_5] = ((/* implicit */unsigned int) arr_22 [i_5] [i_6]);
        }
    }
    var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_0)));
    var_37 = ((/* implicit */unsigned short) ((var_11) ? (((max((((/* implicit */long long int) (unsigned short)65535)), (var_3))) * (((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (unsigned short)65527))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (_Bool)1)))))))));
}
