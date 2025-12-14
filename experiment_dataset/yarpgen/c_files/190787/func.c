/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190787
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
    var_19 = ((/* implicit */unsigned long long int) var_15);
    var_20 = ((/* implicit */long long int) var_14);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [14LL] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -8961513827894758988LL)) && (((/* implicit */_Bool) (unsigned short)56665)))) ? (arr_0 [i_0 - 3] [i_1 + 2]) : (7223892623662309692LL)))) && (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 1914152885135315278LL)) | (134217696ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (var_1)))))))));
                    arr_10 [i_0] [i_1] [i_2 + 2] = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (max((arr_6 [i_0] [i_0 - 3] [i_2 + 1]), (arr_6 [i_1] [i_0 + 1] [i_2 + 1]))));
                }
            } 
        } 
        arr_11 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 + 2]))))) ? (-2066271377803155861LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1] [i_0])) ? (-8961513827894758988LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_14 [i_3] [16LL] = ((/* implicit */unsigned short) (signed char)-83);
        /* LoopNest 3 */
        for (unsigned short i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_5] [i_3] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_5] [i_6]))) + (arr_13 [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)50325)) >= (((/* implicit */int) var_15))))) : (((/* implicit */int) (unsigned short)35606))));
                        arr_22 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4 - 3] [i_4])) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_6])) : (((/* implicit */int) arr_15 [i_4 + 1] [i_4]))));
                    }
                } 
            } 
        } 
        arr_23 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_3] [i_3]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((_Bool) var_17)))));
    }
    for (signed char i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        arr_26 [i_7 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [8ULL] [8ULL] [8ULL] [8ULL])), (-8961513827894758988LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7 - 3] [i_7 + 1]))) : ((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) arr_18 [i_7] [i_7 - 3] [i_7 - 1]))));
        arr_27 [i_7] [i_7] = ((/* implicit */_Bool) ((((long long int) arr_4 [i_7 - 3] [i_7 - 3] [i_7 + 1])) * (((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned short)65517)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            arr_30 [i_7 - 1] [i_8] [i_7 - 1] = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
            arr_31 [i_8] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) >= (arr_1 [i_7])));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    {
                        arr_37 [i_7] [i_7] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -6564069368063685215LL))));
                        arr_38 [i_7] [i_8] [i_8] [i_8] [i_7] [i_10] |= ((/* implicit */unsigned short) (~(arr_35 [i_7 - 3] [i_7 - 2] [i_7 - 2] [i_7 - 1])));
                        arr_39 [(signed char)9] [i_7 - 2] [i_8] [i_8] [i_9] [i_10] = (+(11192225319603371503ULL));
                        arr_40 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)82)) * (((/* implicit */int) var_5)))));
                    }
                } 
            } 
            arr_41 [i_7] = ((/* implicit */_Bool) ((long long int) (signed char)90));
            arr_42 [i_7] [i_8] = arr_24 [i_7 - 1];
        }
        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 2) 
        {
            arr_45 [(unsigned short)2] = ((/* implicit */long long int) arr_29 [i_7] [i_11]);
            arr_46 [i_7] [3LL] [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -1LL)), (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) var_18)) - (3695314582079846434ULL)))))));
            arr_47 [i_7] [10LL] = ((((var_1) / (arr_1 [i_7]))) != (arr_13 [i_7]));
            arr_48 [i_11 + 1] [11LL] = ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_7 - 2])), (((((/* implicit */_Bool) arr_2 [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_7 - 1])) : (((/* implicit */int) arr_2 [i_7 - 3]))))));
            arr_49 [i_7] [i_7] = ((/* implicit */short) (~(min((min((arr_12 [i_7 - 2] [(unsigned short)4]), (-1255998094447330353LL))), (((/* implicit */long long int) arr_5 [i_7 - 3] [i_11 - 1] [(_Bool)1]))))));
        }
    }
}
