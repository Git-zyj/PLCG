/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243346
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
    var_19 = ((/* implicit */unsigned long long int) (~(((unsigned int) -9223372036854775800LL))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = ((max((((/* implicit */unsigned long long int) min((-6211550495752146781LL), (-6211550495752146781LL)))), (((((/* implicit */_Bool) 6765031382408667157LL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20583))))))) | (((/* implicit */unsigned long long int) 3051709692U)));
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-7613))) % (463088731U))) < ((-(3051709692U)))))) ^ (((arr_12 [i_0] [i_0] [i_1 + 1] [i_2 - 4]) - (arr_12 [i_2] [i_2] [i_1] [i_0])))));
                    arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned short) -1514083410));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8827078820491297445ULL)) ? (8827078820491297461ULL) : (((/* implicit */unsigned long long int) 6211550495752146781LL))))) ? ((-(-6211550495752146781LL))) : (((/* implicit */long long int) min((((int) 70842020U)), (((/* implicit */int) ((var_14) < (((/* implicit */unsigned long long int) 1231236118))))))))));
    /* LoopSeq 3 */
    for (long long int i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) arr_12 [i_5] [i_5] [i_5] [i_5]);
        arr_19 [(_Bool)1] [i_5] = ((/* implicit */short) ((unsigned short) max((((((/* implicit */_Bool) 9619665253218254170ULL)) ? (((/* implicit */unsigned long long int) var_13)) : (10164774743719590997ULL))), (((/* implicit */unsigned long long int) ((757351178U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    }
    for (long long int i_6 = 3; i_6 < 16; i_6 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) -6470558160985765201LL))))))));
        var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) max((arr_17 [i_6]), (((/* implicit */short) (_Bool)1))))) ^ (arr_0 [i_6] [i_6 + 1]))) * (((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_3 [i_6] [10U] [i_6 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3308384617U))))) : (((/* implicit */int) arr_13 [(short)13] [i_6] [i_6 - 2] [(_Bool)1] [i_6]))))));
    }
    for (long long int i_7 = 3; i_7 < 16; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 14; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            arr_36 [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)0)))) ? (min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) 4294967295U))))), (min((((/* implicit */unsigned long long int) var_13)), (var_14))))) : (((/* implicit */unsigned long long int) ((arr_25 [i_8 - 1]) >> (((((((/* implicit */_Bool) -646000755149644859LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))) : (var_5))) - (65501U))))))));
                            arr_37 [(unsigned short)9] [i_10] [8LL] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_33 [i_7] [i_7 - 2] [i_9] [i_7] [i_8 + 2] [i_7]))) ? (var_8) : (((/* implicit */long long int) ((unsigned int) arr_27 [i_11] [i_8])))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) arr_14 [i_7 - 2] [i_8] [i_8] [i_8] [i_10] [i_12]);
                            var_27 = ((/* implicit */int) ((((unsigned int) var_7)) > (((/* implicit */unsigned int) ((int) 610283790U)))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
                        {
                            var_28 = (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_12)))))));
                            var_29 = ((/* implicit */int) arr_39 [(_Bool)0] [(_Bool)0] [i_9] [i_9] [i_10] [i_13]);
                        }
                        var_30 = ((((/* implicit */long long int) ((int) 463088741U))) | (((((/* implicit */_Bool) -967010576)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_29 [i_7] [i_7] [i_7 + 1]))));
                        var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) -6211550495752146781LL))))), (((((/* implicit */int) var_17)) ^ (((/* implicit */int) (_Bool)1))))))), (var_4)));
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9619665253218254170ULL))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2546325900U)), (var_14)))) && (((/* implicit */_Bool) ((var_13) | (((/* implicit */unsigned int) arr_0 [i_7] [(short)19])))))));
                    }
                    var_34 = ((/* implicit */unsigned short) (short)10345);
                    var_35 = ((/* implicit */unsigned int) ((var_0) >> (((((((/* implicit */_Bool) (unsigned short)1463)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10349))) : (945051599U))) - (10292U)))));
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) ((((int) ((((/* implicit */int) arr_5 [13U] [i_7] [i_7] [i_7])) ^ (arr_0 [i_7 - 1] [i_7])))) << (((/* implicit */int) ((((((/* implicit */unsigned int) arr_23 [i_7 - 3] [i_7 - 1])) % (arr_40 [i_7 + 1] [i_7 + 1]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((-6211550495752146781LL) < (((/* implicit */long long int) ((/* implicit */int) (short)24501))))))))))));
        var_37 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(arr_18 [i_7])))))) ? (max((((/* implicit */unsigned long long int) (+(arr_27 [i_7] [i_7])))), (((((/* implicit */_Bool) 389901176)) ? (((/* implicit */unsigned long long int) -6211550495752146787LL)) : (arr_26 [i_7] [i_7 - 3] [i_7 - 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) var_12)) / (-1047908011930533778LL))) <= (((/* implicit */long long int) ((int) -1)))))))));
    }
}
