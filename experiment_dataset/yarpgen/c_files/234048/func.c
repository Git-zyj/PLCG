/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234048
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
    var_16 = ((/* implicit */unsigned int) -1239860453);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_2 [4] [i_1] [i_1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), ((((!(((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6996792492649957040ULL)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_12)))))))) : (var_12)))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) 372788835)) : (var_14)));
                var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                var_21 = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_22 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6 + 1] [i_6 - 3] [i_6 + 1] [i_6 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (11449951581059594576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) 2687670319U)))))) : ((-(((unsigned int) var_6))))));
                                arr_17 [i_2 - 3] [(_Bool)1] [i_4] [i_6] [i_2 + 4] [4] [i_2] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_3 [i_2 - 2]))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned char) (+(((var_6) + (((((/* implicit */_Bool) (unsigned char)31)) ? (6996792492649957030ULL) : (((/* implicit */unsigned long long int) 3654585307U))))))));
                }
            } 
        } 
    } 
}
