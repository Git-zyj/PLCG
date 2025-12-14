/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3166
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) * ((+(3684639811552277203ULL)))));
                        arr_12 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (-2265684794245236077LL))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((_Bool) (_Bool)1)))));
                        var_19 -= ((/* implicit */long long int) ((short) ((long long int) (unsigned char)126)));
                        arr_15 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) (-(143974450587500544ULL)));
                    }
                    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (17ULL));
                    var_21 &= ((/* implicit */signed char) ((unsigned long long int) ((short) 7234244355053047204LL)));
                    var_22 = ((/* implicit */short) ((long long int) ((10ULL) == (((/* implicit */unsigned long long int) 7234244355053047204LL)))));
                    var_23 |= ((((10ULL) - (((/* implicit */unsigned long long int) -7234244355053047199LL)))) % (18446744073709551595ULL));
                }
            } 
        } 
        arr_16 [(signed char)7] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)49))));
    }
    var_24 = var_6;
    var_25 += ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)255)), (-7234244355053047199LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (6917529027641081856ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))));
}
