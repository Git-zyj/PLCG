/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246845
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 &= ((/* implicit */short) ((arr_0 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1217388086)), (1201869426119863391ULL)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_2 [i_0] [i_0]))))))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0] [12ULL]))), (((((/* implicit */unsigned long long int) var_6)) - (17244874647589688230ULL)))))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */int) arr_1 [i_0] [5]);
    }
    /* LoopNest 3 */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 - 1])), (arr_6 [i_1 + 1] [i_1 - 1])))));
                    var_22 = ((/* implicit */short) arr_7 [i_1] [i_2]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 4; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_23 &= ((/* implicit */int) (~(arr_10 [i_4 + 3] [i_4 + 3] [i_4 - 2] [i_4 + 3])));
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(short)15] [i_2] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_2 + 4]))));
                        var_25 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_1 + 1] [i_2 + 3] [i_3] [i_2 + 3] [i_4]))))) >= (1201869426119863386ULL)));
                    }
                    for (signed char i_5 = 4; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18))))) ? (((((/* implicit */_Bool) 1201869426119863386ULL)) ? (17244874647589688229ULL) : (17244874647589688229ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                        var_27 = 17244874647589688229ULL;
                        arr_18 [i_1] [(signed char)7] [i_3] [i_5] = ((/* implicit */signed char) arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                        var_28 = ((short) (-(((/* implicit */int) (unsigned char)191))));
                    }
                }
            } 
        } 
    } 
}
