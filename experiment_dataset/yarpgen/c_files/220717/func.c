/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220717
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))), (((arr_2 [i_1] [i_1 + 3] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) * (((/* implicit */unsigned long long int) ((((var_6) && (((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)15])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_5))))))))));
                arr_5 [i_0] [i_0] [i_1 + 1] = ((/* implicit */short) ((unsigned short) (((!(arr_1 [i_0] [i_0]))) && ((!(((/* implicit */_Bool) var_17)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) 0LL);
                            arr_13 [11LL] [11LL] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3 - 1] [12LL] [i_2 - 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (arr_2 [i_0] [i_2 - 1] [(signed char)11]) : (arr_2 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_14 [i_1 + 4] [i_0] [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 3] [i_0])) != (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 3])))) ? (((((/* implicit */_Bool) (short)8207)) ? (3369158339043613431LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27335))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (7904038611888460124LL)))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))) ? (9057474635160166417LL) : (23LL)));
    var_19 |= ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
    var_20 = ((/* implicit */long long int) ((int) var_3));
}
