/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215281
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_11 += ((/* implicit */signed char) arr_6 [i_1 + 1] [i_3 - 1] [i_1 + 1]);
                        var_12 = ((((/* implicit */long long int) arr_4 [i_0] [i_2] [i_3])) < (min((arr_7 [i_1 - 1] [i_3 - 2]), (max((var_9), (((/* implicit */long long int) arr_6 [16ULL] [(_Bool)1] [i_3 - 2])))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max(((signed char)-28), (((/* implicit */signed char) arr_1 [i_0]))))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_3))));
    }
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_0))))));
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_16 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((12887617826691306734ULL), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (min((arr_13 [i_4] [i_4]), (((/* implicit */unsigned long long int) -1LL))))))) ? (max((((/* implicit */long long int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155)))))), (max((((/* implicit */long long int) arr_14 [(_Bool)1] [i_5] [i_5] [i_4])), (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)127))))));
                    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (arr_10 [i_4] [i_4]) : (arr_10 [i_4] [i_4]))), (min((arr_10 [14U] [i_4]), (arr_10 [i_4] [i_4])))));
                    arr_17 [i_4] [19ULL] [i_4] = ((/* implicit */unsigned char) min((((((((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) / (var_2))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), ((short)8666))))))), (((/* implicit */long long int) (!(((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_14 [i_4] [(unsigned short)17] [7ULL] [i_4])))))))));
                }
            } 
        } 
    } 
}
