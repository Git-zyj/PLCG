/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41965
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)19253)) : (((/* implicit */int) (unsigned short)61751))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57960)) ? (8087223894202837200LL) : (8087223894202837191LL)))) / (var_4)))));
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) var_4);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) arr_2 [3ULL]))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1])) ? (8087223894202837184LL) : (8087223894202837194LL)));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (-8087223894202837200LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22778)))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_5 [i_0] [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_5))));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [(signed char)10] [i_1] [i_1]) + (((/* implicit */unsigned int) var_9))))) ? ((((_Bool)0) ? (arr_5 [i_1] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((6560709413491462859LL) / (-6560709413491462859LL)))));
                    }
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_5])) / (((/* implicit */int) arr_14 [i_1]))));
                        var_15 += ((/* implicit */short) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [(unsigned char)2] [i_5])) + (((/* implicit */int) (unsigned short)42757))));
                        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25362)) ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_5])));
                    }
                    arr_19 [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1990486300U)) > (8087223894202837194LL)));
                }
                arr_20 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_1])), (var_3)))) ? (min((8087223894202837200LL), (((/* implicit */long long int) -1403822679)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) var_9)))))))), (((/* implicit */long long int) (signed char)5))));
                arr_21 [i_0] [i_1] [2LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_0]))) : (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned short)30289)), (8087223894202837217LL)))))) : (16259089624490265603ULL)));
                var_17 += ((/* implicit */unsigned long long int) 1971190162U);
            }
        } 
    } 
}
