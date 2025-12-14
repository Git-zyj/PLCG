/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46072
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
    var_16 = ((/* implicit */unsigned long long int) var_9);
    var_17 = ((/* implicit */short) var_3);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -148176876)) ? (((/* implicit */int) (short)-7957)) : (((/* implicit */int) (short)7935))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)7955)), (2030200569937653478ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 15190389819171749814ULL)) ? (((/* implicit */int) (short)-7957)) : (((/* implicit */int) (_Bool)0))))))) ? (((((arr_0 [i_0]) / (((/* implicit */unsigned int) var_15)))) | (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16416543503771898137ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_14)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 137438887936LL)) ? (var_15) : (((/* implicit */int) var_4))))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((+(arr_0 [i_0]))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (arr_0 [i_0]))))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (_Bool)0)))))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [(signed char)16] |= ((/* implicit */int) ((unsigned long long int) (short)-10118));
        var_21 += ((/* implicit */int) (unsigned char)237);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_6 [i_1]);
                    var_22 = ((/* implicit */unsigned int) (!(arr_11 [i_1])));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */long long int) ((/* implicit */int) ((2475057938507104809ULL) != (((/* implicit */unsigned long long int) -5269923181272456172LL)))))) / (1148417904979476480LL)))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) 5269923181272456167LL)))))));
        var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_4]))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_19 [i_4] = ((/* implicit */_Bool) var_5);
            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_4]))));
        }
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) 5269923181272456172LL)))))));
                            var_28 += ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_22 [i_8] [i_9])), (max((var_11), (((/* implicit */int) (short)7962))))))), (min((var_9), (((/* implicit */unsigned int) arr_20 [i_7] [(unsigned char)16]))))));
                            var_29 = ((/* implicit */int) max((15971686135202446806ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_10])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_24 [i_7])))))));
                        }
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((arr_32 [i_6]) ? (((/* implicit */int) arr_32 [i_11])) : (((/* implicit */int) arr_32 [i_7]))));
                            arr_34 [i_11] [i_6] = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) var_1)))));
                            var_31 = ((/* implicit */int) (+(arr_28 [i_6] [i_6])));
                        }
                        for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 14897080631043286587ULL)) ? (((/* implicit */int) arr_26 [i_6] [17LL] [i_6] [i_9])) : (((/* implicit */int) (unsigned char)249))))) != (((((/* implicit */_Bool) 6970954795922654390ULL)) ? (-3581869741324623042LL) : (-619069659289160389LL)))));
                            var_33 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) (~(((/* implicit */int) (signed char)-101)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2030200569937653478ULL)) ? (((/* implicit */int) (unsigned short)56217)) : (arr_31 [i_6] [i_6])))) ? (max((((/* implicit */long long int) var_0)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14))))))));
                        }
                        arr_39 [i_6] [i_6] = min((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)0)) ? (-3565170257707114543LL) : (((/* implicit */long long int) var_15)))))), (arr_25 [i_6] [i_7]));
                        arr_40 [i_6] [i_8] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) min((((/* implicit */short) (unsigned char)14)), ((short)13379))))) / ((-(min((((/* implicit */long long int) -443458024)), (-7983121616958661278LL)))))));
                        var_34 = ((/* implicit */int) ((long long int) ((arr_28 [i_6] [i_9]) * (((/* implicit */unsigned long long int) var_12)))));
                    }
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? (536870912LL) : (((/* implicit */long long int) ((unsigned int) var_13)))));
                }
            } 
        } 
        var_36 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (signed char)24)))));
    }
}
