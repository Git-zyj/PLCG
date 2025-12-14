/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227411
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_1])) ? (max((-1861942303214408714LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) arr_0 [i_1]))))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)25866)) ? (arr_2 [i_0 + 2] [i_0 + 2] [i_0]) : (((/* implicit */long long int) var_2))))))));
                arr_4 [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (-1861942303214408714LL)))) ? (((/* implicit */long long int) (~(var_12)))) : (max((1861942303214408714LL), (((/* implicit */long long int) arr_3 [i_0 - 2])))))), (((/* implicit */long long int) arr_3 [i_0]))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */int) ((max((((/* implicit */long long int) arr_6 [i_2] [i_0 + 1] [i_2])), (max((((/* implicit */long long int) arr_3 [i_0])), (-1861942303214408696LL))))) != (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)-80)))) != (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_2 - 1])) : (((/* implicit */int) (signed char)64))))))))));
                    var_15 *= ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_0)), (7845261206150533771LL)))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (arr_5 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_3 [1])))) / (((/* implicit */int) (signed char)1))))));
                    arr_8 [i_2] [(unsigned short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */int) min((arr_3 [i_2]), (((/* implicit */unsigned char) (signed char)-84))))), (((((/* implicit */int) (signed char)80)) << (((7002241303672499826LL) - (7002241303672499824LL))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */unsigned int) var_0)) : (arr_5 [i_2]))) != (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) >> (0)))))))));
                    var_16 &= ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_8)))))))));
                    arr_9 [i_2] [i_2] = ((/* implicit */int) ((long long int) (signed char)47));
                }
                for (long long int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    arr_12 [i_3 + 1] [(unsigned char)2] [i_0] [i_0] = (signed char)-64;
                    arr_13 [i_0] = ((/* implicit */signed char) max((min(((+(-3833427415798207456LL))), (((((/* implicit */_Bool) (unsigned short)0)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_5 [i_0])))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)74)) * (((/* implicit */int) (_Bool)0)))))));
                    arr_14 [i_0] [i_0 + 2] [i_1] [i_3 + 1] &= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-75)))), (((((/* implicit */int) arr_10 [i_3])) % (((/* implicit */int) arr_10 [i_0 - 1]))))));
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */int) var_7);
                    arr_16 [i_0] [i_1] [i_1] [i_1] = max((max((((/* implicit */long long int) (+(arr_1 [i_3 - 1])))), (max((((/* implicit */long long int) (unsigned char)7)), (9223372036854775784LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / (9223372036854775807LL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1))))))))));
                }
                /* vectorizable */
                for (long long int i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_4] = ((/* implicit */signed char) arr_19 [i_0 - 1] [i_4]);
                    arr_22 [i_4] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_20 [i_4] [i_4]) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_4]))) : (arr_5 [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-75)))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_6);
}
