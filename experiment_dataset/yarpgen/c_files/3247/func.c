/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3247
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
    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -1377733754)) ? (((/* implicit */int) var_8)) : ((+(((-1252446384) - (((/* implicit */int) var_6))))))));
    var_20 -= ((/* implicit */short) ((_Bool) var_3));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */short) min((((/* implicit */unsigned int) (-(-1252446375)))), (((((/* implicit */_Bool) min((1252446401), (1252446375)))) ? (629743333U) : (((/* implicit */unsigned int) 1252446383))))));
        var_22 = ((/* implicit */unsigned short) (unsigned char)82);
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((var_0) << (((((/* implicit */int) var_12)) - (1781)))));
        var_24 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) 10630265435744633444ULL))) < (((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6471)) * (((/* implicit */int) arr_0 [i_1 + 2]))));
    }
    for (unsigned short i_2 = 4; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_14))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            for (int i_4 = 4; i_4 < 12; i_4 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_2]))))) ? ((+(min((((/* implicit */unsigned long long int) -1252446383)), (17017853051703645779ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_13))), (var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)116)))), (1252446383)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) != (((/* implicit */int) arr_4 [i_4]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 1]))) & (var_15)))))));
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 1556294307))) ? (7340565230718027687ULL) : (((/* implicit */unsigned long long int) 1805613844U))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)7)), (5175294490833130607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4472))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 2) 
    {
        var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)16259)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_16 [i_6] [i_6]))) % (((/* implicit */unsigned long long int) ((unsigned int) 16ULL)))))) ? ((-(2489353446U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        var_31 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)249)))))))));
    }
}
