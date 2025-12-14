/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201693
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) 553263945U)))))) << (((max((((/* implicit */unsigned long long int) (-(3741703371U)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7584038156647601803ULL))))) - (553263903ULL)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 -= ((/* implicit */signed char) ((12104794801027084895ULL) & (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)7)) ? (arr_1 [i_0] [(unsigned short)4]) : (-1844657895))) ^ ((~(arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6))))) ? (3252721866918402910ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (arr_0 [i_0] [i_0]) : (1016890221)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((arr_1 [i_0] [i_0]) % (arr_0 [i_0] [i_0]))), (var_8)));
        var_12 *= ((/* implicit */unsigned int) ((short) min((min((arr_0 [i_0] [3ULL]), (((/* implicit */int) (unsigned char)29)))), ((-(arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) 13259488150023653207ULL)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (max((((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [(signed char)2])), (var_8))) : (((/* implicit */int) max(((signed char)7), ((signed char)-34))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (1056438579U)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) ? (5208985114581058130ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) : (3741703371U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-12)), (-57224433)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))))));
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_2] [i_3] [i_1] [i_4] [i_4])))))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(arr_8 [i_4] [i_1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_3)), (var_7))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)223), ((unsigned char)221)))))))));
                }
            } 
        } 
    }
}
