/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244452
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) min((arr_4 [i_0] [i_1] [i_1]), (var_8)))) >= (((/* implicit */int) var_3))))) << (((((/* implicit */int) (short)-32743)) + (32758)))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */signed char) var_17)))))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (signed char)-9)) ? (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_17))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (arr_5 [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-15)))))) < (((/* implicit */int) arr_3 [i_0]))))));
                    var_22 |= min((var_4), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_5 [i_2]))), (((/* implicit */long long int) var_16)))));
                    arr_8 [i_2] = ((((/* implicit */_Bool) 288230376151711488LL)) || (((/* implicit */_Bool) -5000842202773643274LL)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_3] &= ((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)33436))));
                    arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((arr_6 [i_3] [i_1] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) : (arr_5 [i_0])));
                    arr_13 [i_0] [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)8)) ? (-5000842202773643264LL) : (((/* implicit */long long int) 3253880622U)))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201)))));
                    arr_14 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) var_9);
                }
                for (int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((1041086666U), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_19 [i_0] [i_0] = ((/* implicit */short) ((16073427041108030590ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    arr_20 [i_0] [i_0] = arr_17 [i_0] [i_0] [i_0];
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned char) var_5))));
}
