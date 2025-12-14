/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3754
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */int) var_10)), ((+(((/* implicit */int) min(((signed char)16), ((signed char)-17))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-92)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3]))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_1 [i_3]), (((/* implicit */signed char) arr_8 [i_3] [i_0])))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) (+(max((arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) (unsigned short)52988)))))))));
                arr_14 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) arr_3 [i_1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 - 1])) || (((/* implicit */_Bool) ((signed char) arr_16 [4ULL])))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((arr_15 [i_4] [i_4 - 2]), (((/* implicit */unsigned long long int) arr_7 [(unsigned char)8] [(unsigned char)8])))))) ? (((arr_4 [i_4 + 2] [i_4 + 2] [i_4 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_4 + 1] [(signed char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (13298564186850474951ULL))) > (11101156493205502451ULL)))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))))) & (((/* implicit */unsigned long long int) (~((~(var_2))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (((((/* implicit */_Bool) ((unsigned long long int) (short)-138))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))))) : (min((var_1), (((/* implicit */unsigned long long int) -4972432278208249683LL))))))));
}
