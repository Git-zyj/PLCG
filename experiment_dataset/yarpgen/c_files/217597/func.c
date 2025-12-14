/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217597
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((long long int) 16588860371122713569ULL)) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_12);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 2147483647);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_15 -= ((/* implicit */_Bool) ((short) var_4));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned short)255))));
        var_16 ^= ((/* implicit */_Bool) ((long long int) 2831210597U));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((unsigned int) ((var_2) ? (1857883702586838029ULL) : (((/* implicit */unsigned long long int) var_7))));
        arr_11 [i_2] = ((/* implicit */short) (+(max((var_7), (-348636981)))));
        var_17 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) 3629322841465339412LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), ((~(((/* implicit */int) arr_9 [i_2]))))))));
    }
    var_18 = ((/* implicit */short) (((+(min((((/* implicit */long long int) var_7)), (7342287917482644960LL))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8))))) : (var_6))))));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3])))))))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                for (long long int i_6 = 3; i_6 < 23; i_6 += 1) 
                {
                    {
                        arr_23 [i_4] [i_4 - 3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7342287917482644960LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)20549)) == (((/* implicit */int) (short)2741))))) : ((~(((((/* implicit */int) (_Bool)1)) << (((7342287917482644960LL) - (7342287917482644943LL)))))))));
                        arr_24 [i_3] [i_3] [i_4] [i_5] [(unsigned char)0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) ((signed char) arr_13 [i_4 + 2] [i_6 - 3])))))) ? (1978489493U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)46)))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) min((arr_13 [i_3] [i_3]), (var_10)))) ? (((unsigned long long int) var_0)) : (18446744073709551615ULL))))))));
                    }
                } 
            } 
        } 
        arr_25 [i_3] = ((/* implicit */short) arr_17 [i_3] [i_3] [i_3]);
    }
    var_21 = ((int) ((((/* implicit */unsigned int) -109327084)) | (((((/* implicit */_Bool) (unsigned short)20)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
