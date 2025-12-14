/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195423
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4572443892309124853LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)173))))) : ((+(var_8)))))) ? (4572443892309124850LL) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [(unsigned char)5] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (max((arr_0 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4] = arr_9 [i_4] [i_1] [i_0];
                                arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) (unsigned char)229);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_14 = arr_0 [i_1 - 2] [i_1 - 1];
                    arr_18 [i_5] = ((/* implicit */unsigned int) ((long long int) (unsigned char)54));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_9))))));
}
