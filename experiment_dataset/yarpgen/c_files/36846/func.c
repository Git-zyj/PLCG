/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36846
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8872))) > (18446744073709551615ULL)));
        var_19 = ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (18446744073709551615ULL));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((_Bool) arr_2 [i_1]))) - (((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48994))))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (-((~(var_17)))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)(-127 - 1)))) ? (((/* implicit */long long int) min((3508574990U), (((/* implicit */unsigned int) (_Bool)1))))) : (max((-2925369012042915322LL), (-1756689828770381568LL)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((5ULL) >= (18446744073709551596ULL))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            arr_17 [i_1] = (~(min((18446744073709551610ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16530))))))));
                            arr_18 [i_1] [i_1] [i_3] [i_4] [i_4] [i_1] [i_4 - 2] = ((/* implicit */long long int) var_13);
                            arr_19 [i_1 + 1] [i_2] [i_1] = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8886))) : (3411330860U))))), (((/* implicit */unsigned int) 1243983574))));
                            arr_20 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17857))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) : (arr_4 [i_1])));
                        }
                        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            arr_23 [i_1] [i_1 + 2] [i_1] [0U] = ((/* implicit */_Bool) (unsigned short)15621);
                            var_22 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)16528));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = arr_0 [i_2] [i_2];
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) (-(((long long int) arr_10 [i_2 - 1] [i_4] [i_2 - 1] [i_4]))));
                            var_24 = ((/* implicit */long long int) (-(((3566786406U) >> (((((((/* implicit */long long int) ((/* implicit */int) (short)24049))) + (var_9))) + (2450278636463042131LL)))))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) ((arr_12 [i_1] [i_3] [i_2] [i_1]) >> (((var_11) - (37752926)))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((((/* implicit */int) (signed char)-62)) & (-1174252747));
    var_27 = ((/* implicit */_Bool) var_9);
    var_28 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)47682)) + (((/* implicit */int) (unsigned short)47700))));
    var_29 = (-(((/* implicit */int) var_0)));
}
