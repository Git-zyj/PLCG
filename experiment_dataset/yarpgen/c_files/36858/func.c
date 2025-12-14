/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36858
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
    var_11 += ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_6))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (3167321434284361581LL)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2080449443050171994LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_6))))) : (((arr_1 [i_0] [(unsigned short)18]) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (var_3)));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                arr_6 [i_0 - 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4307))) + (2080449443050171994LL)))))));
                var_13 = min((max((arr_0 [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 + 1] [i_1 - 1]))), (((var_2) ? (arr_0 [i_1 - 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))));
            }
            var_14 += ((/* implicit */short) var_9);
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2080449443050172023LL)))) ? ((-(arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1 + 1])) >= (((/* implicit */int) var_2)))))))) : ((-(2722639678U))))))));
        }
        for (int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (12556592845320855318ULL))))));
            var_17 = min((((((/* implicit */_Bool) (-(var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (arr_3 [i_0] [i_3]) : (var_1)))))), (((arr_7 [i_3] [i_0]) <= (((unsigned long long int) var_2)))));
            arr_9 [i_0 + 1] = ((/* implicit */_Bool) ((min((((((/* implicit */int) arr_1 [i_3] [i_0])) >> (((var_5) - (3270257303012308788LL))))), (((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_0])))))) | (((((/* implicit */_Bool) (short)-20695)) ? (min((0), (((/* implicit */int) arr_4 [i_0] [i_3] [i_0 - 1] [i_0])))) : (((/* implicit */int) ((unsigned short) var_0)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) (-((-(arr_10 [i_0 + 2])))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2080449443050172023LL)) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_4] [14U])) ? (((/* implicit */unsigned long long int) 4714461)) : (15701899019718737381ULL))) : (((/* implicit */unsigned long long int) -2080449443050171994LL))))) ? (((((-2080449443050171994LL) + (9223372036854775807LL))) << (((((-2080449443050171994LL) + (2080449443050172033LL))) - (39LL))))) : (878887597252393945LL)));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            arr_15 [i_0] [i_0] = min(((-(arr_5 [i_0 + 1] [i_5] [i_5]))), (min((((/* implicit */unsigned int) ((arr_3 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_3 [i_0 - 2] [i_5]))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_7] [i_7])) ? (7856254228501564684ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-9)) | (((/* implicit */int) (unsigned short)4867)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11886))));
                        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((arr_8 [i_7]), (((/* implicit */long long int) var_0)))), (((long long int) (_Bool)1))))) ? (max((-2080449443050172005LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-11)), (var_10)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7302900974233529999LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35853))) : (var_4))))));
                        arr_22 [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (-(max((min((((/* implicit */unsigned long long int) arr_11 [i_0 - 3] [(_Bool)0] [i_6])), (1988399804178121580ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        arr_23 [i_7] [i_7] [i_7] = ((unsigned short) min((((long long int) 1919223988U)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    }
                } 
            } 
            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_0 + 2]) / (arr_8 [i_0 + 2])))) ? (min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2644))) : (var_10))), (min((((/* implicit */unsigned int) var_6)), (var_1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0] [i_0 - 3] [i_0] [i_0 - 3])))))));
        }
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 67108863)) * (-1LL)));
    }
    for (unsigned short i_8 = 2; i_8 < 23; i_8 += 4) 
    {
        var_24 = ((/* implicit */short) (~((((_Bool)1) ? ((~(arr_24 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8 - 2])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 3; i_11 < 21; i_11 += 1) 
                {
                    {
                        arr_38 [i_8] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) min((((/* implicit */int) var_2)), (var_9)))), (3900274189178176897LL)))));
                        arr_39 [i_8] [i_9] [i_10] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_11 + 2] [i_8 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_32 [i_8 - 1] [i_11 - 1])) > (((/* implicit */int) arr_32 [i_8 - 1] [i_11 - 1]))))) : ((-(arr_26 [i_9])))));
                        var_25 *= ((long long int) min((min((0U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_33 [i_8] [i_8]))));
                        arr_40 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_32 [i_8] [i_9])) << ((((-(arr_37 [3LL]))) - (350727993U))))) : (min((arr_33 [i_10] [i_10]), (arr_33 [i_8 - 2] [i_10])))));
                    }
                } 
            } 
        } 
        arr_41 [i_8] = ((/* implicit */unsigned short) arr_35 [i_8] [i_8 - 1] [i_8] [i_8]);
        arr_42 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)40988)) || (((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) arr_32 [i_8] [15])))))))));
        var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4867)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15872))))) ? (((((/* implicit */unsigned long long int) var_10)) / (var_7))) : (((/* implicit */unsigned long long int) (-(var_1)))))), (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) arr_31 [i_8 - 2] [i_8 - 2] [i_8])) : (((((/* implicit */_Bool) var_1)) ? (1458357216737582768ULL) : (var_7)))))));
    }
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) var_9)) / (var_1)))))) || (((/* implicit */_Bool) ((((var_9) & (var_9))) + (((((/* implicit */int) var_2)) << (((410351315) - (410351302))))))))));
    var_28 = ((/* implicit */unsigned short) var_7);
}
