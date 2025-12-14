/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237594
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
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (short)5093)));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1 - 3] [i_2] [i_2 - 1])) >= (((/* implicit */int) arr_7 [i_1 - 3] [(short)12]))));
                    var_13 -= ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_1 - 2] [i_1]))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((8326745496440208295ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)17] [i_3]))))))))) * (((/* implicit */int) min((min((var_4), (var_5))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))))))));
                    arr_12 [i_3] [i_1 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(32767)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [12U] [i_1] [i_3] [i_3]))) ^ ((((_Bool)0) ? (10119998577269343323ULL) : (((/* implicit */unsigned long long int) var_2)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), (-955123486)))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11214794347738394216ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (var_3))))))));
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1]))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) -2147483645)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_1] [14U] = ((/* implicit */_Bool) (-(7231949725971157400ULL)));
                    var_16 = ((/* implicit */unsigned long long int) ((((var_2) % (((/* implicit */long long int) arr_14 [i_0] [i_1] [14ULL] [14ULL])))) >> (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 7231949725971157391ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)2998))));
                }
                arr_18 [i_0] [5U] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) arr_6 [i_1 - 3] [i_1] [i_1] [i_1 + 1])), (arr_0 [i_1 - 2])))) > (((/* implicit */int) min((var_6), (((/* implicit */signed char) arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1 - 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) || ((!((!(((/* implicit */_Bool) var_5))))))));
}
