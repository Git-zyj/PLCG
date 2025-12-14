/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238079
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_7 [i_0] [22ULL] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((_Bool)1), (arr_0 [i_0] [i_1]))))));
                    arr_8 [i_1] [i_1] [i_1] [5ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_0 [i_1] [i_2]), (arr_0 [i_0] [i_0])))), ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))));
                }
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_1] [i_1]) || (arr_2 [i_1] [i_1]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))))))) & (((var_12) | (((/* implicit */unsigned long long int) -791523794)))))));
                    var_16 = ((/* implicit */_Bool) ((((unsigned long long int) max((var_9), (((/* implicit */unsigned long long int) (unsigned short)54719))))) / (arr_10 [i_0] [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (unsigned short)54719);
                                var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_9 [i_1] [i_1])))))))) != (((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [21ULL] [21ULL] [i_1] [i_6] [i_7])))))) ? (((/* implicit */int) (unsigned short)54719)) : ((+(((/* implicit */int) arr_15 [i_1]))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_7])) || (((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_1]))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0] [i_6] [i_7] [i_6])) || ((_Bool)0))))))));
                                arr_22 [i_0] [i_0] [i_3] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4540211U)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (_Bool)0))))))) ? ((~(max((var_9), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_3] [i_6])))))) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_6]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (11761860730930542182ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54719)))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3] [i_3])) ? (arr_17 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_3])))))))));
                }
                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) + (4540219U)));
                arr_24 [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65511))))) ^ (((/* implicit */int) (unsigned short)54719))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_18 [2ULL] [i_0] [i_0] [i_1] [14U]))));
                var_22 -= ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) (unsigned short)35837)))) * (((/* implicit */int) arr_6 [6])))) * (((/* implicit */int) var_10))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (+(((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (var_8))))));
}
