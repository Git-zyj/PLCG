/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247163
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
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */int) 8694954250680111984ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((long long int) 9751789823029439647ULL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_15 |= ((/* implicit */long long int) arr_2 [i_1]);
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (9751789823029439647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
                for (unsigned char i_3 = 4; i_3 < 10; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3 - 4] [i_0] [i_5] = ((/* implicit */short) ((unsigned char) ((var_2) << (((((((/* implicit */int) (short)-4419)) + (4438))) - (19))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (~((~(arr_15 [0] [i_1] [i_1] [i_4] [i_1] [i_4] [i_0]))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [9LL] [i_3 - 3]))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_0] = ((min((((/* implicit */long long int) min((38574291U), (arr_0 [i_0] [i_1])))), (((var_2) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30164))));
                    var_18 = ((/* implicit */unsigned int) min(((~(-7430533898729584721LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [9] [i_3 - 2] [i_3 - 1] [i_3] [i_3] [i_1])) - (((/* implicit */int) arr_5 [i_0] [i_3 - 1])))))));
                }
                var_19 = ((/* implicit */_Bool) max((var_19), (((_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_8))))));
                arr_21 [i_0] [(short)4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7351230153399064585LL)) ? (-7369930596775529515LL) : (7114553953808091973LL)))) / (min((9751789823029439632ULL), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1] [(signed char)10] [i_0] [(signed char)10] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((long long int) var_9));
}
