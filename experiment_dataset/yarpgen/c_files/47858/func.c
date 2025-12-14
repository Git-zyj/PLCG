/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47858
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
    var_12 -= ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (var_1)))) > ((-(var_3)))))), (((max((((/* implicit */int) var_11)), (100663296))) ^ (((/* implicit */int) arr_4 [i_1] [i_0])))))))));
                var_14 += ((/* implicit */unsigned char) var_1);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 3; i_2 < 24; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_14 [(unsigned char)10]))));
                    var_16 = ((/* implicit */unsigned long long int) (unsigned char)223);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 24; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 24; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            arr_25 [i_2] [i_2] = ((/* implicit */long long int) var_8);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (unsigned char)229))));
                            var_18 = ((/* implicit */long long int) (-(((int) arr_5 [i_2]))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) % (var_4)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) <= (var_1))))) : (((/* implicit */int) ((signed char) (-(2807565969U)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_9 = 1; i_9 < 24; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    for (signed char i_11 = 2; i_11 < 23; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_29 [14U] [i_2] [14U] [i_10] [(signed char)15]))) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)24133))))));
                            var_21 = arr_17 [i_10] [i_2] [i_9 - 1];
                            arr_32 [i_2] [i_10] = var_5;
                            var_22 = ((/* implicit */long long int) arr_23 [i_2] [(unsigned char)23] [22] [(unsigned short)0] [i_2] [i_2]);
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -342362051)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                arr_37 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_30 [i_2] [i_2] [i_5] [i_5] [i_5] [i_2] [i_12])) : (((/* implicit */int) var_7))))) ? (arr_29 [i_2] [i_2] [i_2] [i_2] [i_2]) : (var_2)));
                var_25 = ((/* implicit */unsigned char) ((((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_12]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) : (arr_11 [i_5]))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 4; i_13 < 23; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            arr_43 [i_2] [12] [i_12] [i_2] [i_2] [i_12] [i_2] = ((/* implicit */short) arr_11 [i_2]);
                            arr_44 [i_2] [i_2] [i_2] [i_13] [i_2] [i_14] [i_14] = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(var_3)))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (short)-32766))))), ((-(arr_19 [i_17] [i_2] [5ULL] [i_15] [i_2] [i_2]))))))));
                        var_27 = (i_2 % 2 == zero) ? (((/* implicit */int) ((((long long int) min((arr_35 [i_2] [(signed char)14] [i_16] [23]), (((/* implicit */unsigned int) (unsigned short)6))))) >> (((arr_8 [i_2]) - (471059486790641237ULL)))))) : (((/* implicit */int) ((((long long int) min((arr_35 [i_2] [(signed char)14] [i_16] [23]), (((/* implicit */unsigned int) (unsigned short)6))))) >> (((((arr_8 [i_2]) - (471059486790641237ULL))) - (17009302909200947264ULL))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) 4294967285U))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(var_4))))))))));
}
