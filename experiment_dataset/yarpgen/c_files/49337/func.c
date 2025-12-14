/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49337
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_14)) ? (18399981348639810776ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3374153115067295421LL)))))) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) (unsigned short)56310)) ? (6930509940428105326LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) (unsigned char)239);
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)-100), ((signed char)104)))) ? (min((arr_8 [i_2 - 2] [i_2 + 1] [i_2 - 2]), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 - 2] [i_2 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))))));
                    }
                    var_22 = ((/* implicit */short) max((829830392), (((((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned short)1270)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -829830393)))))))) ? (arr_13 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122)))));
        var_23 = ((/* implicit */short) var_12);
    }
    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) var_4);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 7145418439800122696ULL)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)10645)) || (((/* implicit */_Bool) 18446744073709551615ULL))))))))));
                    }
                } 
            } 
        } 
        arr_25 [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)224)), (var_1)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-21697)) + (2147483647))) << (((((var_14) + (647348405))) - (18)))))) : (((3406272050176992493ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned int) 829830373)), (((/* implicit */unsigned int) min((-829830392), (var_4))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)251)) > (1815017637))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((1815017637), (((/* implicit */int) (unsigned short)32634)))), (min((-1686257465), (((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) 2950635693U)))));
}
