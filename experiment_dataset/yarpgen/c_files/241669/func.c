/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241669
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
    var_13 |= ((/* implicit */_Bool) ((((min((((/* implicit */int) ((_Bool) var_3))), (((((/* implicit */int) (short)22)) * (((/* implicit */int) var_7)))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) 4503599627370495ULL)) || ((_Bool)1))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((-2665616522734525160LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-10357))))))));
        var_15 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)107)) || (((/* implicit */_Bool) -2665616522734525160LL))))), (((((/* implicit */_Bool) (short)379)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-380))) : (-2665616522734525156LL)))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (short)0)) % (((/* implicit */int) var_4)))))) / (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_17 -= ((/* implicit */short) arr_5 [i_1 - 1] [i_1 - 1]);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_4 [i_1]))));
        var_19 = arr_2 [(_Bool)1];
    }
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_3])), (18446744073709551615ULL)))) ? (530998058995301250ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))) + (-2665616522734525158LL)))) ^ (((((/* implicit */_Bool) ((arr_8 [i_5] [(short)10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [10LL] [i_5]))) : (arr_15 [i_2 - 1] [i_3] [i_4] [i_5])))) ? (arr_13 [i_2 - 2] [i_4] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17193612546433994079ULL)) ? (((/* implicit */int) (short)-1298)) : (((/* implicit */int) var_2)))))))));
                            var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1647)) - (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)16256)) % (((/* implicit */int) (signed char)39))))))))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */short) ((((((/* implicit */int) ((signed char) arr_14 [i_3] [i_3] [(short)21]))) != (((((/* implicit */int) arr_0 [i_2])) % (((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) ((var_9) <= (arr_13 [i_2 + 1] [i_2] [i_3])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)7403)) ? (((/* implicit */unsigned long long int) -2LL)) : (arr_13 [(_Bool)1] [i_2] [i_2]))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (2665616522734525164LL)))))))));
                var_23 = ((/* implicit */unsigned long long int) (-(((long long int) ((((/* implicit */_Bool) arr_15 [i_2] [(signed char)19] [(signed char)19] [i_2 + 1])) ? (12317706232094642785ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            {
                var_24 = ((/* implicit */signed char) min((min(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-17397)))), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_7])) >= (((/* implicit */int) var_7))))))), (((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-27)))) / (((/* implicit */int) (signed char)70))))));
                var_25 = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
}
