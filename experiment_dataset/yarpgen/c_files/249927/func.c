/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249927
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_0 [2U] [i_0])))) == ((-(((/* implicit */int) arr_0 [(signed char)13] [(signed char)13]))))));
        arr_4 [i_0] = ((/* implicit */short) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) ((unsigned short) (short)25820))) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [(short)9] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2194338309U)) || (((/* implicit */_Bool) 4006656331U))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((288310965U), (1349061758U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2195936636U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55987))) : (2100628987U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1527724086)), (2744244931U)))) : (((((/* implicit */_Bool) (unsigned short)20657)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (arr_11 [i_2] [11ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_8 [i_5]) : (((/* implicit */int) arr_6 [i_1] [i_2 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_2] [i_3]) || (((/* implicit */_Bool) arr_15 [(_Bool)1] [i_2] [i_3] [i_4] [i_4 + 2] [i_5])))))) : (((long long int) arr_13 [i_2] [i_4 - 3] [i_5])))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_1 [(signed char)16]))))), (min((arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]), (((/* implicit */long long int) arr_5 [i_1 + 1] [(unsigned char)7]))))))));
                                arr_18 [i_1] [i_2 + 1] [i_3] [i_4] [i_1] [(unsigned char)9] [(unsigned short)17] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_3 - 1] [i_5])) ? (((/* implicit */int) arr_2 [9U])) : (((/* implicit */int) arr_1 [8]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [12ULL]))) + (arr_7 [i_5]))))));
                                var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [(unsigned char)15]))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_2 - 2])) ? (arr_13 [i_1] [i_5] [i_3]) : (((/* implicit */unsigned int) arr_8 [(_Bool)1]))))))) ? (max((((((/* implicit */_Bool) arr_10 [(short)11] [(unsigned char)2] [i_4 + 1])) ? (arr_8 [i_5]) : (((/* implicit */int) arr_6 [(signed char)10] [i_2 - 2])))), (((/* implicit */int) arr_0 [i_1 + 1] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3 - 1] [i_3 - 1])) : (arr_11 [i_5] [i_5])))))))));
                            }
                        } 
                    } 
                    arr_19 [i_3] [i_2 - 2] [i_2 - 1] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)208), ((unsigned char)189))))) == (min((((/* implicit */unsigned long long int) arr_10 [i_3 - 1] [i_2] [i_1])), (arr_11 [i_2] [i_3]))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 669696101)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (unsigned char)110)))), (((/* implicit */int) arr_14 [i_1] [i_2] [(unsigned short)6]))))) : (arr_13 [i_1 + 1] [i_2 - 2] [i_2 - 2])));
                    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_1 + 1] [3] [i_3])) ? (arr_11 [i_1] [(signed char)0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1596927202U)) ? (arr_15 [i_3] [i_3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)41)))))))), (((/* implicit */unsigned long long int) arr_8 [i_1 + 1]))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max((var_10), (var_4)))) ? (((/* implicit */long long int) var_5)) : (var_0))));
    var_18 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max(((unsigned char)8), (((/* implicit */unsigned char) (_Bool)1)))), (var_10)))), (max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) var_11)), (var_1)))))));
    var_19 = ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (var_6) : (max((((/* implicit */unsigned long long int) ((signed char) (unsigned short)20652))), (min((var_1), (((/* implicit */unsigned long long int) var_5)))))));
}
