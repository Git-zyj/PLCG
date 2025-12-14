/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232101
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (12174357315285673615ULL))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [(short)0]))), (((/* implicit */unsigned long long int) (short)-16133)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_9)))) && (((/* implicit */_Bool) ((arr_1 [i_0]) * (arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] = ((/* implicit */_Bool) max(((-(arr_8 [i_2]))), (((/* implicit */unsigned long long int) (+(331720347U))))));
                    arr_11 [i_1] [i_2 - 1] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) - (((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_3)) : (var_10)))) : (arr_8 [i_2]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) var_17);
            arr_15 [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) max(((((-(((/* implicit */int) (signed char)-5)))) / ((~(arr_7 [i_1] [i_4] [i_4]))))), (((/* implicit */int) var_7))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)48919)))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) 3963246939U)) && (((/* implicit */_Bool) max(((~(var_13))), (((var_7) ? (((/* implicit */unsigned long long int) var_18)) : (arr_1 [8])))))))))));
                    }
                } 
            } 
            var_24 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) arr_23 [i_1])), (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))))))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (short)-22348))));
        }
    }
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_3)))))))));
    var_27 = ((var_7) ? (var_4) : (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((3679675287567387234LL) << (((var_15) - (8974638182559954171LL)))))))));
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 23; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (unsigned short i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                {
                    var_28 = ((/* implicit */int) arr_25 [i_8 + 2] [i_9]);
                    arr_30 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((var_15) > (((/* implicit */long long int) 1023))))))), (max((var_6), (((/* implicit */unsigned long long int) ((-8136876413931025683LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))))))))));
                    var_29 = ((/* implicit */unsigned short) var_18);
                    var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)30)), (var_17)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8 + 2]))))), (max((arr_29 [i_10] [i_10 + 2] [i_10 + 3] [16]), (14518485919465573946ULL)))));
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_0))));
                }
            } 
        } 
    } 
}
