/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205991
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
    var_17 -= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 4])) != (((((/* implicit */int) var_2)) >> (((18446744073709551615ULL) - (18446744073709551585ULL)))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1] [i_0 - 2]) ? (((/* implicit */int) arr_0 [i_0 + 4])) : (((/* implicit */int) ((short) var_7)))));
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1]))) : (10538803461044674273ULL))))) ? (((int) arr_4 [i_1] [i_1 - 1])) : (((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1 - 2])))) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2]))))));
        arr_5 [i_1] = ((/* implicit */int) ((max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1]))))))) | (var_0)));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)39)), (10538803461044674273ULL))))));
                    arr_13 [i_3] [i_3] [i_3] [i_4] |= ((/* implicit */short) max((((((/* implicit */int) arr_7 [i_2])) * (((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) min((arr_7 [i_3]), (arr_7 [i_4]))))));
                    arr_14 [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 791824941U)) ? (arr_6 [i_3]) : (((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) var_13)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25324)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_4] [(unsigned short)6])), (18446744073709551609ULL))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_11 [i_2] [i_3] [i_4] [6U]) : (((/* implicit */long long int) -2147483646))))) ? (var_5) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (arr_6 [i_3]))))))));
                    var_21 = ((/* implicit */unsigned short) (-(((arr_1 [i_2] [i_2]) ? (arr_8 [i_4] [i_3]) : (((/* implicit */int) arr_1 [i_2] [i_3]))))));
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)15)), (8776724973292151960ULL)));
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1231519078U) >> (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((arr_3 [i_5] [i_5]), (((/* implicit */unsigned long long int) (_Bool)1)))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1884373349)) && (((/* implicit */_Bool) 4783144621051285039ULL))))), (arr_4 [i_5] [i_5])))));
        var_23 &= ((/* implicit */unsigned int) (+((-(max((var_9), (((/* implicit */int) var_11))))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 13; i_7 += 1) 
            {
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+((+(((((/* implicit */_Bool) (short)26627)) ? (-1321147952) : (((/* implicit */int) var_12)))))))))));
                        arr_25 [4LL] [i_5] [4LL] [i_5] [(signed char)12] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) arr_1 [18U] [i_7])), (arr_7 [i_6]))), ((short)-26628))))) ^ (min((((/* implicit */unsigned long long int) ((arr_4 [i_5] [12U]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 - 1] [i_8]))) & (13663599452658266561ULL)))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967295U))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_9] [i_9])) ^ (((/* implicit */int) var_1))));
                var_27 = ((/* implicit */long long int) max((var_27), (((long long int) ((((/* implicit */_Bool) arr_27 [(signed char)5] [i_10 + 4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_10] [i_9]))))))))));
                arr_31 [(unsigned char)0] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */signed char) ((_Bool) 4783144621051285018ULL)))))) ? (4783144621051285038ULL) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1709))) + (-6710616761989062681LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9] [i_10]))) ^ (arr_28 [0U] [i_10 + 4])))))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_16)) : (min((var_9), (((/* implicit */int) (unsigned short)65535))))))));
}
