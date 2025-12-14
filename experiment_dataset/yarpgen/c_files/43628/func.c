/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43628
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
    var_14 = ((/* implicit */long long int) max((var_14), (max((var_8), (((/* implicit */long long int) min((((((/* implicit */_Bool) 32767U)) || (((/* implicit */_Bool) var_4)))), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))))))))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            var_16 += ((/* implicit */unsigned long long int) (unsigned short)47055);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)40580))) ? (((/* implicit */int) ((_Bool) (short)-11819))) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0]))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                        }
                    } 
                } 
            } 
        }
        var_18 ^= ((/* implicit */signed char) ((arr_2 [0]) - (arr_2 [(_Bool)1])));
        var_19 += ((/* implicit */long long int) arr_0 [(signed char)8]);
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6144))) : (7969587437507000288ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (((((/* implicit */_Bool) (-(986502428702300431ULL)))) ? (7245999111307003013LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)20301))))))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_21 = min((((/* implicit */int) ((unsigned char) (signed char)9))), (169212889));
            var_22 ^= ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) (signed char)-111)))));
            var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2104599744)) || (var_3))))) * (((unsigned int) var_1))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 3; i_8 < 22; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), ((+(((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_0)))))))));
                        arr_31 [i_8] [i_8] [(_Bool)0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) * (((-1134128380) / (((/* implicit */int) (unsigned short)700))))))) ? (((/* implicit */int) var_1)) : (arr_27 [i_5] [i_5] [i_5] [i_8])));
                        arr_32 [18LL] [i_7] [i_7] [i_8] = ((/* implicit */int) (~(arr_24 [i_5] [i_9])));
                    }
                } 
            } 
            arr_33 [i_7] [i_7] [i_5] = ((((((/* implicit */_Bool) arr_24 [i_7] [i_7])) || (var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_7] [i_5]) <= (arr_24 [i_7] [i_5]))))) : (((((/* implicit */_Bool) (signed char)-27)) ? (5777337905098521777ULL) : (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5])))));
            arr_34 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) var_1))))));
            arr_35 [i_5] [i_7] = ((/* implicit */unsigned char) (((~(18446744073709551604ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_20 [i_7] [i_5])) : (3083519955381971838LL)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (0ULL))))))))));
        }
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (arr_22 [i_5] [i_5])))) ? (((arr_22 [i_5] [i_5]) & (4294967289U))) : ((+(arr_22 [i_5] [i_5]))))))));
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        var_26 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_26 [i_10] [i_10])), (min((var_12), (var_0))))), (((/* implicit */unsigned long long int) ((long long int) 2505661145U)))));
        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((var_10) / (((/* implicit */unsigned long long int) arr_24 [i_10] [i_10])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (1969130938U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((1196848235) / (((/* implicit */int) (_Bool)1))))))))));
    }
}
