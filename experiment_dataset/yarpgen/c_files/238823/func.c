/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238823
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1809422483)) ? (((/* implicit */int) (unsigned short)21597)) : (((/* implicit */int) (unsigned char)128))))) ? (arr_0 [i_0 - 2] [i_0]) : (((arr_0 [i_0 - 1] [i_0]) / (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((var_16) - (7265224079953288465ULL)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (1712772856U)))) : (((long long int) var_14)))) : (((/* implicit */long long int) (+(917504U))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_0]) : (var_7))) | (((/* implicit */unsigned int) arr_0 [(_Bool)1] [i_1])))), (min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 2]))))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_4 [i_0 + 2]))));
            var_21 = ((/* implicit */_Bool) ((unsigned long long int) max((1916543076), (((/* implicit */int) (unsigned char)176)))));
            var_22 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) arr_0 [8ULL] [i_1])) || (((/* implicit */_Bool) var_17)))))) ? (min((arr_3 [(_Bool)1] [i_1] [i_1]), (var_7))) : (((min((arr_3 [i_0 + 2] [i_1] [i_1]), (((/* implicit */unsigned int) var_1)))) & (min((1526553447U), (8190U)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    /* LoopSeq 2 */
                    for (int i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_3] [i_3] [i_4 + 2] = ((long long int) arr_3 [i_0 + 2] [i_0] [i_0 - 1]);
                        arr_16 [i_0] [4U] [i_0] [4U] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) -1607944422));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_3] [i_2] [i_1] [i_0]))));
                        var_25 -= ((/* implicit */signed char) -1607944422);
                    }
                    arr_20 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 860365504U)) ? (15727518079849785919ULL) : (((/* implicit */unsigned long long int) -1073741824))))) ? (((/* implicit */long long int) (-(arr_19 [i_0] [i_1] [i_1] [i_3] [i_3 + 3])))) : (((long long int) arr_3 [i_0] [i_1] [i_2]))));
                }
                for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6]))) > (((((/* implicit */_Bool) 6777541907739213618ULL)) ? (((/* implicit */unsigned long long int) arr_9 [6] [i_1] [i_1] [i_0])) : (arr_7 [i_2] [11ULL] [i_0]))))))));
                    arr_23 [i_0] = ((/* implicit */int) ((arr_4 [i_0 - 1]) - (((/* implicit */unsigned int) var_9))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((6777541907739213617ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))))) ? (((/* implicit */unsigned long long int) ((471441225U) >> (((1177586297U) - (1177586266U)))))) : ((~(6777541907739213618ULL)))));
                }
                for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    arr_27 [i_7] [16U] [16U] = ((/* implicit */int) (-(-3747694229445881264LL)));
                    arr_28 [i_2] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_7] [i_7] [i_7 + 1] [i_7] [i_7])) ^ (((/* implicit */int) arr_12 [i_7] [i_7] [i_7 + 4] [i_7] [i_7 - 1]))));
                    arr_29 [(unsigned char)12] [i_0] [i_1] [i_0] = ((((3352662720U) == (arr_3 [i_0] [(unsigned char)8] [i_2]))) && (var_10));
                    /* LoopSeq 2 */
                    for (int i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        var_28 = (+(((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [7U] [i_2] [i_8 - 2] [i_0]))))));
                        arr_33 [12U] [i_1] [12U] [i_8] [i_1] [i_1] = ((unsigned int) arr_26 [i_0] [i_0]);
                        arr_34 [i_8] [i_7 - 1] [(short)5] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    for (unsigned char i_9 = 4; i_9 < 17; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1448659608)) ? (((/* implicit */int) arr_10 [i_0 + 3] [i_1] [i_7 + 3] [i_9] [i_9 - 4] [i_9])) : (((/* implicit */int) (unsigned char)128)))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_9 + 2] [i_9 + 2])) ? (arr_9 [i_0] [i_0 + 1] [i_9 - 3] [i_0 + 1]) : (arr_9 [i_0] [i_0 + 2] [i_9 - 4] [i_9])));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    arr_39 [i_10] [i_2] = ((((/* implicit */int) (unsigned short)32640)) > (((/* implicit */int) ((arr_37 [i_0] [i_1] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 2] [i_0] [i_0 - 2]))))));
                    var_31 = ((/* implicit */short) arr_25 [i_0] [i_1] [i_2] [i_1]);
                }
                var_32 = ((/* implicit */unsigned int) arr_6 [i_1]);
                var_33 = ((/* implicit */signed char) 7864320U);
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    arr_44 [i_0] = ((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1] [i_2] [i_11]);
                    arr_45 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) arr_5 [i_2]);
                    arr_46 [i_2] [i_1] = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_1] [i_0 - 2] [i_0]);
                }
                for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_34 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) ^ (((/* implicit */int) arr_36 [i_0] [i_0] [i_2] [i_12] [i_0]))))) ? (((2937477073U) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])))));
                    arr_49 [i_0 + 1] [i_1] [i_2] [(short)14] [i_12] [i_12] = ((/* implicit */short) arr_26 [i_12] [i_2]);
                    arr_50 [i_1] [17ULL] [i_1] = ((((/* implicit */_Bool) (unsigned short)12943)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11257479952986342467ULL));
                }
                for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    arr_53 [i_13] [i_1] = ((/* implicit */long long int) arr_40 [i_0] [(signed char)8] [i_1] [i_0]);
                    arr_54 [i_0] [i_2] [i_13] [i_13] [i_0] [i_0] = (-(789913522));
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_30 [i_0 + 1] [i_0] [i_0 + 2] [(signed char)9] [i_0]))));
                }
            }
        }
    }
    var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (2305842459457880064LL)))) && (var_10))) ? (((((/* implicit */_Bool) min((458752U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31759)) ? (var_16) : (((/* implicit */unsigned long long int) 1U)))))))))));
}
