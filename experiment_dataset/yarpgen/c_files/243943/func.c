/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243943
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
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) | (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) var_0))));
    var_13 = ((/* implicit */long long int) (signed char)30);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 2007921226528688121LL)) == (var_10))))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [4U]))) | (arr_0 [i_1])))) % (var_10)))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (-2007921226528688121LL)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [i_3])))))) : (((/* implicit */int) ((signed char) arr_10 [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 3])))));
                            arr_11 [i_0] [19ULL] [i_2] [(signed char)2] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((short) ((arr_10 [i_2 + 1] [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 4] [i_3]) | (arr_10 [i_2 - 2] [i_2] [i_3 + 1] [i_3 - 2] [i_3 - 3] [12ULL]))));
                            var_16 += ((/* implicit */long long int) ((unsigned long long int) (unsigned short)17886));
                        }
                    } 
                } 
            }
        } 
    } 
}
