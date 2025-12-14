/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205182
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54762)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)21703)) & (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (1988492793) : ((~(((/* implicit */int) arr_4 [0] [19U])))))) : (((/* implicit */int) max((arr_4 [i_2 + 2] [i_2 + 4]), (arr_4 [i_2 + 3] [i_2 + 1]))))));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (arr_5 [i_2 + 1]) : (arr_5 [i_2 + 4]))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_13 = min((((((/* implicit */unsigned long long int) ((int) (unsigned char)0))) % (((((/* implicit */unsigned long long int) -1988492793)) * (arr_3 [i_1] [i_3]))))), (((/* implicit */unsigned long long int) max((arr_6 [i_2 + 3] [i_2] [7U]), (((/* implicit */unsigned int) (unsigned short)65535))))));
                        arr_13 [(signed char)18] [i_0] [i_1] [i_1] [i_2 - 3] [i_3 - 1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_2 - 2] [i_3 + 2])) * (((/* implicit */int) arr_7 [i_2 + 1] [i_3 + 2])))) - ((-(((/* implicit */int) arr_7 [i_2 - 1] [i_3 - 1]))))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+((-(var_7))))) : (var_10)));
    var_15 = ((/* implicit */unsigned long long int) var_10);
}
