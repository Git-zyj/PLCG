/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212462
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
    var_17 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (11658255909593649241ULL))) || (var_11))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (11658255909593649242ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))));
        var_18 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 14; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((int) arr_1 [i_3] [i_2 - 1])) * (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (11658255909593649250ULL))) < (((unsigned long long int) (signed char)-20)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) arr_10 [i_1] [(unsigned short)12] [i_4]))))) : (arr_7 [i_4]))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2] [i_2 - 4] [i_2 + 1]))))))))));
                                arr_19 [i_3] [i_2] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (-1720085681998351460LL)))) != (((/* implicit */unsigned long long int) max((arr_18 [(_Bool)1] [i_1] [i_2 - 2]), (arr_18 [11ULL] [i_1] [i_2 - 3]))))));
                                arr_20 [i_3] [i_4] = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) >= (((/* implicit */int) (signed char)3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((6788488164115902375ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))) : ((+(((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */unsigned long long int) -7596027817296561834LL)) : (6063394615062091204ULL))))))))));
        var_22 ^= ((/* implicit */_Bool) (+((~((+(((/* implicit */int) arr_16 [i_1] [10ULL] [i_1] [12ULL] [i_1] [i_1] [i_1]))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            {
                arr_27 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-((~(arr_26 [i_6] [(_Bool)1] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-31)))));
                var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) <= (((/* implicit */int) (signed char)111)))))) >= (((((/* implicit */_Bool) arr_22 [i_6])) ? (11658255909593649241ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))))));
            }
        } 
    } 
}
