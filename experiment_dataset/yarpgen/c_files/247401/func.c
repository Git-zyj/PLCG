/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247401
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((unsigned long long int) ((signed char) arr_7 [i_0] [i_0] [i_1 + 2] [i_0])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            arr_14 [i_0] [0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) var_6);
                            var_15 -= (~(((/* implicit */int) arr_12 [i_4] [i_0])));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) arr_7 [i_1 + 2] [i_3 - 1] [i_3 + 1] [i_4])))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_3 + 1]))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)3]))) % (9588808341443791591ULL))) < (var_4)))))));
                            arr_18 [i_0] [9LL] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_3))));
                        }
                        arr_19 [i_0] [i_3 - 1] [i_1 - 1] [5ULL] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)28667)), (((((/* implicit */_Bool) ((int) -1361071897))) ? (((/* implicit */int) arr_6 [i_1] [i_1 + 2] [8U])) : (((/* implicit */int) (short)-29055))))));
                        var_20 ^= ((/* implicit */signed char) (((+(arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_3 - 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_0] [(short)0] [i_0] [i_2] [i_0]))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            arr_25 [i_6] [i_6] [(unsigned short)4] [i_2] [i_1] = ((/* implicit */long long int) var_2);
                            var_21 = ((/* implicit */unsigned int) ((((unsigned long long int) min((((/* implicit */unsigned int) (short)809)), (3204282431U)))) >> (((var_7) - (2989707137013800313LL)))));
                            var_22 = ((/* implicit */signed char) arr_21 [i_0] [i_2] [i_0] [i_0] [i_0]);
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_23 &= ((/* implicit */long long int) arr_7 [(unsigned short)9] [i_1 - 1] [4LL] [i_6]);
                            var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((unsigned long long int) var_6)) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned short)9] [i_1 - 1] [(unsigned short)8] [(unsigned short)9] [i_1 + 2])))))), (min((((/* implicit */unsigned long long int) (signed char)-117)), (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_0] [i_8])))))))));
                            arr_28 [i_0] [0ULL] [i_2] [i_6] [i_2] [i_6] [i_8] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) : (17083630321403418758ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_8] [i_0] [i_6] [i_8] [i_2])) < (((/* implicit */int) arr_23 [i_0] [i_8] [i_8] [i_6] [2LL] [i_8]))))))));
                            arr_29 [i_0] [i_2] [i_2] [(signed char)1] = ((/* implicit */long long int) ((short) ((unsigned long long int) -8464330430891811934LL)));
                        }
                        for (short i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) (+((+(((/* implicit */int) ((signed char) 33913582)))))));
                            var_26 = ((/* implicit */unsigned short) ((unsigned long long int) 1010271265073246473LL));
                        }
                        for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) (signed char)49)) >> (((7424384781623629593ULL) - (7424384781623629577ULL))))))));
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) (signed char)-24)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) min((((((7353568965047705816ULL) | (((/* implicit */unsigned long long int) var_6)))) ^ (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [(short)1] [i_0] [i_1 + 1])))), (((/* implicit */unsigned long long int) (!(((arr_16 [i_0] [i_1] [i_2] [9LL] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44305))))))))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (signed char)-95))));
                            arr_38 [i_0] [i_1] [i_2] [i_6] [i_6] [i_2] [i_0] = ((/* implicit */signed char) var_3);
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) 9006279691403924919LL))));
                            var_32 |= ((/* implicit */unsigned short) ((((int) arr_35 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_11])) << (((((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_11])) ? (arr_17 [i_1 + 3] [i_0]) : (arr_17 [i_0] [i_0]))) - (1512101428)))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                        {
                            var_33 += ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_6] [(signed char)6]))) - (55686)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] [i_6]))))) : (((((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_2] [i_2] [i_12] [i_12] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1 + 2] [i_12]))) : (arr_31 [i_0] [i_12] [i_0] [i_0])))))) : (var_0)));
                            var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_1 + 1]) | (((/* implicit */unsigned long long int) 8464330430891811933LL))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]))) + (min((((/* implicit */unsigned long long int) var_9)), (var_0))))) : (((/* implicit */unsigned long long int) (-(2097151))))));
                            var_35 = ((/* implicit */int) (((~((-(arr_31 [(unsigned short)10] [i_1 + 1] [i_2] [(short)7]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-4048)) || (((/* implicit */_Bool) 1090684865U))))))));
                            arr_41 [10LL] [i_1 + 3] [3U] [i_2] [i_12] = (-(((((/* implicit */long long int) 2097125)) / (8464330430891811933LL))));
                        }
                    }
                    arr_42 [3] [3] [i_1 + 2] [i_2] = ((/* implicit */long long int) var_5);
                }
            } 
        } 
        arr_43 [(unsigned short)7] = ((/* implicit */long long int) var_4);
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            arr_46 [i_0] [i_13] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (((arr_0 [i_13]) & (arr_0 [i_13])))));
            var_36 = ((/* implicit */short) ((long long int) arr_33 [i_13] [i_13] [i_13] [i_0] [(unsigned short)8] [i_13] [i_0]));
            var_37 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (short)22641)) / (((/* implicit */int) (unsigned short)48650))))), (arr_0 [i_0])));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)0))))))) * (((long long int) arr_15 [i_13]))));
        }
        arr_47 [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]));
        var_39 = ((/* implicit */short) (unsigned short)0);
    }
    for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 2) 
    {
        arr_50 [i_14] [i_14 + 2] = ((/* implicit */signed char) (-(-4011550407124280560LL)));
        var_40 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4080))));
    }
    var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) var_1))));
}
