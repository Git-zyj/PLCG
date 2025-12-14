/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42884
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
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((int) var_0))))));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned short) max((((/* implicit */short) (!((!(((/* implicit */_Bool) var_12))))))), ((short)-31772)));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)22467)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_0 [(unsigned short)7])) ? (var_4) : (((/* implicit */unsigned int) -1462065735)))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31772))))) ? (min((((/* implicit */unsigned int) (unsigned short)43068)), (arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned int) (-(arr_4 [i_1 - 1]))))));
        /* LoopSeq 3 */
        for (short i_2 = 3; i_2 < 22; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_19 *= ((((unsigned long long int) (short)-31772)) >> ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [21U] [i_3] [i_3] [i_3]))))))));
                        arr_14 [i_1] [i_2] [i_2] [i_4] [i_3 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (max((((/* implicit */long long int) var_3)), (arr_13 [i_1] [i_2] [3ULL] [i_4]))) : (((/* implicit */long long int) arr_10 [i_4] [i_4 - 2] [i_4] [i_4])))), (((/* implicit */long long int) min(((+(1902268905))), (((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_1] [i_2 - 2] [i_2] [i_4] = ((/* implicit */unsigned short) var_8);
                        var_20 = ((/* implicit */unsigned short) var_5);
                        var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1902268905)) ? (((/* implicit */unsigned int) -1902268905)) : (arr_8 [16ULL] [i_2] [i_3] [i_3])))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_1] [i_1] [(_Bool)1] [i_4])) >= (var_16)))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_7 [i_1] [(unsigned short)12] [i_1]))));
        }
        /* vectorizable */
        for (short i_5 = 3; i_5 < 22; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    arr_24 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */_Bool) ((3688785347U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24576)))));
                    var_23 &= ((/* implicit */_Bool) ((unsigned short) 0ULL));
                    arr_25 [i_1 + 1] [i_1 + 1] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((int) (short)31752));
                }
                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)211))));
            }
            arr_26 [(unsigned short)18] [i_5] = ((unsigned short) ((arr_13 [18ULL] [18ULL] [18ULL] [i_1]) >> (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_5])) - (29384)))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(arr_10 [(unsigned short)8] [(unsigned short)8] [i_5] [i_1]))))));
        }
        for (short i_8 = 3; i_8 < 22; i_8 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        {
                            arr_37 [(unsigned char)19] [i_8 - 3] [i_8] [i_10] [i_8] [i_8] [(short)3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)45)), ((unsigned short)43074)))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_11 + 1] [i_11]))))));
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1902268886)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28672)))))))) ^ (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_31 [i_1] [i_9] [i_10] [i_11]))))))));
                        }
                    } 
                } 
            } 
            arr_38 [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_33 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)22473)) ? (4503599627369984LL) : (((/* implicit */long long int) 1790008679)))) != (((/* implicit */long long int) ((/* implicit */int) ((short) arr_28 [i_1 - 1]))))))) : (((/* implicit */int) var_1))));
            var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_16 [i_8 - 2])) ? (((/* implicit */int) arr_16 [i_8])) : (((/* implicit */int) var_2))))));
        }
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_41 [i_12] = ((/* implicit */int) 2797753841U);
        arr_42 [i_12] |= ((/* implicit */signed char) arr_11 [i_12] [i_12] [i_12] [i_12]);
        /* LoopNest 3 */
        for (short i_13 = 1; i_13 < 12; i_13 += 2) 
        {
            for (unsigned short i_14 = 2; i_14 < 11; i_14 += 1) 
            {
                for (short i_15 = 3; i_15 < 11; i_15 += 2) 
                {
                    {
                        var_28 = ((/* implicit */signed char) arr_45 [(short)0] [i_14] [i_15 + 1]);
                        arr_49 [i_14] [i_13] [i_14] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_12] [i_13 + 2] [i_14] [(short)5])) <= (-4693168409839116789LL))))))) ? (((((/* implicit */_Bool) ((long long int) (unsigned short)24576))) ? (4294967232LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3871)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (unsigned short)57806))))))) : (var_11)));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((((/* implicit */int) ((unsigned short) var_4))) ^ (((/* implicit */int) arr_32 [2] [i_12])))))))));
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30303)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (short)-21428))))) ? (((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) : (((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)21)))))))));
    var_31 = ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) ((unsigned int) 53924827U)))));
}
