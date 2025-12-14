/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230874
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_2 [(short)4] [i_1])))), (((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-21558))))))) ? (min((max((var_11), (((/* implicit */unsigned long long int) arr_5 [i_1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                    arr_9 [(_Bool)1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((_Bool) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [(short)11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64))))));
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_6 [(signed char)5] [i_0]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_3]))))) : (((var_9) ? (((/* implicit */int) arr_7 [i_1] [1ULL])) : (((/* implicit */int) arr_5 [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-21550)) / (((/* implicit */int) arr_7 [i_0] [i_1]))))) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)21550))))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_3] [i_0])))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    arr_17 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21550))) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (short)-21564)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21550))) : (var_14)))))));
                    var_20 = ((/* implicit */signed char) var_1);
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [2LL] [i_4] [i_4] [i_0]);
                    arr_19 [i_4] [i_1] [i_4] = ((/* implicit */_Bool) var_3);
                    var_21 = ((/* implicit */short) max((((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))))), ((~((-(((/* implicit */int) (short)21540))))))));
                }
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1]))));
            }
        } 
    } 
    var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21549))) : (26ULL)))))) : (var_2)));
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-4967))))) ? (var_2) : ((-(15ULL)))))) ? (max((((((/* implicit */_Bool) var_4)) ? (1135336129242470980ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21554))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551611ULL))))));
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-29453))))))))));
}
