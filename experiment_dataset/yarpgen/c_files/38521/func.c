/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38521
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) (unsigned short)4761);
                    var_12 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max(((unsigned short)25387), (((/* implicit */unsigned short) arr_4 [i_0] [i_2]))))) ? ((-(((/* implicit */int) (unsigned short)48025)))) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (min((3803144498U), (((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        arr_10 [i_0 - 1] [i_0 - 1] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3] [i_0] [i_0] [9ULL])) && (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])))) ? (var_2) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0 - 1] [i_3 + 1])))))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))))));
                        arr_11 [i_3] [i_3] [i_3 + 1] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_5 [i_0] [i_0])) << (((((((/* implicit */int) (short)-12054)) + (12074))) - (19))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [7ULL]))))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3])) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12053)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [(signed char)4] [i_3]))))), ((+(var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) arr_5 [i_3] [i_2])) : (((/* implicit */int) (unsigned short)29)))))));
                        var_15 = ((/* implicit */unsigned short) max((var_9), (var_0)));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_2)))), (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_17 &= ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-53)) + (((/* implicit */int) (signed char)-2))))) - ((+(var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (unsigned short)57808)))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((5928620809060011212ULL), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_9)), (var_5))))) : ((+(var_2)))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_2)) ^ (var_4))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65072))))))))))))));
    var_19 = ((/* implicit */unsigned short) min((var_4), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)0)))))))));
}
