/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44879
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
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_0])), ((unsigned short)65535)))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) max((arr_1 [i_0 + 1] [i_0]), (((/* implicit */short) var_8)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (479060372)))) ? (((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_0 - 1])) - (1))) : (47650024)))) - (((min((var_11), (var_10))) - (((/* implicit */long long int) (-(-2))))))));
                    arr_7 [i_2] [i_2] [i_1] [0LL] = ((/* implicit */long long int) arr_6 [i_0 + 1] [i_1] [i_2]);
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_1)) : (479060369)));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_3])), (479060371)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -479060369)) & (arr_5 [i_3] [i_3] [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_0 [i_3])))))) ? (((((/* implicit */_Bool) -4756547994645168401LL)) ? (arr_5 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) -13)))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])), (((17) | (-4)))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_12 [i_4] [i_4]))));
        arr_13 [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)70)), (arr_11 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) - (3540815118U))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((max(((short)-2), ((short)7))), (arr_11 [i_4])))))));
        var_17 = ((/* implicit */unsigned short) ((-43) / (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) var_7))))))));
        var_18 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_4])), (-1LL)))) ? (((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 8106026336528814035LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_4])) + (2147483647))) >> (((((((/* implicit */_Bool) 8895757691063477750LL)) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (var_2))) - (2648)))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_0);
            arr_20 [i_5] [(short)7] = ((/* implicit */int) arr_17 [i_5] [i_5] [i_5]);
            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_6]))) == (arr_14 [i_5]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))))));
        }
        arr_21 [i_5] [i_5] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        var_21 = ((/* implicit */unsigned long long int) (+(479060397)));
        var_22 = ((/* implicit */long long int) arr_17 [i_5] [i_5] [i_5]);
    }
    /* LoopSeq 3 */
    for (long long int i_7 = 1; i_7 < 23; i_7 += 1) 
    {
        arr_24 [i_7 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_22 [i_7 - 1])), (arr_23 [i_7 - 1])));
        var_23 = ((/* implicit */_Bool) min((var_23), (arr_22 [i_7 + 2])));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((unsigned long long int) (_Bool)1))));
    }
    for (signed char i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) ((4135546991U) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_8 + 1])))))));
        arr_28 [i_8 + 1] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((-3047804364103367488LL) + (9223372036854775807LL))) << (((6194178704348963177LL) - (6194178704348963177LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((min((-3111263414889851043LL), (arr_26 [i_8] [i_8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8 - 1])) ? (((/* implicit */int) arr_15 [i_8])) : (((/* implicit */int) (unsigned char)62)))))))));
        arr_29 [i_8] [i_8] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43229)) ? (((/* implicit */int) (short)5208)) : (((/* implicit */int) var_1))))) >= (max((var_10), (8170623392594099111LL))))));
    }
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
    {
        arr_32 [i_9] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)9056))));
        var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) var_11)) ? (8895757691063477767LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9 + 1] [i_9 + 1] [i_9 + 1])))))));
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            arr_35 [i_9] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13077002312587602363ULL)) && (((arr_18 [i_9] [i_10] [i_9]) && (((/* implicit */_Bool) arr_19 [i_10]))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                arr_39 [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) var_11);
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (_Bool)1))));
                    var_28 ^= ((/* implicit */unsigned int) (-(-2619692651321271087LL)));
                    var_29 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                }
            }
            arr_42 [i_10] [i_9] [i_9] = ((/* implicit */short) arr_33 [i_10]);
            var_30 = ((short) 4135546985U);
        }
    }
}
