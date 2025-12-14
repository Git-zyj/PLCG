/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53056
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
    var_18 = ((/* implicit */_Bool) var_7);
    var_19 = ((unsigned long long int) min((var_16), (var_4)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) (signed char)-85));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-85)) > (((/* implicit */int) var_16))))) > (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_2] [i_1] [i_0]) : (((/* implicit */int) (signed char)-85))))))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15253172529205158630ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : (2101572652146482334LL)));
                    var_21 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (signed char)-85)))));
                    arr_9 [i_2] = ((/* implicit */signed char) ((((int) var_2)) > (min(((~(var_3))), (((/* implicit */int) var_14))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) var_3);
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_12 [i_3] &= ((/* implicit */unsigned int) ((unsigned char) ((int) (signed char)103)));
        var_23 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned int) var_7)), (var_13))) > (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) (unsigned char)17))))))) ? (((/* implicit */int) (unsigned char)168)) : ((((!(((/* implicit */_Bool) 2101572652146482334LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    {
                        arr_20 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)168)))) > (((int) -2101572652146482335LL))))));
                        arr_21 [i_3] [i_3] [i_4] [10ULL] [i_6] [15] = ((/* implicit */int) ((unsigned short) min((arr_19 [i_4] [i_5] [i_5 - 2] [i_6] [i_6 + 1]), (arr_19 [i_5] [i_5] [i_5 - 2] [i_6 + 1] [i_6 + 2]))));
                    }
                } 
            } 
        } 
    }
}
