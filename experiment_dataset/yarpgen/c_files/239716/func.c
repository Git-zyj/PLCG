/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239716
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
    var_13 = ((/* implicit */unsigned char) min((max((var_4), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_4)))));
    var_14 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((min((653207030U), (((/* implicit */unsigned int) (short)14286)))) + (((((/* implicit */_Bool) var_4)) ? (3641760266U) : (var_4)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((signed char) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32750)) ^ (((/* implicit */int) var_12))))))));
        var_15 = ((/* implicit */long long int) (((~(13ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)252), (((/* implicit */unsigned char) arr_1 [i_0 - 1]))))))));
        var_16 = ((/* implicit */signed char) (+(((arr_0 [i_0]) >> (((/* implicit */int) var_3))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 = ((var_1) * (((/* implicit */long long int) ((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_18 &= ((4153838268711153112ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_11 [i_3] [i_2] [i_2 + 1] [i_4])) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_2 - 1] [i_4]))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15035300141288345519ULL)) ? (((/* implicit */int) (short)-5884)) : (((/* implicit */int) var_7))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */short) var_1);
                            var_22 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_12 [i_3] [i_4] [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (14292905804998398503ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12216)) & (((/* implicit */int) var_7))))) : (((unsigned long long int) 869498827U))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 2; i_8 < 13; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7900070548654803001ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(_Bool)1] [i_2 + 1] [i_8 - 1]))) : (4153838268711153106ULL)));
                            var_25 = ((/* implicit */unsigned char) ((arr_15 [i_2 - 1] [i_8 + 3]) && (arr_15 [i_2 - 1] [i_8 - 1])));
                            arr_24 [i_3] [i_7] [i_2 + 1] [i_3] [i_2 + 1] [i_3] = ((/* implicit */short) ((unsigned int) 3483131461U));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7120030006490141111LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_1] [i_2] [i_3]))))) ? (14322955104108063574ULL) : (((/* implicit */unsigned long long int) ((8558066219892792371LL) | (((/* implicit */long long int) arr_14 [i_1] [i_2] [0U] [i_7] [i_8] [i_7]))))))))));
                            var_27 = ((/* implicit */short) (~(((((/* implicit */int) arr_20 [(_Bool)1] [i_1])) & (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned long long int i_9 = 4; i_9 < 15; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) (signed char)0);
                            arr_27 [i_1] [i_2] [i_9] [i_7] [i_7] [i_9] [i_9] &= ((/* implicit */short) (+(((/* implicit */int) var_6))));
                        }
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3])) ? (((/* implicit */long long int) 3805618597U)) : (var_1)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 7075240327515533505ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_2] [11U] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_7] [i_3] [i_2] [i_1]))));
                    }
                    var_31 *= ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 14322955104108063552ULL)));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_10 [i_1] [i_1] [i_1] [(short)13] [i_1]))));
    }
    for (short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_19 [(short)1] [i_10] [9U])) ? (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (4153838268711153112ULL))) : (((14322955104108063552ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32757))))))), (((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_10] [i_10])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_11]))) : (4153838268711153111ULL)));
            var_35 = ((/* implicit */short) ((((((/* implicit */int) arr_19 [i_10] [i_11] [i_11])) < (((/* implicit */int) arr_6 [i_10] [i_11])))) ? (7900070548654802987ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_11 [i_10] [6U] [i_11] [i_10])))))));
        }
    }
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (((((unsigned long long int) 13ULL)) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
    var_37 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (signed char)-123)), (4153838268711153112ULL))), (((/* implicit */unsigned long long int) var_0))));
}
