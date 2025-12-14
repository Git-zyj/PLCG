/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225517
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
    var_18 = ((/* implicit */short) (((-((-(((/* implicit */int) (unsigned char)8)))))) ^ ((+(((/* implicit */int) ((short) var_12)))))));
    var_19 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)8)) : (((((int) var_13)) & (((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */signed char) (short)16955);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 3; i_4 < 16; i_4 += 2) 
                            {
                                arr_14 [i_2] [i_2] = ((/* implicit */int) var_1);
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 3] [i_4] = ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_15)))))) ? ((-(((unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13153440068204527422ULL)) ? (((/* implicit */int) ((unsigned short) (signed char)59))) : (((/* implicit */int) ((signed char) var_0)))))));
                                arr_16 [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [i_2])))) ? ((-(13153440068204527422ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_1] [i_1] [i_1 - 1] [i_2] [i_1] [i_2 - 1])))));
                                arr_17 [i_2] [i_1] [i_2 - 1] [i_4 - 1] = ((/* implicit */int) arr_13 [i_0] [i_1] [i_2 + 1] [i_2] [i_3] [i_4 + 1]);
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [(unsigned char)0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]))) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-9148541651363725751LL)))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-28645))) * (4132811845U))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (arr_7 [i_3])))))))) : ((-(-1289269090)))));
                            }
                            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4132811847U)))) : ((~(162155452U))))))));
                                arr_23 [i_0] [i_0] [i_1 + 1] [i_2 + 1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)19926)), (162155449U)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((int) (unsigned char)131)) - (118))))) : (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) arr_20 [i_0] [i_2] [i_2 + 1] [i_3 - 2] [i_2])) : (((/* implicit */int) var_1))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                            {
                                arr_27 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned short) (short)1));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 2])) ? ((~(arr_2 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) (short)6322)) < (-1289269090))))));
                            }
                            arr_28 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_1 + 1] [i_2] [i_2 - 1] [i_3 - 4] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_2 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 4])))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((int) var_17)))));
                        }
                    } 
                } 
                arr_29 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(min((arr_24 [i_0] [i_0]), (686181854)))))) > (((((/* implicit */_Bool) arr_19 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_1] [i_0] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1 + 3] [i_1] [1ULL] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
}
