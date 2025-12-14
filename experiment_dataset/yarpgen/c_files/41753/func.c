/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41753
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
    var_17 = max((((/* implicit */int) ((signed char) var_4))), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)12)), (13957869259518624445ULL))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_3]))))) ^ (max((var_10), (134217712ULL)))))) ? (max((min((((/* implicit */long long int) (unsigned char)151)), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)24229)))), ((~(var_16)))))));
                            arr_12 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                            arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4102161522554361123LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) > (arr_9 [i_3] [i_0]))))) : (551614899U)));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((int) (unsigned short)21762));
                            arr_15 [i_0] [i_2] [i_2] [i_3 + 3] = ((/* implicit */unsigned short) ((max((((arr_4 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) -529513470)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)49))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((int) -698417452)), (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned long long int) var_13)), (arr_4 [i_0] [i_1])))));
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((var_6), (10864461917454253112ULL)));
            }
        } 
    } 
}
