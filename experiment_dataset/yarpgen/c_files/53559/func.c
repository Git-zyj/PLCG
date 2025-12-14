/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53559
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned char) var_17)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))), ((-(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-7998435052780115733LL) + (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
    var_19 = var_6;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
        var_20 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_21 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (min((1628321341593790117ULL), (((/* implicit */unsigned long long int) 7998435052780115741LL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(arr_7 [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                var_23 += ((/* implicit */unsigned short) arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 1]);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    arr_13 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) -7998435052780115733LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7998435052780115735LL)))))) : (7998435052780115753LL)));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [(_Bool)1]))) * ((-(arr_5 [12] [i_4])))))));
                }
            }
            for (signed char i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                arr_16 [11U] [i_1] [6] [0ULL] = ((/* implicit */unsigned char) (+(var_1)));
                var_25 = ((/* implicit */signed char) arr_8 [i_1] [11LL] [i_1]);
                var_26 = ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1]);
            }
        }
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (arr_4 [i_1])))) ? (min((((((/* implicit */int) arr_17 [i_1] [i_6] [i_1])) ^ (((/* implicit */int) var_11)))), (((/* implicit */int) min((((/* implicit */short) arr_18 [i_1] [i_1])), ((short)30048)))))) : ((~((~(((/* implicit */int) var_12))))))));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                arr_23 [i_1] [i_6] [i_6] = max((((/* implicit */unsigned long long int) var_2)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) var_13))) : (max((((/* implicit */unsigned long long int) var_2)), (var_1))))));
                var_28 = ((/* implicit */unsigned int) arr_10 [i_1]);
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_1])) > (((/* implicit */int) var_11)))))) | (((/* implicit */int) ((min((var_6), (((/* implicit */long long int) arr_22 [i_1] [i_1] [i_7])))) >= ((~(-7998435052780115733LL))))))));
                var_30 = ((unsigned char) min((arr_21 [i_1] [i_6] [i_7]), (arr_21 [i_1] [i_6] [i_7])));
            }
            /* vectorizable */
            for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [12ULL] [i_8 - 1]))))))))));
                var_32 = ((/* implicit */int) arr_3 [i_8] [i_1]);
                var_33 = ((/* implicit */signed char) ((unsigned long long int) arr_25 [i_1] [i_1] [i_1] [i_8]));
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_10 [i_1])))))), ((~(min((7998435052780115733LL), (((/* implicit */long long int) (unsigned char)1))))))));
            var_35 -= ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) arr_10 [i_9])), (arr_5 [i_9] [i_9]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [18ULL]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_1] [i_9]), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_8)))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
        {
            var_36 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_10]))) > (1090330344024485166ULL)));
            /* LoopSeq 1 */
            for (short i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                var_37 = ((/* implicit */unsigned char) (short)-30030);
                var_38 = ((/* implicit */signed char) ((((17356413729685066433ULL) + (((/* implicit */unsigned long long int) -7998435052780115735LL)))) >> (((((arr_17 [i_1] [i_10] [i_11]) ? (17356413729685066433ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (85ULL)))));
            }
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 1; i_14 < 13; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */int) max((var_39), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (-9095702170709794569LL))))))));
                            arr_43 [7LL] [i_10] [i_1] [i_10] [i_10] [(unsigned short)3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [(unsigned char)13] [5U] [(unsigned char)13]))) : (arr_3 [i_1] [i_1])))));
                        }
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((arr_11 [(unsigned char)9] [i_10] [(unsigned char)3] [i_13]) - (arr_11 [i_1] [i_10] [i_12] [i_13]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_1] [i_10])) << (((((/* implicit */int) arr_15 [i_15] [i_10])) - (78)))));
                var_42 = ((/* implicit */unsigned long long int) ((unsigned char) (!(arr_32 [i_1] [i_10] [i_10] [13U]))));
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_15] [i_15] [i_1] [i_15])) ? (((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1]))));
            }
            arr_48 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [(_Bool)1] [i_1] [i_10])) | (((/* implicit */int) arr_22 [i_1] [i_1] [i_1]))));
        }
        var_44 = arr_35 [13ULL] [13ULL] [(unsigned char)14];
    }
}
