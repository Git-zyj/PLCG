/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231499
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) ((var_19) ^ (((/* implicit */unsigned long long int) var_6)))))), (((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */unsigned long long int) var_5)) * (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((var_1) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((11227493245100044728ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_6)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_19))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) ^ (((/* implicit */int) arr_1 [i_0]))));
            arr_6 [i_0] = ((/* implicit */short) var_9);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] [6U] = ((/* implicit */long long int) ((unsigned long long int) arr_12 [i_0] [i_0] [i_2] [i_3]));
                        arr_15 [18] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) var_0);
                        arr_16 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17914347279797255736ULL)) ? (10078799774322927563ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1))))) : (((arr_9 [i_0] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_17 [i_0] [i_1] [(short)16] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_3] [i_1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_4] [i_6])) * (((/* implicit */int) (!(((/* implicit */_Bool) -8403788066430722765LL)))))));
                            arr_25 [i_0] [i_0] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */_Bool) ((signed char) ((var_16) / (((/* implicit */unsigned long long int) 3962865470441529435LL)))));
                        }
                    } 
                } 
            } 
        }
        arr_26 [i_0] = ((/* implicit */unsigned char) (~(var_4)));
    }
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        arr_30 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */int) var_8)) : (var_4)))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) arr_28 [i_7])) : (arr_27 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(var_13)))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11497))) | (var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    arr_37 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_35 [i_7])), (var_6)))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)73), ((unsigned char)240))))) & (var_16)))));
                    arr_38 [i_7] [i_9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_27 [i_9] [i_8])))))) << (((/* implicit */int) ((arr_31 [i_7] [i_8]) > (((/* implicit */unsigned int) arr_34 [i_7] [i_9] [i_9])))))));
                }
            } 
        } 
        arr_39 [13ULL] [13ULL] = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))) & (((/* implicit */unsigned long long int) ((-2954238505469895284LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 916715936U)) == (var_17)))))));
        arr_40 [i_7] [i_7] = ((/* implicit */short) var_4);
        arr_41 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((var_19) - (2356735007585254131ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_36 [i_7] [10ULL] [i_7])))))))) >= (max((var_0), (((/* implicit */unsigned long long int) ((long long int) 11002563590514496793ULL)))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
    {
        arr_44 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) 15U)))));
        arr_45 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25024))) : (-2954238505469895296LL)))) ? (var_13) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_43 [i_10])), (arr_28 [i_10])))));
        arr_46 [i_10] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_43 [i_10])) ? (((/* implicit */int) arr_43 [i_10])) : (((/* implicit */int) arr_43 [i_10])))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
    {
        arr_51 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((var_9), (var_3))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)32751)), (3962865470441529435LL))))))) ? (arr_33 [i_11]) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
        arr_52 [i_11] = ((/* implicit */signed char) arr_49 [i_11]);
    }
}
