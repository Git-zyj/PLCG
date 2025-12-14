/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210564
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
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0] [(signed char)9]), (((/* implicit */unsigned short) arr_0 [(signed char)6])))))) ^ (min((var_1), (((/* implicit */long long int) (short)-23932)))))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 4; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (signed char)-89);
        var_17 = ((/* implicit */unsigned char) var_4);
        arr_5 [i_1] [i_1] &= min((((/* implicit */unsigned int) ((min((((/* implicit */int) (short)23931)), (arr_2 [7U] [(signed char)14]))) | (((/* implicit */int) ((short) (signed char)-89)))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((unsigned int) var_4)))));
    }
    for (unsigned int i_2 = 4; i_2 < 14; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-77)) ? (2322889072U) : (4264536618U)));
                    var_19 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-10)))))));
                    var_20 = ((/* implicit */unsigned int) ((arr_10 [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)23932))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-7)))) ^ (((/* implicit */int) ((arr_10 [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ? (((/* implicit */int) ((11092395290577602377ULL) < (((/* implicit */unsigned long long int) 1972078223U))))) : (min(((~(((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
                        arr_19 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)173))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_2 - 1] [i_3] [i_4] [15] [15] [i_5] [i_3] = ((/* implicit */long long int) (_Bool)1);
                            var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) var_0))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) % ((+(923117695U)))))));
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) 2322889072U);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_8))));
                        }
                    }
                    for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        arr_30 [i_3] [i_3] [i_8] [i_8 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-103)))))))));
                        arr_31 [i_4] [i_4] [i_3] [(unsigned short)9] = ((/* implicit */short) max((((/* implicit */long long int) 2451319315U)), (max((((/* implicit */long long int) arr_3 [i_2])), (((long long int) 5199287178930586489LL))))));
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))))) ^ (((((/* implicit */_Bool) 3515759034U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_3] [i_8] [i_2 + 2] [i_3] [i_2 + 2]))) : (var_10))))))));
                    }
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) + (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) != (3236883659U)))))));
                        arr_34 [i_3] [i_4] [i_9 - 3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)21035))));
                        arr_35 [i_2] [i_2] [i_3] [i_9] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) % ((-(arr_10 [i_3])))));
                        var_26 += ((/* implicit */signed char) (~((-(((/* implicit */int) arr_24 [i_2] [i_3] [i_2 + 2] [i_9 + 1] [i_9 + 1]))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                for (unsigned short i_12 = 1; i_12 < 16; i_12 += 4) 
                {
                    {
                        arr_43 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_12] [i_10] [i_10] = ((/* implicit */unsigned short) 2097151LL);
                        var_27 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */unsigned long long int) 3739566110U)) : (((((/* implicit */_Bool) 2875657871U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (13290370569590192893ULL))))) >> (((var_9) - (1113296728953716509ULL)))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2 - 2] [i_2 + 3] [i_2 - 1])) ? (min((arr_3 [i_2 + 2]), (((/* implicit */int) (short)32208)))) : (((/* implicit */int) arr_12 [i_2] [i_2] [10]))));
    }
    var_29 = ((/* implicit */unsigned int) ((((long long int) var_2)) != (((/* implicit */long long int) ((((_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48144))) > (var_6)))) : (((/* implicit */int) var_7)))))));
}
