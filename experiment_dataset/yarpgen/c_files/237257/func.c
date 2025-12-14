/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237257
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) max((var_2), ((short)17455)))) * ((-(((/* implicit */int) var_9))))))) / ((+(max((((/* implicit */unsigned int) (signed char)-102)), (4294967275U)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)65533)) >> (((964367450260093822LL) - (964367450260093811LL)))))))) ? (((((arr_0 [i_0] [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (arr_0 [(unsigned char)15] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(signed char)16])))))) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_8 [i_0] [i_1] [i_3] [i_3] [i_4]) : (((/* implicit */unsigned long long int) -178542757))))))))));
                                var_12 = ((/* implicit */long long int) ((max((arr_8 [i_2] [i_2] [i_3] [i_2] [i_2]), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_3 [i_0] [i_0] [i_0])), (var_2)))))) | (arr_5 [i_0] [i_0])));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) ((arr_3 [i_2 - 1] [i_2 + 1] [i_2 - 1]) && (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) && (arr_3 [(unsigned short)9] [i_2 - 1] [i_2 + 1])))));
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) ((((((964367450260093822LL) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (max((var_8), (((/* implicit */unsigned long long int) -964367450260093823LL)))) : (((/* implicit */unsigned long long int) (~(var_3)))))) ^ ((((-(arr_5 [3U] [3U]))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [(_Bool)0])))))))));
    }
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
}
