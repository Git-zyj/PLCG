/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237933
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
    var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) / (-10LL)))))) ? (((/* implicit */unsigned long long int) ((var_8) % (min((var_2), (var_13)))))) : (var_11)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) arr_3 [i_0] [i_1 + 2]);
            var_16 = ((/* implicit */unsigned int) -10LL);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) var_10);
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((arr_11 [i_0] [5ULL] [i_2] [i_2] [i_3]) & (arr_4 [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) var_12))))) & (((((/* implicit */_Bool) 8974014513989797498ULL)) ? (9472479734064618374ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4499)))))));
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) <= (((((/* implicit */_Bool) (unsigned short)8892)) ? (var_9) : (var_9))))) ? ((~(((/* implicit */int) ((unsigned char) (unsigned char)241))))) : (min((((/* implicit */int) (unsigned short)8896)), ((-(((/* implicit */int) (_Bool)0))))))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0] [(short)7]);
        arr_12 [i_0] = ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_0]));
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_21 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)37984))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_14 [i_4]), (((/* implicit */int) arr_13 [i_4]))))) ? (arr_14 [i_4]) : (((/* implicit */int) min((arr_13 [i_4]), (arr_13 [i_4]))))));
        arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) == (((/* implicit */int) (unsigned short)8880))))) > (((/* implicit */int) var_7))))) ^ (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)13897)))) && (((/* implicit */_Bool) (unsigned short)8896)))))));
        arr_16 [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_7))))) ? (((long long int) (signed char)119)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_5)))))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_4])))))));
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */int) ((((unsigned long long int) var_7)) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-12882)))))));
        arr_21 [i_5] = (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */unsigned char) ((short) ((unsigned short) ((unsigned short) (signed char)-104))));
        arr_22 [i_5] [i_5] = ((/* implicit */short) (!((_Bool)1)));
    }
}
