/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236000
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
    var_20 |= ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_17)));
    var_21 = ((/* implicit */short) ((max((((/* implicit */long long int) var_14)), (((var_5) ^ (((/* implicit */long long int) var_15)))))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18446744073709551614ULL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_22 = var_15;
        var_23 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) var_18)) >= (((2199023255551LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)68)))))));
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) -182390375369332305LL);
                var_24 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1] [i_1])) / (((/* implicit */int) arr_10 [i_1] [i_2]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))));
            }
            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                arr_18 [i_1] [i_2] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) (-(var_1)))) >= (min((((/* implicit */unsigned long long int) arr_16 [i_1])), (arr_12 [i_1] [(unsigned short)18]))))), (((((arr_7 [i_1] [(signed char)19] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [18ULL])))))));
                arr_19 [i_1] [(unsigned short)6] [i_1] = ((/* implicit */int) arr_13 [i_1] [i_1]);
                var_25 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
            }
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (short i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) >= (-2199023255541LL)));
                            var_27 ^= ((/* implicit */short) var_12);
                            arr_29 [i_1] [i_1] [i_6] [i_1] [i_8] = ((/* implicit */signed char) ((4943443360070243912LL) >= (var_11)));
                            arr_30 [i_1] [1LL] [i_6] [(_Bool)1] [i_8 + 3] [i_8] [i_8 + 2] = arr_16 [i_1];
                            arr_31 [i_1] [i_1] [i_1] [i_7] [i_8] = ((/* implicit */_Bool) var_15);
                        }
                    } 
                } 
            } 
            var_28 = var_15;
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
        {
            arr_34 [i_1] [i_1] = ((/* implicit */_Bool) var_12);
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) 14849803359797560929ULL))) / (((/* implicit */int) (unsigned char)28))));
            var_30 = ((((/* implicit */_Bool) (short)-18310)) ? (((/* implicit */unsigned long long int) -2899006855469672689LL)) : (18046205059277245234ULL));
        }
        var_31 = ((/* implicit */unsigned short) ((2199023255535LL) >= (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) + (4943443360070243906LL))) * (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (-6540325009235165593LL)))))));
        arr_35 [i_1] = ((/* implicit */int) arr_32 [i_1] [i_1] [i_1]);
    }
}
