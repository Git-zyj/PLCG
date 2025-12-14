/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210068
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned char) (signed char)-6)))));
                        arr_9 [i_0 + 2] [i_2] [1ULL] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (((_Bool)0) || (var_5))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((unsigned long long int) var_10);
        var_14 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        var_15 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)58100)) : (((/* implicit */int) (_Bool)0)))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (0ULL)))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0 + 3] [i_0 + 2])));
            arr_13 [i_0 + 1] [i_0 + 1] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_7)));
        }
    }
    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 + 1])) || (((/* implicit */_Bool) arr_14 [i_5 + 1])))));
        var_17 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
        var_18 *= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_14 [i_5 - 1])))));
    }
    for (short i_6 = 4; i_6 < 9; i_6 += 4) /* same iter space */
    {
        var_19 = ((min((((/* implicit */int) var_10)), ((~(((/* implicit */int) (signed char)-106)))))) ^ (((/* implicit */int) ((signed char) min((var_7), (((/* implicit */short) (signed char)127)))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-118)) | (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6 - 3] [i_6 + 1]))))) : (((/* implicit */int) (short)-32767)))))));
    }
    for (short i_7 = 4; i_7 < 9; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_24 [i_7] [i_7] = ((/* implicit */_Bool) (+(min(((~(var_6))), (((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32750))))))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [i_7 - 3])))) % ((((-(-4957110131492394940LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))))));
                        var_22 = ((/* implicit */short) arr_23 [i_7] [i_7] [i_7]);
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) max((var_23), (min(((signed char)68), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */int) (unsigned char)95)) | (((/* implicit */int) (_Bool)1)))))))))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_23 [i_7] [2ULL] [i_7])), ((+(2624047109043685399ULL))))), (((/* implicit */unsigned long long int) ((signed char) arr_3 [i_7] [i_7 - 4] [i_7 - 4]))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_11 = 1; i_11 < 10; i_11 += 4) 
        {
            var_25 ^= ((/* implicit */signed char) (-(((unsigned long long int) var_6))));
            arr_33 [i_11] [i_7] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)52125)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)1)))));
        }
        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned short i_15 = 1; i_15 < 9; i_15 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((_Bool) 6ULL)))));
                            var_27 ^= (_Bool)1;
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) && (((((/* implicit */int) arr_22 [i_7 - 3] [i_12] [i_13])) != (((/* implicit */int) (_Bool)1))))));
                            arr_45 [i_7] [i_12] [i_7] [i_7] [i_15 + 3] = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_15])) & (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (short)-23266)) : (((/* implicit */int) (_Bool)1)))))))) << (((((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (12ULL))) - (18446744073709551558ULL))));
                            var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_44 [(unsigned short)8] [(unsigned short)8] [i_15 + 2] [i_14 - 1] [i_15] [(_Bool)1] [i_12])) / (((/* implicit */int) arr_27 [i_12] [i_13] [i_14] [i_15 + 1]))))))), (((unsigned long long int) max((((/* implicit */short) (_Bool)1)), (var_11))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) > (-4957110131492394940LL))))))));
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_7 - 1])) > (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_1 [i_7] [i_12]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_12] [i_7] [i_7])))))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_18 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                var_33 = ((((arr_19 [i_7]) | (((/* implicit */long long int) ((/* implicit */int) (short)-31024))))) < (((/* implicit */long long int) ((/* implicit */int) var_2))));
            }
            for (short i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                var_34 -= ((/* implicit */short) (((((_Bool)0) || (((_Bool) (_Bool)1)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_4), (arr_30 [i_7 - 3] [i_7] [i_7] [i_7] [i_7 - 3]))))));
                var_35 = ((/* implicit */signed char) ((min((arr_39 [(unsigned char)11] [i_7] [(signed char)1] [i_7 - 2]), (arr_39 [i_7] [(short)5] [(_Bool)1] [i_7 - 3]))) * (((arr_39 [i_7] [i_7] [i_7 + 2] [i_7 - 4]) ^ (arr_39 [i_7] [i_7 - 3] [i_7] [i_7 - 1])))));
                arr_50 [i_7] [1ULL] [(signed char)10] = ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_16 [i_7 - 1])), (18446744073709551615ULL)));
                arr_51 [i_7] [i_12] = ((/* implicit */short) ((int) var_6));
            }
        }
    }
    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_0)))))));
    var_37 *= ((/* implicit */unsigned short) (!(var_0)));
}
