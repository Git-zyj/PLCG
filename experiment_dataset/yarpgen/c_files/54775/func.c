/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54775
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
    var_10 = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) var_9)), (1073725440ULL))), ((~(7730286669164228146ULL))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_11 = max((max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_0])), ((-(arr_10 [i_1]))))), (((/* implicit */unsigned long long int) (~((-(-3344978359515698944LL)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] = ((/* implicit */long long int) 818451455);
                                arr_16 [i_0] [i_1] [i_2] [i_3 + 1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_3])))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)42), (((/* implicit */unsigned char) var_0)))))))))));
                            }
                        } 
                    } 
                } 
                var_12 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_0])) ? (var_8) : (arr_8 [i_0]))));
            }
        } 
    } 
}
