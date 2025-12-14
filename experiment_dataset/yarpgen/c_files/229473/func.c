/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229473
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
    var_12 ^= ((/* implicit */_Bool) (short)(-32767 - 1));
    var_13 = ((/* implicit */int) min((((/* implicit */long long int) min((min((((/* implicit */short) var_1)), (var_4))), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-9168059638204352125LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_0 - 2]), (((/* implicit */unsigned long long int) var_11))))) && (((/* implicit */_Bool) var_1)))))));
                    arr_9 [i_0] [4] [4] [i_0] = ((/* implicit */unsigned short) (unsigned char)8);
                    var_15 ^= ((/* implicit */long long int) arr_1 [i_1]);
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) (unsigned char)0);
                    arr_12 [i_0] [i_1] [i_0] [10ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
                    var_17 = ((/* implicit */long long int) ((short) 18446744073709551605ULL));
                }
                for (short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_13 [i_0 - 4] [11ULL])) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 - 3]))))));
                    var_19 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */unsigned long long int) arr_1 [(signed char)1])) : (18446744073709551605ULL))))));
                }
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_0);
    var_22 |= (!(min(((!(((/* implicit */_Bool) (unsigned short)31666)))), ((!(((/* implicit */_Bool) var_9)))))));
}
