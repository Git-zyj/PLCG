/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206332
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
    var_14 -= ((/* implicit */short) ((unsigned int) (((-(((/* implicit */int) (short)-32763)))) != (((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967285U)) != (0ULL))))))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (arr_3 [i_0] [i_0] [i_1]) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (unsigned char)174)))))))))));
                arr_4 [12U] [12U] = min(((~(arr_2 [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_0)), (var_5))) ^ (18446744073709551601ULL)))) ? (((/* implicit */int) var_13)) : ((+((-(((/* implicit */int) var_13))))))));
                            var_17 *= ((/* implicit */unsigned short) 0LL);
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(arr_1 [i_2] [i_3])))) & (((((/* implicit */_Bool) 0LL)) ? (5855505796384641198LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (18446744073709551610ULL)))) & ((-(((/* implicit */int) var_7)))))) : ((-(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_18 = ((/* implicit */long long int) var_4);
                    var_19 += ((/* implicit */long long int) var_4);
                }
            }
        } 
    } 
}
