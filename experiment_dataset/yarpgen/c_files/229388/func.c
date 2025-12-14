/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229388
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) (~(((arr_1 [i_0 - 2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [3U] [i_0 - 1]))))));
        arr_2 [i_0] = min((((/* implicit */long long int) (-((+(((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_5))) - (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_7))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_7 [i_1] [i_2] [i_2] |= 1243677519U;
            var_11 = ((/* implicit */long long int) ((arr_0 [i_2] [i_2]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_9)))) ? ((+(var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        }
        var_12 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_3 [i_1] [i_1 - 1])))), (((((/* implicit */int) arr_3 [i_1] [i_1 - 1])) / (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))));
        arr_8 [i_1] |= ((/* implicit */long long int) ((((/* implicit */int) min((arr_6 [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 - 1] [i_1 - 1])))) >= ((~(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))))));
        var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1] [4U])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) ((((arr_5 [i_1] [(signed char)7] [i_1 - 1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_3 [1ULL] [i_1])) - (15716)))))) ? ((-(var_4))) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_4 [12ULL])) : (var_8)))))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (((12052301992225545783ULL) & (1031592053547263149ULL)))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_3 - 1] [(signed char)16])) ? (arr_10 [i_3 - 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3 - 1]))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3]))))), (max((var_9), (((/* implicit */unsigned int) var_1))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (unsigned int i_5 = 4; i_5 < 20; i_5 += 4) 
            {
                {
                    arr_21 [i_3] [i_3] [i_4] [(signed char)13] = ((/* implicit */long long int) arr_13 [i_3 - 1] [i_3 - 1]);
                    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))))) && (var_1)));
                    var_15 = arr_6 [i_3] [i_3];
                    arr_22 [i_3] [i_3] [i_3 - 1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_4 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 + 1]))) : (var_6)))) ? ((~(arr_19 [i_3 - 1] [i_3] [i_3] [13LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_5 - 2] [i_3]) ? (((/* implicit */unsigned long long int) var_8)) : (arr_13 [i_3] [i_4 - 1])))) ? (((arr_0 [i_4 + 1] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) ^ (var_9)))))))));
                }
            } 
        } 
    }
    var_16 |= ((/* implicit */int) ((((var_1) ? (((/* implicit */unsigned long long int) var_8)) : (((var_6) - (var_3))))) ^ (((((/* implicit */_Bool) (~(var_4)))) ? (min((var_6), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))))))));
}
