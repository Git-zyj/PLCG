/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215161
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
    var_10 = ((/* implicit */unsigned short) var_1);
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_8)))))))));
    var_12 |= ((/* implicit */long long int) var_2);
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) var_8)), (-1095409688066418579LL)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_14 |= ((min((((/* implicit */unsigned int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [16ULL])))))), (var_1))) - (((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [18LL]))))));
        var_15 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [(unsigned short)6]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1603687856U)) ? (510U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [(unsigned char)16])))), (((((((/* implicit */int) var_4)) + (2147483647))) << (((/* implicit */int) var_7))))))) < (((((/* implicit */_Bool) ((int) arr_1 [(unsigned short)4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0U]))) : ((~(3964374547U)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_0 [(short)20]))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned long long int) arr_0 [0])))));
        arr_5 [i_1] = ((/* implicit */int) (_Bool)1);
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) % ((~(((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [4U])))))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned short)51087))))) ? ((+(((/* implicit */int) (unsigned short)14609)))) : (((/* implicit */int) (short)18789)))) >> (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (arr_4 [i_2] [i_2]))))))));
        arr_8 [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [8]))));
    }
    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) 746981219);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)4)) < (-746981219)))) % (((/* implicit */int) (unsigned short)22557))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((signed char) 746981219)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            arr_13 [i_3] [i_4] = (~(((/* implicit */int) (unsigned short)21165)));
            var_24 ^= ((/* implicit */_Bool) var_2);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 3; i_6 < 11; i_6 += 1) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((unsigned int) (unsigned short)35625)))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1170712450)))) ? (((((/* implicit */_Bool) (unsigned short)56370)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (signed char)62)))) : (((((/* implicit */int) arr_17 [(signed char)11] [i_5] [(signed char)11] [i_7])) >> (((arr_21 [(short)1] [i_5]) - (905037012))))))))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_26 [i_6] [i_3] [0LL] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)5351)) - (((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */int) arr_1 [i_3])) : (((((/* implicit */_Bool) 1376205180U)) ? (((/* implicit */int) (unsigned short)58825)) : (((/* implicit */int) (unsigned short)3)))));
                        arr_27 [i_3 + 1] [i_5] [i_6] [i_7] [(unsigned short)3] [3LL] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_3 - 1] [(unsigned short)9] [i_6 + 3]))));
                    }
                    for (int i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        arr_30 [i_9] [(signed char)4] [i_5] [i_5] [i_5] [i_3] [i_3] &= ((/* implicit */unsigned int) arr_23 [i_9] [i_5]);
                        arr_31 [(unsigned char)2] [i_5] [i_6] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_3])) != (((/* implicit */int) arr_0 [i_3]))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        var_27 |= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) : (2918762116U)));
                        var_28 = ((/* implicit */unsigned int) arr_24 [(short)13] [14U] [i_6] [14U] [i_10]);
                    }
                }
            }
            /* LoopSeq 4 */
            for (unsigned short i_11 = 4; i_11 < 14; i_11 += 3) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_3])) : (arr_21 [i_3] [i_5])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_10 [i_11 + 1] [(_Bool)1]))) : (((/* implicit */unsigned int) ((int) arr_23 [(unsigned short)2] [i_3])))));
                arr_36 [i_5] [i_11] [i_5] [i_5] |= ((/* implicit */signed char) arr_6 [i_3 - 1]);
            }
            for (unsigned int i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) arr_23 [i_3] [i_5]))))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12 + 1] [i_3 - 1] [i_12 + 1]))) : (4220789750391685292ULL)));
                var_32 = ((/* implicit */long long int) ((signed char) arr_12 [i_12 + 1] [6U] [6U]));
            }
            for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_3]))));
                var_34 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_40 [(unsigned char)10] [i_3] [i_3])) ? (arr_34 [3LL] [3LL] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [4] [i_5] [i_13] [i_5] [(signed char)6]))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))));
            }
            for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                var_35 = (+(1322910199));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_3] [(unsigned char)12] [i_3 + 1] [i_5] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10321))) : (arr_38 [i_3] [i_5] [i_14])));
            }
            arr_43 [i_3] [i_5] = ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_5])) ? (((/* implicit */int) arr_22 [9LL] [i_3] [i_3 - 1] [i_3 - 1] [i_5])) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_3 - 1] [i_5] [i_5])));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (short)-18787)) : (((((/* implicit */int) (unsigned short)22557)) / (((/* implicit */int) arr_39 [i_5] [(signed char)3] [(signed char)3] [i_3]))))));
            var_38 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)12)) >= (((/* implicit */int) arr_40 [12LL] [i_3] [i_3]))))) : (((/* implicit */int) arr_15 [i_3 + 1] [i_3] [i_3 + 1]))));
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 13; i_15 += 4) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [7LL] [i_15])) || (((/* implicit */_Bool) arr_23 [14LL] [i_3])))))));
            var_40 = ((/* implicit */unsigned char) ((signed char) ((2731248521U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51102))))));
        }
    }
}
