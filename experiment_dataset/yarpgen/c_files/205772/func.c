/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205772
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])) && (((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 3005262959U))))))) : (((/* implicit */int) ((signed char) var_8)))));
                    var_20 = ((/* implicit */_Bool) ((short) ((short) max((var_1), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_2] [i_1]))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) min(((~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_1])))))), (max((((((/* implicit */_Bool) 15274465603733914904ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)10)))), ((~(((/* implicit */int) (unsigned char)137))))))));
                        arr_12 [i_0] [i_2] [i_1] [i_1] = ((/* implicit */short) max(((unsigned char)234), ((unsigned char)10)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) (unsigned char)15);
                        var_23 = ((/* implicit */short) var_19);
                    }
                    for (int i_5 = 4; i_5 < 16; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)10)), (((unsigned long long int) (unsigned char)246)))))));
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)15))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5 - 3] [i_5 - 3] [i_2] [i_5])) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) min((var_16), (arr_7 [i_5 - 2] [i_5 - 2] [i_2] [i_5 - 2]))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_5 [i_0])))) + (((/* implicit */int) (unsigned char)255)))))));
                        arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)-1344)), (max((-216200246), (((/* implicit */int) (short)-24013)))))))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (~(((3676951141921100861LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))));
                        arr_23 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) (unsigned char)15))))) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (4503454907519366010LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_0] [i_1] [i_0])))))));
                        var_26 -= ((/* implicit */signed char) (short)1330);
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])) | ((+(((/* implicit */int) arr_16 [i_1] [i_2 - 1] [i_2 - 1] [i_6 + 2])))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) + (((/* implicit */int) arr_21 [i_6] [i_6] [i_0]))))) - ((+(arr_13 [i_0] [i_0]))))) - ((+(4503454907519366010LL))))))));
                            arr_26 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (~(-4503454907519366019LL))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_1] [i_0] [i_1] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) << (((((/* implicit */int) (short)2739)) - (2724)))))))));
                            var_29 *= ((/* implicit */unsigned long long int) (short)1343);
                            arr_31 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_1])))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151))))))))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_31 &= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 2] [i_6 - 3] [i_6 + 3]))))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) -2057414065))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 14; i_11 += 3) 
                        {
                            {
                                arr_40 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_11] = ((/* implicit */unsigned long long int) arr_37 [i_2 - 1] [i_2 - 1] [i_11 + 2] [i_11 + 2] [i_0] [i_0]);
                                arr_41 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_32 [i_1] [i_10]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_10] [i_10])), (var_17)))) : (min((((/* implicit */long long int) arr_38 [i_0] [i_1] [i_11] [i_10] [i_1] [i_10])), (arr_13 [i_1] [i_1])))))) && (((/* implicit */_Bool) (+(-7833613752576455139LL))))));
                                var_33 |= ((/* implicit */unsigned short) ((min((arr_25 [i_2 - 1] [i_10] [i_2 - 1] [i_10] [i_2 - 1]), (((/* implicit */unsigned int) var_16)))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_14))))), (arr_27 [i_11] [i_11] [i_11 + 3] [i_11] [i_11 + 1] [i_11])))))));
                                arr_42 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (short)-1344);
                            }
                        } 
                    } 
                    arr_43 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_3)))) - (((/* implicit */int) min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) var_3))))))) & (((((/* implicit */int) arr_33 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1] [i_1])) >> (((arr_2 [i_0] [i_2 - 1] [i_0]) + (1674736401)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            {
                var_34 = ((/* implicit */unsigned long long int) arr_24 [i_13] [i_12] [i_13] [i_12] [i_12]);
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39827)))))) ? (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_16 [i_12] [i_12] [i_13] [i_13]))))) * ((-(((/* implicit */int) arr_7 [i_12] [i_12] [i_13] [i_13])))))) : (min(((-(var_2))), (((/* implicit */int) arr_7 [i_12] [i_12] [i_13] [i_13]))))));
            }
        } 
    } 
    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (+(((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_13)), (var_5))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0))))))))))));
    var_37 = ((/* implicit */long long int) var_3);
}
