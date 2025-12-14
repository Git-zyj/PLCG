/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222745
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) min((2015039807802067268LL), (((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (2015039807802067268LL))))))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) : (5931277438056189467LL)))) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (min((var_0), (((/* implicit */long long int) var_9))))))));
    var_13 &= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))))) == (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (var_3)))) : (((((/* implicit */_Bool) -1804765048)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_0] [4LL] [(unsigned short)0] [22])) ? (((/* implicit */int) arr_0 [15ULL])) : (((/* implicit */int) var_3)))) > (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_2 - 1] [(_Bool)1])))) ? (((/* implicit */long long int) arr_4 [i_0])) : (((((((/* implicit */int) arr_10 [i_0] [(_Bool)1] [3LL] [i_0])) >= (((/* implicit */int) arr_7 [19U] [(unsigned short)5])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [(short)20]), (arr_3 [i_0]))))) : (var_0))))))));
                            var_16 = ((((/* implicit */_Bool) min((var_2), (arr_8 [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [5ULL] [22LL] [i_2 - 1] [i_2 - 1]))) : (((((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_0 [(_Bool)1])))) ? (((var_9) ? (arr_8 [10LL] [10LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)22])) ? (arr_5 [(_Bool)1] [i_1]) : (((/* implicit */int) var_4))))))));
                            var_17 = ((/* implicit */unsigned long long int) (~(arr_8 [i_2 - 1] [i_2 - 1])));
                            var_18 = ((/* implicit */signed char) arr_0 [i_2 - 1]);
                            var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_8 [i_0] [(_Bool)1])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1]))) & (arr_8 [i_1] [i_3]))) : (min((arr_8 [i_3] [i_0]), (((/* implicit */long long int) arr_3 [i_1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_20 -= ((/* implicit */int) arr_10 [(signed char)0] [(signed char)0] [6] [6]);
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (_Bool)1)), (-2114995891733212112LL))), (((/* implicit */long long int) (_Bool)1)))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_15 [i_0] [i_5] [i_0] [i_0] = arr_2 [(_Bool)1];
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) min((var_7), (var_9)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned char)22])) >= (((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */int) var_9)) : (((((((/* implicit */int) var_7)) != (arr_14 [i_0] [i_0] [i_0]))) ? (arr_14 [i_5] [i_1] [i_0]) : (((((/* implicit */int) arr_6 [i_0] [i_0] [20] [i_0])) - (((/* implicit */int) arr_6 [i_0] [(unsigned short)12] [6] [i_5])))))))))));
                }
            }
        } 
    } 
}
