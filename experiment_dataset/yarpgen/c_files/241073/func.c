/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241073
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
    var_12 = ((/* implicit */long long int) var_5);
    var_13 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) var_10))), (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)63), ((signed char)63)))))))));
    var_14 = (+(min((((/* implicit */unsigned int) ((8840239237646931998ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))), (var_11))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [(unsigned char)2] &= ((/* implicit */long long int) (+(147036079)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_4 - 2] = ((/* implicit */unsigned long long int) ((((long long int) ((8108466466309801417ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162)))))) | (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47393))))))))));
                                var_15 = ((/* implicit */int) max((var_15), ((((-(((/* implicit */int) arr_0 [i_0 + 1])))) + (((/* implicit */int) (!(((((/* implicit */int) var_5)) < (arr_17 [i_2] [i_2]))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [9LL] [(signed char)8] [i_0] = ((/* implicit */unsigned char) ((10338277607399750198ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [8] [i_1 - 1] [0LL])) ? (var_0) : (((/* implicit */unsigned long long int) 8646911284551352320LL)))) : (((/* implicit */unsigned long long int) ((long long int) var_3))))), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)56))))))));
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0 + 1]))))), (max((arr_24 [i_1 + 2] [i_0 + 1] [i_0 + 1] [i_0] [i_0]), (((/* implicit */long long int) arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 2] [i_1] [6LL] [i_1 + 2]))))));
                                arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((long long int) arr_8 [i_0 + 1] [i_6]))));
                                var_18 = ((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_2]);
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */long long int) (+(-147036058)));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (-((((~(arr_31 [i_8] [i_7] [i_2] [i_1 + 1] [i_0 + 1]))) & (max((((/* implicit */unsigned long long int) (signed char)33)), (7ULL)))))));
                                var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                                var_22 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) arr_17 [(unsigned char)12] [i_1 - 1])) * (arr_31 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [8LL]))), (((/* implicit */unsigned long long int) ((int) arr_20 [i_0] [i_8] [i_0 + 1] [i_1 + 2] [i_8] [i_2])))));
                                arr_32 [i_0] [4U] [i_1] [i_0] [2] [i_8] [i_8] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1 + 3] [i_2])))) && (((/* implicit */_Bool) max((arr_20 [i_0] [i_0] [i_2] [i_7] [i_8] [i_2]), (((/* implicit */unsigned char) (!((_Bool)1)))))))));
                                arr_33 [i_0] [i_0] [i_0 + 1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (((-((~(7051754685548404526ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) ^ (9223372036854775807LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
