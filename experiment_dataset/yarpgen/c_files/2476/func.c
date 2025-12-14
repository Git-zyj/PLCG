/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2476
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
    var_11 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) & (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        var_13 ^= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5016124774544037405LL))))) : (((/* implicit */int) (short)32762)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) 2138832925);
                                var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [(signed char)21] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_3)));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-32754)) == (((/* implicit */int) (signed char)-4)))))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_21 [(_Bool)1] = ((/* implicit */short) var_2);
        arr_22 [i_5] [i_5] |= ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_10))))) > (((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])) >= (arr_2 [i_5])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((int) min((arr_15 [i_5] [(short)12] [i_5] [i_5] [i_5] [i_5]), ((signed char)-10)))));
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (~((+((-(((/* implicit */int) (short)10689))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_8))));
            arr_29 [(unsigned char)10] [i_7] [i_6] = ((/* implicit */short) var_0);
            arr_30 [i_7] = -1811548715;
            arr_31 [i_7] [(unsigned short)15] = ((/* implicit */short) ((arr_25 [i_6]) & (((/* implicit */int) var_8))));
        }
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            arr_35 [i_6] [i_6] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) / (var_0)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((arr_36 [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))))) : (min((((unsigned long long int) (signed char)0)), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)150)))))));
                        arr_41 [i_6] [i_8] [i_6] [i_9] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) / ((+(max((-1790483554), (((/* implicit */int) var_8))))))));
                        var_20 += arr_20 [i_8];
                    }
                } 
            } 
            var_21 ^= ((/* implicit */int) var_9);
        }
        for (long long int i_11 = 2; i_11 < 21; i_11 += 3) 
        {
            arr_44 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((arr_40 [i_6] [i_11] [i_11] [i_6]), (((/* implicit */long long int) arr_38 [i_6] [4U] [i_11 - 1] [i_11] [i_11]))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) arr_40 [i_11] [i_11] [16] [i_6])) : (var_7)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned char)8))))))), (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (arr_6 [(unsigned char)23]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        arr_50 [i_6] [i_11] [(unsigned short)1] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (signed char)124))) << ((((((+(arr_28 [i_6]))) >> (((max((arr_4 [(unsigned char)1]), (((/* implicit */long long int) var_8)))) - (8285LL))))) - (115879504U)))));
                    }
                } 
            } 
            arr_51 [i_11] [i_11] [i_6] = ((/* implicit */signed char) var_3);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) > ((((+(((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) ((unsigned short) (signed char)-117))) - (65415))))))))));
        }
        for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 14731198778302289800ULL)) ? (var_0) : (((/* implicit */unsigned long long int) var_6)))))), (arr_25 [i_6]))))));
            var_25 = ((/* implicit */unsigned short) var_6);
            arr_54 [i_14] = ((/* implicit */unsigned long long int) (~(-5155433423387707363LL)));
            var_26 += ((/* implicit */unsigned int) var_1);
            arr_55 [i_6] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) arr_27 [i_14] [i_14 + 2] [(short)7]))))) ? (((long long int) arr_27 [i_14] [i_14 + 2] [17ULL])) : (((/* implicit */long long int) ((/* implicit */int) ((1811548730) != (((/* implicit */int) (unsigned short)57588))))))));
        }
        arr_56 [20] = ((/* implicit */unsigned char) var_2);
        var_27 = ((((((/* implicit */int) (signed char)-18)) + (2147483647))) >> ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [18] [i_6])) && (((/* implicit */_Bool) var_8))))))));
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_7)));
}
