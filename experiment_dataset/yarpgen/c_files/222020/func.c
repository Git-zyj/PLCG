/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222020
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [(short)10])), (arr_0 [12U] [12U])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [4ULL] [4ULL]))))) : ((~(((/* implicit */int) (short)5953)))))))));
        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((((-1413838142614578144LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ^ (min((min((((/* implicit */long long int) (unsigned char)110)), (-1995909957579924445LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [2] [i_0])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */int) arr_4 [15U] [i_1])) & (((/* implicit */int) arr_4 [(short)13] [i_1])))), (((/* implicit */int) arr_5 [(unsigned short)17] [i_1])))));
        var_15 = ((/* implicit */unsigned int) ((min(((!(arr_5 [i_1] [i_1]))), ((!(((/* implicit */_Bool) 2U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2047)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 468806643U)) ? (468806648U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))))))))) : (var_1)));
    }
    for (short i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) 3276644521U);
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 33554431)) == (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) | (691322152U)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */short) (+(-1995909957579924457LL)));
        arr_12 [i_3] [i_3] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_7)));
        var_18 = var_7;
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) (unsigned short)50255))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_15 [i_4])))))) <= (((arr_15 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 2; i_8 < 9; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((134217720) % (((/* implicit */int) arr_10 [i_8] [i_8]))));
                                arr_27 [i_4] [(_Bool)1] [i_4] [i_6 - 1] [(_Bool)1] [i_6 - 1] = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_4] [10U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [10ULL] [i_4]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) ((signed char) var_4))))) : (((/* implicit */int) var_4))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((-1413838142614578144LL) + (9223372036854775807LL))) >> (((var_1) - (1768713918))))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (2362239823U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
