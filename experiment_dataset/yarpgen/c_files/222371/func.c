/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222371
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((arr_1 [6LL]) ^ (((/* implicit */unsigned long long int) arr_0 [8])))))));
        var_20 = ((/* implicit */unsigned short) ((long long int) (unsigned short)32736));
        var_21 = ((/* implicit */_Bool) var_9);
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
            var_23 = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32736)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 137422176256ULL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_3 [i_2] [i_1])))))))), (((short) (unsigned short)32787))));
        }
        var_24 = ((/* implicit */unsigned short) ((((-5447145048301733860LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)1536)) - (1536)))));
    }
    /* LoopSeq 3 */
    for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_25 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (!(var_6)))) ^ (((/* implicit */int) arr_2 [i_3 + 2]))))) == (((((/* implicit */_Bool) 4294967283U)) ? (-9223372036854775785LL) : (((/* implicit */long long int) 939524096U))))));
            var_26 = ((/* implicit */short) max((var_8), (((/* implicit */long long int) arr_12 [i_3] [i_3 + 2]))));
            arr_16 [i_3] = arr_11 [i_4] [i_3];
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_4 [i_3 + 3]) - (arr_4 [i_3 + 3]))))));
                        var_27 = ((/* implicit */_Bool) (~(var_13)));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            var_28 = ((/* implicit */signed char) arr_2 [i_3 + 3]);
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((((int) max((arr_13 [i_7 - 1] [i_7] [i_7 - 1]), (((/* implicit */int) arr_2 [(_Bool)1]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [10ULL]))))))))));
        }
        arr_26 [i_3] = (-(((/* implicit */int) (unsigned short)32787)));
        arr_27 [i_3 + 1] [i_3] = ((/* implicit */signed char) arr_18 [i_3 + 2] [i_3] [i_3] [i_3]);
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) / (((((/* implicit */_Bool) (unsigned short)32748)) ? (arr_24 [i_8] [i_3]) : (((/* implicit */unsigned long long int) -5383055590394312516LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))) : (((((/* implicit */_Bool) ((unsigned long long int) 12100045948143384961ULL))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_3] [i_8] [i_8] [i_3 - 1] [i_3] [i_3 - 1])), (var_10))))) : (arr_18 [i_3] [i_8] [11] [11])))));
            var_31 = ((/* implicit */unsigned short) arr_17 [i_3] [i_3] [i_3] [i_3]);
            var_32 |= ((/* implicit */short) ((((var_6) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 + 2] [i_3]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-24)) * (((/* implicit */int) (_Bool)0)))))));
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_9] [5U] [7U] [5U])) ? (((/* implicit */int) (unsigned short)32778)) : (((/* implicit */int) arr_15 [i_3] [i_9]))));
            var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1318902097087790912ULL), (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */unsigned long long int) -9223372036854775785LL)) : (((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3 + 2] [i_9])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_3]))))));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 18; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        var_36 = ((/* implicit */int) (unsigned short)32778);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32757)) ? (251658240) : (((/* implicit */int) (unsigned short)3))));
                        arr_40 [i_3] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_29 [i_3 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_3 + 2] [i_11] [i_3]))) : (max((4ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            arr_43 [i_12] [(unsigned short)8] [i_3 + 2] |= ((/* implicit */unsigned int) (-(((var_4) ? (arr_31 [i_3 + 1] [i_3 + 2] [i_3 + 1]) : (arr_31 [i_3 - 1] [i_3] [i_3])))));
            arr_44 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_3 [i_12] [i_3 + 3])))))))));
            arr_45 [i_3] = ((/* implicit */unsigned long long int) var_5);
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_13] [i_13] [(_Bool)1] [i_13] [i_13])) * (((/* implicit */int) arr_37 [i_13] [i_13] [i_13] [i_13] [i_13]))))) ? (max((arr_7 [i_13] [i_13] [i_13]), (((/* implicit */long long int) arr_12 [i_13] [i_13])))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        var_38 = ((/* implicit */short) ((arr_7 [i_13] [i_13] [i_13]) / (((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))));
        var_39 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-14445))))), (((unsigned int) var_7))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_40 = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_14] [i_14] [i_14] [i_14]))));
        var_41 = ((/* implicit */unsigned char) arr_9 [i_14] [i_14]);
        arr_53 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17372))) + (((((((/* implicit */_Bool) arr_4 [i_14])) ? (arr_52 [i_14] [i_14]) : (((/* implicit */unsigned long long int) arr_22 [i_14] [i_14] [i_14] [i_14])))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_18 [i_14] [i_14] [i_14] [i_14]))))))));
    }
}
