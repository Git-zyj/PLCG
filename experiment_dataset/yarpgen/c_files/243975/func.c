/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243975
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_0)));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned int) 10U));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                {
                    var_16 += ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                    arr_14 [i_2] [i_2] = ((unsigned short) arr_11 [i_2]);
                }
            } 
        } 
        arr_15 [(unsigned short)5] [i_1] = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 4; i_4 < 12; i_4 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (var_10)));
            arr_20 [i_1 - 1] [i_4 - 4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_4 + 1]))));
            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) arr_6 [i_4 - 1] [i_4 + 1]));
            var_19 ^= ((/* implicit */unsigned short) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_4 - 3])))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)45718));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) var_0);
                            arr_29 [i_7 + 1] [i_6] [i_5] [i_4] [i_1] = ((((((/* implicit */unsigned long long int) 899690806U)) ^ (3011079596845862086ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))));
                            arr_30 [i_1] [(unsigned short)4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                            arr_31 [i_1] [i_4 + 1] = var_10;
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) (((+(var_3))) >> (((((unsigned long long int) var_1)) - (3243311113ULL)))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_11 [i_8]))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (arr_22 [i_1] [i_1 + 2] [i_1 + 2] [i_1])));
                var_25 = ((unsigned short) ((((/* implicit */_Bool) 3032780184U)) ? (7250214381683820354ULL) : (15435664476863689519ULL)));
                var_26 *= ((unsigned long long int) 4224846218671945230ULL);
            }
        }
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_1))))))));
    }
    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            arr_41 [i_9 + 1] [i_10] &= ((/* implicit */unsigned int) (unsigned short)0);
            var_28 = max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5246))) * (var_3))))), (min((((/* implicit */unsigned long long int) ((unsigned int) var_7))), (15435664476863689528ULL))));
            arr_42 [i_9 + 2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_36 [i_10])) < (var_12)));
        }
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (max((((/* implicit */unsigned long long int) min((((unsigned int) (unsigned short)48007)), (((/* implicit */unsigned int) var_10))))), (max((((/* implicit */unsigned long long int) (unsigned short)46671)), (((unsigned long long int) (unsigned short)28014))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 1) 
            {
                for (unsigned int i_13 = 4; i_13 < 22; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 1) 
                    {
                        {
                            arr_52 [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) var_11);
                            arr_53 [(unsigned short)6] |= ((/* implicit */unsigned short) (((~(max((var_2), (0U))))) ^ ((~(max((2220048932U), (var_1)))))));
                        }
                    } 
                } 
            } 
            arr_54 [i_9] [i_11] = ((/* implicit */unsigned short) (+((~(var_1)))));
            arr_55 [i_9] [6ULL] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)56636))));
        }
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)47999)) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)34110))))))) : (arr_51 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [(unsigned short)16]))))));
    }
    var_31 += ((/* implicit */unsigned short) var_3);
}
