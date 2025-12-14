/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33281
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!((_Bool)1)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-57))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)7300))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 ^= ((((/* implicit */int) var_3)) != (((min((arr_8 [i_2] [i_1]), (arr_8 [i_0] [i_1]))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_4)))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) min((arr_5 [i_0] [i_1] [i_2 + 2]), (((/* implicit */unsigned char) var_3))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */short) min((max(((((_Bool)1) ? (arr_2 [i_3] [(short)5]) : (((/* implicit */unsigned int) arr_12 [i_3])))), (((/* implicit */unsigned int) arr_3 [i_4])))), (((/* implicit */unsigned int) (!((_Bool)1))))));
                var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (15024987113059990184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_4])) || (((/* implicit */_Bool) arr_11 [i_4] [i_3])))) ? (((/* implicit */int) ((short) arr_15 [i_3]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4])) && (((/* implicit */_Bool) (short)2891)))))))) ? ((((!(((/* implicit */_Bool) arr_4 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (var_2) : (((/* implicit */unsigned long long int) arr_6 [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((11135282426252929688ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) ? (var_1) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_8) : (max((var_1), (((/* implicit */unsigned long long int) var_10))))))));
}
