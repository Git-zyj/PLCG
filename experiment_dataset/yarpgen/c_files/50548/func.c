/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50548
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
    var_13 ^= ((/* implicit */long long int) var_0);
    var_14 = ((/* implicit */short) (((-(max((2487625251U), (((/* implicit */unsigned int) var_12)))))) > (((/* implicit */unsigned int) (~(((int) 3930780398U)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-6))))), (max((min((4294967295U), (364186898U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])))))))));
                arr_6 [i_0 - 3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]))) && (((/* implicit */_Bool) ((min((((/* implicit */long long int) var_3)), (arr_0 [i_1] [i_0 + 1]))) - (arr_1 [i_0 - 2]))))));
                var_15 = ((/* implicit */int) max((min((arr_3 [i_0] [i_0] [i_0 + 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3930780398U)) && (((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned char) arr_2 [i_1] [i_0]))));
                var_16 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0 - 1])))))) >= (((unsigned long long int) (-(-1667009906)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_1] [i_2]);
                        arr_12 [i_0 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) 364186894U)) ? (((/* implicit */long long int) var_12)) : (arr_0 [i_0 - 3] [i_3])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        arr_17 [i_2] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (arr_0 [i_0 - 3] [i_0 - 2])));
                        arr_18 [i_0 - 3] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_2])) ? (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [i_4] [i_0 - 2] [i_4])) : (var_8)))) : (((10811930700268152280ULL) % (((/* implicit */unsigned long long int) 3930780397U))))));
                    }
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned char) var_4)))));
                    var_19 += ((/* implicit */unsigned short) (short)14856);
                }
            }
        } 
    } 
}
