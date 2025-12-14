/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48778
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
    var_10 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) max((((((/* implicit */int) var_2)) >> (((((var_9) >> (((arr_3 [i_0]) - (17529756075644420440ULL))))) - (116349ULL))))), (min((((/* implicit */int) ((short) var_9))), ((-(((/* implicit */int) var_8))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) ((min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1]))) > (max((arr_0 [i_2 - 1]), (((/* implicit */long long int) var_0))))));
                            arr_9 [i_0] [i_0] [i_2 - 1] [i_3] = ((/* implicit */signed char) var_5);
                            arr_10 [i_3] [i_1] [i_3 - 2] [(unsigned short)3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_7)))))) - (arr_0 [i_0])))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)6)) && ((_Bool)0)))))) : (((/* implicit */int) var_7))));
                            arr_11 [(signed char)7] [i_2 - 1] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])), (max((((/* implicit */long long int) var_1)), (arr_5 [i_3 - 2] [i_2 + 1] [i_0])))));
                        }
                    } 
                } 
                var_13 -= ((/* implicit */short) (~(((unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [(unsigned char)8] [i_1])), ((unsigned short)21232))))));
                arr_12 [i_1] = ((/* implicit */signed char) max((((max((((/* implicit */long long int) var_1)), (arr_0 [i_1]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [8LL]))))))), (2305843009213693952LL)));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (unsigned short)44305))));
}
