/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50487
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
    var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(var_1)))) ? (16874262939361185303ULL) : (((/* implicit */unsigned long long int) (+(3704224808359908220LL))))))));
    var_17 = ((((unsigned int) ((((/* implicit */_Bool) var_14)) ? (-1709047796) : (((/* implicit */int) var_8))))) != (((/* implicit */unsigned int) ((1158042363) | (((/* implicit */int) var_15))))));
    var_18 *= ((/* implicit */unsigned int) (((~(((/* implicit */int) var_15)))) | (((((/* implicit */_Bool) ((-1989802438) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_12))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) (signed char)-1));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)44))) ^ (-8218578710632358397LL)));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1 - 2] [i_1] = ((/* implicit */int) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 4; i_4 < 13; i_4 += 1) 
                {
                    var_21 = ((/* implicit */signed char) (-((~(((var_7) / (var_7)))))));
                    var_22 = ((/* implicit */unsigned int) ((757818469) != (-974294275)));
                    var_23 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_8 [i_3] [i_4])) : (((((/* implicit */int) (unsigned char)87)) * (((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)253)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2126881104U)) && (((/* implicit */_Bool) 3583432151U))));
                            var_25 = ((unsigned int) arr_12 [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                arr_19 [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) > (((/* implicit */int) var_9)))))))));
                arr_20 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 974294271)) && (((/* implicit */_Bool) (-(var_4))))));
            }
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_24 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38897)) ? (((/* implicit */long long int) 1989802438)) : (281474976710655LL)))), (min((arr_2 [i_7]), (((arr_2 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_25 [i_2] [i_1] = ((/* implicit */signed char) var_4);
            }
            arr_26 [i_1] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) arr_14 [i_1 + 2] [i_1 + 2]))), (((long long int) ((signed char) arr_1 [i_2])))));
            arr_27 [i_1 - 1] [i_2] |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)233)), (3010357918652440695ULL)))) ? (((/* implicit */long long int) (-(arr_7 [i_1] [i_1 - 1] [i_1])))) : (2702520850292954825LL));
            arr_28 [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)249))))), (((((/* implicit */_Bool) 3445249276U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2199023255551LL)))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) -1698405481)), (arr_11 [i_2])))) : (((((/* implicit */unsigned long long int) 65535U)) * (18446744073709551615ULL)))))) ? (((/* implicit */long long int) (-(1698405495)))) : (((((/* implicit */_Bool) -2484472400147266148LL)) ? (1413123843161927387LL) : (((/* implicit */long long int) 4108071337U))))));
        }
        arr_29 [i_1] [i_1] = ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_1] [i_1]))))) | (((long long int) (-(((/* implicit */int) arr_16 [i_1]))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 ^= ((/* implicit */_Bool) (((+(4294967295U))) & (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0)))))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (-((-(-6852432341157303429LL))))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_8])) ? ((~(((/* implicit */int) (unsigned short)39360)))) : (((/* implicit */int) ((unsigned char) 9ULL)))));
    }
    var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_5))))))) ? (var_10) : (((unsigned long long int) min((3700354941U), (((/* implicit */unsigned int) (unsigned char)12)))))));
}
