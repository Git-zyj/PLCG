/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231417
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned int) var_9));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */long long int) var_8);
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_18 = ((/* implicit */int) (unsigned short)35937);
            var_19 = ((/* implicit */unsigned int) -4071568925613752962LL);
        }
        for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            arr_11 [i_0] [i_2 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)35937), ((unsigned short)35938))))));
            var_20 = (unsigned char)59;
        }
    }
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 10; i_3 += 4) 
    {
        for (signed char i_4 = 3; i_4 < 10; i_4 += 2) 
        {
            {
                arr_18 [i_3] = ((/* implicit */int) max((max((var_11), (((/* implicit */long long int) ((arr_6 [i_3] [i_3 + 1] [i_4]) < (((/* implicit */int) (signed char)15))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29598)) ^ (((/* implicit */int) (signed char)-1)))))));
                arr_19 [i_3 + 1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (+(2272336382U)))) ? (((/* implicit */int) (unsigned short)44075)) : (((/* implicit */int) arr_15 [i_4 - 1] [i_3 - 3] [i_3 - 1])))));
                arr_20 [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (var_15) : (var_2)))) ? (1876847523U) : (((((/* implicit */_Bool) min((493389136U), (arr_17 [i_3 - 2])))) ? (((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22)))))));
                arr_21 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) var_14))), (arr_9 [i_4 - 2])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_16);
    var_22 = ((/* implicit */_Bool) var_7);
    var_23 = ((/* implicit */signed char) var_7);
}
