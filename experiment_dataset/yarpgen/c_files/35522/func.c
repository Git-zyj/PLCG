/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35522
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_0 - 1])) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_0 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) (~(min((511), (((/* implicit */int) (signed char)-102))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_13);
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_3 [i_0] [i_2 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12565)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (short)8192))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_3 [i_0] [i_0] [i_0])))))));
                }
                arr_9 [i_0] = ((/* implicit */short) min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) || (((/* implicit */_Bool) var_10)))))));
                arr_10 [i_0] = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_13))))), (((/* implicit */unsigned int) min((arr_1 [i_1]), (arr_1 [i_1]))))));
                arr_11 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 511))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (short i_4 = 2; i_4 < 20; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_14 [i_4 + 1] [i_4])) | (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (var_12))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                var_17 -= (-(((/* implicit */int) arr_14 [i_4 - 2] [i_4 - 2])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
}
