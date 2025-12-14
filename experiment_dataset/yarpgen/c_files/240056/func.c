/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240056
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 10835024676711219410ULL);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((_Bool) (unsigned short)63876));
                    arr_8 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((min((7042747348844769580ULL), (((/* implicit */unsigned long long int) (unsigned short)63854)))), (((/* implicit */unsigned long long int) (unsigned short)63869))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [10ULL])) == (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((var_14), (arr_5 [(unsigned char)12])))) : (((/* implicit */int) max((arr_9 [(unsigned short)4] [i_4 - 1]), (var_13))))))));
                                var_21 |= ((((((/* implicit */int) arr_0 [i_4 - 2] [6LL])) ^ (max((arr_6 [i_1] [4ULL]), (((/* implicit */int) (unsigned short)1651)))))) | ((-(((/* implicit */int) arr_13 [(unsigned short)10] [i_4 - 1] [i_2] [i_1] [i_0 + 2] [i_4 + 1] [i_3])))));
                            }
                        } 
                    } 
                    var_22 ^= min(((+(((/* implicit */int) (unsigned short)63893)))), (((/* implicit */int) var_1)));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) 646463463)) ? ((-(arr_15 [i_5] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned short)63861)) : (-1672442537))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    {
                        arr_27 [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)63876), ((unsigned short)1656)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-31834)) + (((/* implicit */int) var_6))))) : ((-(5225117299663116826ULL)))));
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)63846)), (((((/* implicit */_Bool) arr_10 [(unsigned char)2] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) ? (((((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) (unsigned short)63862)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) (unsigned short)65534)))) : (min((max((var_9), (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) arr_12 [(signed char)0] [i_6])), (arr_15 [i_6 - 1] [i_7])))))));
                        var_25 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_13), (arr_5 [(unsigned char)4])))) || (((/* implicit */_Bool) var_2))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (short)-15620))))), (((arr_26 [i_6] [i_6 + 1] [i_6] [(unsigned char)8]) / (var_7)))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) min((((unsigned int) arr_12 [6ULL] [i_5 + 1])), (((/* implicit */unsigned int) arr_12 [(unsigned short)0] [i_5]))));
    }
    var_27 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)17)) : (var_0))) : (((/* implicit */int) var_17))))));
}
