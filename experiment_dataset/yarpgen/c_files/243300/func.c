/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243300
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
    var_12 |= ((/* implicit */short) max((((((/* implicit */_Bool) 4294967295U)) ? (((1009906779U) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned int) (unsigned short)30648);
        arr_2 [i_0] |= ((((/* implicit */int) arr_1 [i_0] [i_0])) + (min((((/* implicit */int) arr_0 [i_0])), (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1009906806U)) ? (980539394U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))) ^ (((((/* implicit */_Bool) var_10)) ? (max((3285060502U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)8))))) + (max((((/* implicit */unsigned int) (unsigned char)119)), (var_7)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_3 [0]) : (arr_3 [i_1])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -10)) : (arr_3 [9U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (2211180740U))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (-(arr_9 [i_2 - 1]))))));
                    var_18 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_6)))), (((((/* implicit */int) arr_7 [5] [5] [5])) << (((((/* implicit */int) arr_5 [i_1] [i_2])) - (3595)))))))) ? (3285060493U) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1]))) & (((var_10) >> (((arr_9 [i_3]) - (11846169828867425731ULL))))))));
                    var_19 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (unsigned char)109)), (1009906781U)))))) % (((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (arr_3 [i_2 + 1]) : (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))));
                    arr_11 [i_3] [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned char) max(((~(arr_9 [i_3 + 1]))), (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_3 + 1]) : (arr_9 [i_3 - 1])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)42039))))), (max((arr_3 [i_5]), (((/* implicit */unsigned long long int) arr_6 [i_4]))))))) ? (((((((/* implicit */_Bool) 862313658U)) && (arr_18 [i_1] [i_4] [i_5] [i_5]))) ? ((+(arr_12 [i_5]))) : (arr_6 [i_6 - 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1])))))));
                        var_21 = ((/* implicit */_Bool) (unsigned short)25331);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))))))));
        arr_19 [i_1] &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_1] [3]))))) ? (((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_9 [i_1]) : (((/* implicit */unsigned long long int) arr_12 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11ULL)) ? (3285060514U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20034)))))));
    }
    for (int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_23 |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))) : (arr_3 [i_7])))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_8] [(unsigned short)3]), (arr_5 [i_7] [i_8]))))) : (((((/* implicit */_Bool) arr_6 [i_9])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7]))) / (arr_13 [(unsigned short)2] [0] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 4; i_10 < 8; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((int) 10711094757077248313ULL));
                                var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_1 [i_7] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_10 - 4]))) : (7735649316632303295ULL))) / (((/* implicit */unsigned long long int) (-(1372916577U))))))) ? (((((/* implicit */_Bool) 1645229550)) ? (((/* implicit */int) (short)32767)) : (-943990606))) : (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_11]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((((/* implicit */int) ((signed char) var_4))) + (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1))))));
}
